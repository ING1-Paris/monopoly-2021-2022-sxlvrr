#include "biblio.h"

struct carte1 *addMaison(struct t_joueur *p, struct carte1 *c,int nb, int i)
{
    int maison,hotel;
    int j;
    int nM,nH;
    int nbrmaison, nbrhotel;
    int appartient=0;

    nM=c[1].nbM+c[2].nbM+c[4].nbM+c[6].nbM+c[7].nbM+c[9].nbM+c[11].nbM+c[13].nbM+c[14].nbM+c[16].nbM+c[18].nbM+c[19].nbM+c[22].nbM+c[24].nbM+c[27].nbM+c[30].nbM;
    nH=c[1].nbH+c[2].nbH+c[4].nbH+c[6].nbH+c[7].nbM+c[9].nbH+c[11].nbH+c[13].nbH+c[14].nbH+c[16].nbH+c[18].nbH+c[19].nbH+c[22].nbH+c[24].nbH+c[27].nbH+c[30].nbH;


    j=p[i].position;


    if(p[i].possessions[j]==c[j].nom)
        {
            appartient=1;
        }


    if((c[j].numero==1||c[j].numero==2||c[j].numero==4||c[j].numero==5||c[j].numero==6||c[j].numero==7||c[j].numero==9||c[j].numero==11||c[j].numero==12||c[j].numero==13||c[j].numero==14||c[j].numero==16||c[j].numero==18||c[j].numero==19||c[j].numero==20||c[j].numero==21||c[j].numero==22||c[j].numero==24||c[j].numero==27||c[j].numero==28||c[j].numero==30))
    {   //MEME condition que achat carte
        if((/*c[j].hypo=0 && */appartient==1 && c[j].numero!=5 && c[j].numero!=21 &&c[j].numero!=12 &&c[j].numero!=28 &&c[j].numero!=20) && c[j].nbH==0 )
        {
            if(c[j].nbM<4 && p[i].possessions[j]==c[j].nom){
            printf("Voulez vous acheter une maison sur cette propriete?");
            gotoligcol(24, 115);
            do
            {
                printf("Entrez 1 pour oui ou 0\t");
                scanf("%d",&maison);
            }
            while(maison!=0 && maison !=1);

            if(maison==1 && c[j].nbM<4 && c[j].nbM>=0) // SI PAS DE MAISON
            {
                gotoligcol(27, 115);
                do
                {
                    printf("Combien en voulez vous?\t");
                    scanf("%d",&nbrmaison);
                }
                while(nbrmaison<=0 || nbrmaison>=5);
                c[j].nbM=nbrmaison;
                displayM(p,c,i,nb);
            }
            if(maison==0){
                return c;
            }
            nM=c[1].nbM+c[2].nbM+c[4].nbM+c[6].nbM+c[7].nbM+c[9].nbM+c[11].nbM+c[13].nbM+c[14].nbM+c[16].nbM+c[18].nbM+c[19].nbM+c[22].nbM+c[24].nbM+c[27].nbM+c[30].nbM;
            nH=c[1].nbH+c[2].nbH+c[4].nbH+c[6].nbH+c[7].nbM+c[9].nbH+c[11].nbH+c[13].nbH+c[14].nbH+c[16].nbH+c[18].nbH+c[19].nbH+c[22].nbH+c[24].nbH+c[27].nbH+c[30].nbH;

            if(nM>32)
            {
                gotoligcol(30, 115);
                printf("Il n'y a plus de maison disponible veuillez attendez que quelqu'un en enleve");
                gotoligcol(33, 115);
                printf("Vous avez eu %d maison sur %d voulu",nM-32,nbrmaison);
                displayM(p,c,i,nb);
                c[j].nbM=nM-32;
            }
            else
            {
                if(p[i].argent>=nbrmaison * c[j].prixM)
                {
                    gotoligcol(30, 115);
                    p[i].argent-= nbrmaison * c[j].prixM;
                    printf("Vous avez achete %d maison pour %d!",nbrmaison,nbrmaison*c[j].prixM);
                }
                else
                {
                    gotoligcol(30, 115);
                    printf("Vous n'avez pas assez d'argent, demandez moins la prochaine fois ;)");
                }
            }
            }
            if(c[j].nbM>3 && c[j].nbH<1)        // SI 4 MAISONS ALORS PEUT HOTEL
            {
                gotoligcol(27, 115);
                do
                {
                    printf("Voulez vous acheter un hotel?(1 ou 0)\t");
                    scanf("%d",&hotel);
                }
                while(hotel!=0 && hotel!=1);

            }
            if(hotel==1 && nH<13)
            {
                if(p[i].argent>=c[j].prixH)
                {
                    gotoligcol(33, 115);
                    p[i].argent-=c[j].prixH;
                    printf("Bravo pour l'ouverture de votre Hotel!");
                    c[j].nbM=0;
                    c[j].nbH=1;
                    displayM(p,c,i,nb);

                }
                else
                {
                    gotoligcol(33,115);
                    printf("Vous n'avez pas assez d'argent!");
                }
nM=c[1].nbM+c[2].nbM+c[4].nbM+c[6].nbM+c[7].nbM+c[9].nbM+c[11].nbM+c[13].nbM+c[14].nbM+c[16].nbM+c[18].nbM+c[19].nbM+c[22].nbM+c[24].nbM+c[27].nbM+c[30].nbM;
nH=c[1].nbH+c[2].nbH+c[4].nbH+c[6].nbH+c[7].nbM+c[9].nbH+c[11].nbH+c[13].nbH+c[14].nbH+c[16].nbH+c[18].nbH+c[19].nbH+c[22].nbH+c[24].nbH+c[27].nbH+c[30].nbH;
                if(nH>12)
                {
                    gotoligcol(33, 115);
                    printf("Il n'y a plus d'hotel disponible veuillez attendez que quelqu'un en enleve");
                    c[j].nbH=0;
                    c[j].nbM=4;
                    displayM(p,c,i,nb);
                }


            }


        }
    }
    return c;
}
