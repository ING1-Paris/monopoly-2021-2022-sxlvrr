#include "biblio.h"
struct t_joueur *achatCarte(struct t_joueur *p, struct carte1 *c,int nb,int i)
{
    int achat;
    int j;
    int appartient=1;

    j=p[i].position;
    if(c[j].numero==26){
        gotoligcol(12, 115); // Realisation case SLOGAN
        slogan(p,c,i);
    }
    if(c[j].numero==23){
        gotoligcol(12, 115);
        printf("Bienvenue sur la case Impot, Comme bon citoyen francais vous payez 100e d'impot  "); // CASE IMPOT
       (p)[i].argent -= 100;
    }
    if(c[j].numero==29){
        gotoligcol(12, 115);
        printf("Bienvenue sur la case Taxes, Francais que vous etes vous payez 100e  "); // CASE TAXE
       (p)[i].argent -= 100;
    }
    if((c[j].numero==1||c[j].numero==2||c[j].numero==4||c[j].numero==5||c[j].numero==6||c[j].numero==7||c[j].numero==9||c[j].numero==11||c[j].numero==12||c[j].numero==13||c[j].numero==14||c[j].numero==16||c[j].numero==18||c[j].numero==19||c[j].numero==20||c[j].numero==21||c[j].numero==22||c[j].numero==24||c[j].numero==27||c[j].numero==28||c[j].numero==30))
    {                                                               //Verifie si c'est un carte achetable

        if(p[i].possessions[j]==c[j].nom)//Verifie si elle appartient deja au joueur en question
        {
            gotoligcol(12, 115);
            printf("Cette carte t'appartient");
            appartient=0;
        }
        for (int k=0; k<nb; k++)
        {
            if(k==i)
            {
                printf("");
            }
            else if(k!=i)
            {
                if(p[k].possessions[j]==c[j].nom)
                {
                    gotoligcol(12, 115);
                    printf("Cette carte appartient deja a quelqu'un");          // Verifie si elle appartient à un autre joueur
                    appartient=1;

                        if(c[j].nbM==0 && c[j].nbH==0 /*&& c[j].hypo==0*/){
                            p[i].argent -=c[j].loyer;
                            p[k].argent +=c[j].loyer;
                            gotoligcol(15, 115);
                            printf("Vous perdez %d",c[j].loyer);    //SANS BATIMENT
                            appartient=0;
                    }
                    else if(c[j].nbM==1){
                            p[i].argent -=c[j].m1;      // Avec une maison
                            p[k].argent +=c[j].m1;
                            gotoligcol(15, 115);
                            printf("Vous perdez %d",c[j].m1);
                            appartient=0;
                    }
                    else if(c[j].nbM==2){
                            p[i].argent -=c[j].m2;      // Avec deux maisons
                            p[k].argent +=c[j].m2;
                            gotoligcol(15, 115);
                            printf("Vous perdez %d",c[j].m2);
                            appartient=0;
                    }
                    else if(c[j].nbM==3){
                            p[i].argent -=c[j].m3;      //Avec 3 maisons
                            p[k].argent +=c[j].m3;
                            gotoligcol(15, 115);
                            printf("Vous perdez %d",c[j].m3);
                            appartient=0;
                    }
                    else if(c[j].nbM==4){
                            p[i].argent -=c[j].m4;      //Avec 4 maisons
                            p[k].argent +=c[j].m4;
                            gotoligcol(15, 115);
                            printf("Vous perdez %d",c[j].m4);
                            appartient=0;
                    }
                    else if(c[j].nbH==1){
                            p[i].argent -=c[j].h;       //Avec un hotel
                            p[k].argent +=c[j].h;
                            gotoligcol(15, 115);
                            printf("Vous perdez %d",c[j].h);
                            appartient=0;
                    }
                }
                else{

                }

            }
        }



        if(p[i].possessions[j]!=c[j].nom && appartient==1) //Si elle appartient à personne il peut alors l'acheter
        {
            do
            {
                gotoligcol(12, 115);
                printf("%s, Voulez vous acheter %s, 1 pour oui, 0 pour non\t\t",p[i].nom,c[j].nom);
                scanf("%d",&achat);
            }
            while(achat!=1 && achat!=0);
            if(achat==0)
            {
                appartient=0;
                return p;
            }

            if(achat==1&&p[i].argent>=c[j].prixC)
            {
                p[i].argent-=c[j].prixC;
                gotoligcol(15, 115);
                printf("Vous avez acheter %s pour %d euros",c[j].nom,c[j].prixC);
                p[i].possessions[j]=c[j].nom;
                gotoligcol(18, 115);
                printf("Bravo pour votre achat! %s vous appartient",c[j].nom);
                terrain(i,p,c);
                gotoligcol(21, 115);

                }
                else{
                    gotoligcol(15, 115);
                    printf("Vous n'avez pas assez d'argent"); // PAS D'argent
                }
            }

        }
        return p;

    }






