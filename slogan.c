#include "biblio.h"

struct t_joueur *slogan(struct t_joueur *p, struct carte1 *c,int i){
    int j;
    j=p[i].position;
    if(c[j].numero==26){    //Position 26 = case "chill" (vérifie si le joueur est dessus)
        gotoligcol(12, 115);
        printf("Bienvenue sur la case chill, Vous pouvez jouer a un jeu ");
        int ic = 0;

        do
        {
            gotoligcol(15, 115);
            printf("Tape 1 pour jouer  et tenter de gagner 25");

            printf("Sinon, tu peux ne rien faire en appuyant sur 2\t");
            scanf("%d",&ic);
        }while(ic != 1 && ic !=2); //Blindage

        if(ic == 2){
            gotoligcol(18, 115);
            printf("Ok...vous ne voulez pas jouer");
        }

        if(ic == 1)
        {
            srand(time(NULL));
            int s=0;
            int prop = 0;
            s=rand() % 4+1;


                if (s==1){
                    do{
                        gotoligcol(18, 115);
                        printf("A qui appartient ce slogan? I'm Lovin' it (Rentrer 1 2 3 4) ");
                        gotoligcol(20, 115);
                        printf("1.Burger King");
                        gotoligcol(22, 115);
                        printf("2.Mc do ");
                        gotoligcol(24, 115);
                        printf("3.Nike");
                        gotoligcol(26, 115);
                        printf("4.Slogan de Platon\t\t");
                        scanf("%d",&prop);
                        }while(prop<1 && prop>4);
                    if(prop ==2){
                        gotoligcol(28, 115);
                        printf("vous gagnez 25 euros");
                        (p)[i].argent += 25;
                    }
                    else{
                        gotoligcol(28, 115);
                        printf("Dommage mauvaise reponse \n");
                    }
                }
                if (s==2){

                        do{
                            gotoligcol(18, 115);
                            printf("A qui appartient ce slogan? Just do it (Rentrer 1 2 3 4) ");
                            gotoligcol(20, 115);
                            printf("1.Adidas");
                            gotoligcol(22, 115);
                            printf("2.Coca ");
                            gotoligcol(24, 115);
                            printf("3.Nike");
                            gotoligcol(26, 115);
                            printf("4.Apple\t\t");
                            scanf("%d",&prop);
                            }while(prop<1 && prop>4);
                            if(prop ==3){
                                gotoligcol(28, 115);
                                printf("vous gagnez 25 euros");
                                (p)[i].argent += 25;
                            }
                            else{
                                gotoligcol(28, 115);
                                printf("Dommage mauvaise reponse \n");
                            }
                        }

                if (s==3){
                    gotoligcol(18, 115);
                        do{
                            printf("A qui appartient ce slogan? Think different (Rentrer 1 2 3 4) ");
                            gotoligcol(20, 115);
                            printf("1.kinder bueno");
                            gotoligcol(22, 115);
                            printf("2.Danette ");
                            gotoligcol(24, 115);
                            printf("3.Lacoste");
                            gotoligcol(26, 115);
                            printf("4.Apple\t\t");
                            scanf("%d",&prop);
                            }while(prop<1 && prop>4);
                            if(prop ==4){
                                gotoligcol(28, 115);
                                printf("vous gagnez 25 euros");
                                (p)[i].argent += 25;
                            }
                            else{
                                gotoligcol(28, 115);
                                printf("Dommage mauvaise reponse \n");
                            }
                        }
                if (s==4){
                    gotoligcol(15, 115);
                    gotoligcol(18, 115);
                        do{
                            printf("A qui appartient ce slogan? Parce que le monde bouge (Rentrer 1 2 3 4) ");
                            gotoligcol(20, 115);
                            printf("1.CIC");
                            gotoligcol(22, 115);
                            printf("2.Twix ");
                            gotoligcol(24, 115);
                            printf("3.Yves Rocher");
                            gotoligcol(26, 115);
                            printf("4.Caprice des Dieux\t\t");
                            scanf("%d",&prop);
                            }while(prop<1 && prop>4);
                            if(prop ==1){
                                gotoligcol(28, 115);
                                printf("vous gagnez 25 euros");
                                (p)[i].argent += 25;
                            }
                            else{
                                gotoligcol(28, 115);
                                printf("Dommage mauvaise reponse \n");
                            }
                        }
                }

}
return p;
}
