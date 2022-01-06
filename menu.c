// bibliotheque des fonctions perso du projet
#include "biblio.h"

int menu(struct t_joueur *p){
    int choixUser = 0;
    do {
    printf("Bienvenu sur monopoly Marque !\n");
    printf("Veuillez nous indiquer ce que vous voulez faire\n");
    printf("1- lancer une nouvelle partie\n");
    printf("2- sauvegarder la partie en cours\n");
    printf("3- charger une partie precedente\n");
    printf("4- afficher les regles\n");
    printf("faites votre choix: \n");
    scanf("%d", &choixUser);

        
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
            regles();
            
        }
    }
    