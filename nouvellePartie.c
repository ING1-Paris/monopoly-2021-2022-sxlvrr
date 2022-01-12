#include "biblio.h"
struct t_joueur *nouvellePartie(struct t_joueur *p)
{
    printf("%d",p[0].numero);
    int i;
    for(i=0; i<4; i++)
    {
        (p)[i].argent=1000; //Initialisation de l'argent de tous les joueurs à 1000 euros
    }

        system("cls");  //"nettoyage" de l'écran
        gotoligcol(0,92);   //Positionnement des instructions au bon endroit de l'écran
        printf("La partie peut commencer\n");
        Sleep(1000);
        system("cls");
        gotoligcol(3,85);
        printf("Generation de la grille de jeux en cours\n");
        gotoligcol(7,85);
        printf("|");    //effets visuels
        for(int z=0; z<37; z++)
        {
            printf("-");
            Sleep(100);

        }
        printf("|");
        gotoligcol(10,92);
        printf("Que le jeu commence !");
        system("cls");
        return p;
    }

