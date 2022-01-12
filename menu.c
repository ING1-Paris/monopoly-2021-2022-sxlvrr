// bibliotheque des fonctions perso du projet
#include "biblio.h"

struct t_joueur *menu(struct t_joueur *p){
    int choixUser = 0;
    do {
    system("cls");
    gotoligcol(5,90);
    printf("Bienvenu sur monopoly Marque !\n");
    gotoligcol(8,82);
    printf("Veuillez nous indiquer ce que vous voulez faire\n");
    gotoligcol(14,88);
    printf("1- lancer une nouvelle partie\n");
    gotoligcol(19,86);
    printf("2- sauvegarder la partie en cours\n");
    gotoligcol(24,86);
    printf("3- charger une partie precedente\n");
    gotoligcol(29,90);
    printf("4- afficher les regles\n");
    gotoligcol(34,92);
    printf("Faites votre choix:\t\t");
    scanf("%d",&choixUser);

    }while (choixUser < 1 || choixUser > 4);

    if (choixUser == 1)
        {
            nouvellePartie(p);
        }
        else if (choixUser == 2)
        {
            //sauvegarder_une_partie();
            printf("a coder");
        }
        else if (choixUser == 3)
        {
            //charger_une_partie();
            printf("a coder");
        }
        else if (choixUser == 4)
        {
            system("cls");
            regles(p);

        }
        return p;
    }

