#include "biblio.h"
struct t_joueur *achatCarte(struct t_joueur *p, struct carte1 *c,int nb,int i)
{
    int achat;
    int j;
    int appartient=0;
    int maison=0;
    int cptmaison;
    int nbrmaison=0;
    int hotel, cpthotel=0, nbrhotel =0;

    j=p[i].position;
    if(c[j].numero==26){
        gotoligcol(12, 115);
        printf("Bienvenue sur la case chill, il ne se passe... rien");
    }
    if((c[j].numero==1||c[j].numero==2||c[j].numero==4||c[j].numero==5||c[j].numero==6||c[j].numero==7||c[j].numero==9||c[j].numero==11||c[j].numero==12||c[j].numero==13||c[j].numero==14||c[j].numero==16||c[j].numero==18||c[j].numero==19||c[j].numero==20||c[j].numero==21||c[j].numero==22||c[j].numero==24||c[j].numero==27||c[j].numero==28||c[j].numero==30))
    {

        if(p[i].possessions==c[j].nom)
        {
            gotoligcol(12, 115);
            printf("Cette carte t'appartient");

        }
        for (int k=0; k<nb; k++)
        {
            if(k==i)
            {
                k+=1;
            }
            else
            {
                if(p[k].possessions[j]==c[j].nom)// verifie si la carte appartient deja a quelqu'un si oui on ne peut pas la acheter et on paye un loyer
                {
                    gotoligcol(12, 115);
                    printf("Cette carte appartient deja a quelqu'un");
                        if(c[j].nbM==0 && c[j].nbH==0){
                            p[i].argent -=c[j].loyer;
                            gotoligcol(15, 115);
                            printf("Vous perdez %d",c[j].loyer);
                    }
                    else if(c[j].nbM==1){// loyer avec 1 maison
                            p[i].argent -=c[j].m1;
                            gotoligcol(15, 115);
                            printf("Vous perdez %d",c[j].m1);
                    }
                    else if(c[j].nbM==2){// loyer avce 2 maisons
                            p[i].argent -=c[j].m2;
                            gotoligcol(15, 115);
                            printf("Vous perdez %d",c[j].m2);
                    }
                    else if(c[j].nbM==3){ // loyer avec 3 maisons
                            p[i].argent -=c[j].m3;
                            gotoligcol(15, 115);
                            printf("Vous perdez %d",c[j].m3);
                    }
                    else if(c[j].nbM==4){// loyer avec 4 maisons
                            p[i].argent -=c[j].m4;
                            gotoligcol(15, 115);
                            printf("Vous perdez %d",c[j].m4);
                    }
                    else if(c[j].nbH==1){// loyer avec 1 hotel
                            p[i].argent -=c[j].h;
                            gotoligcol(15, 115);
                            printf("Vous perdez %d",c[j].h);
                    }
                }

            }
        }


        // Verifie si la propriete appartient a qulequ un et propose en suite d acheter la propriete en tapant 1 ou 0
        if(p[i].possessions[j]!=c[j].nom && appartient==0)
        {
            do
            {
                gotoligcol(12, 115);
                printf("%s, Voulez vous acheter %s, 1 pour oui, 0 pour non\t\t",p[i].nom,c[j].nom);
                scanf("%d",&achat);
            }
            while(achat!=1 && achat!=0);//blindage
            if(achat==0)
            {
                appartient=0;
                return p;
            }

            if(achat==1)// si le joueur veut acheter
            {
                p[i].argent-=c[j].prixC;
                gotoligcol(15, 115);
                printf("Vous avez acheter %s pour %d euros",c[j].nom,c[j].prixC);
                p[i].possessions[j]=c[j].nom;
                gotoligcol(18, 115);
                printf("Bravo pour votre achat! %s vous appartient",c[j].nom);
                gotoligcol(21, 115);
                if((c[j].numero!=5 ||c[j].numero!=21 ||c[j].numero!=12 ||c[j].numero!=28 ||c[j].numero!=20) && c[j].nbH==0){
                printf("Voulez vous acheter une maison sur cette propriete?");
                gotoligcol(24, 115);
                do{
                printf("Entrez 1 pour oui ou 0\t");
                scanf("%d",&maison);
                }while(maison!=0 && maison !=1);

                if(maison==1 && c[j].nbM<=4 && c[j].nbM>=0){ // FAIRE LA MISE EN PAGE
                    gotoligcol(27, 115);
                    do{
                    printf("Combien en voulez vous?\t");
                    scanf("%d",&nbrmaison);
                    }while(nbrmaison<0 && nbrmaison>5);
                    c[j].nbM=nbrmaison;
                    movePion(p,nb,c);
                    cptmaison+=nbrmaison;
                }
                if(cptmaison>=32){
                    gotoligcol(30, 115);
                    printf("Il n'y a plus de maison disponible veuillez attendez que quelqu'un en enleve");
                    gotoligcol(33, 115);
                    printf("Vous avez eu %d maison sur %d voulu",cptmaison-32,nbrmaison);
                    c[j].nbM=cptmaison-32;
                }
                else{
                    p[i].argent-= nbrmaison * c[j].prixM;
                    printf("Vous avez achete %d maison !",nbrmaison);
                }
                if(c[j].nbM>=4){
                    gotoligcol(27, 115);
                    do{
                    printf("Voulez vous acheter un hotel?(1 ou 0)\t");
                    scanf("%d",&hotel);
                    }while(hotel!=0 && hotel!=1);
                    if(cpthotel>12){
                    gotoligcol(30, 115);
                    printf("Il n'y a plus d'hotel disponible veuillez attendez que quelqu'un en enleve");
                    }
                    }
                    if(hotel==1 && cpthotel<=12 && cpthotel>=0){
                        gotoligcol(30, 115);
                        p[i].argent-=c[j].prixH;
                        printf("Bravo pour l'ouverture de votre Hotel!");
                        c[j].nbM=0;
                        c[j].nbH=1;
                        cptmaison-=4;
                        cpthotel+=1;

                    }


                }

                }
            }

        }
        return p;

    }






