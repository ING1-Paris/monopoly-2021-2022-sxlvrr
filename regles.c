// bibliotheque des fonctions perso du projet
#include "biblio.h"


void regles() {  // affichage des règles du jeu on sort avec la touche s (s par rapport à sortie)
    char sortie;
    printf("                 REGLE DU Jeu ");
    printf("\n                    ");
    printf("\n                  ");
    printf("\n                  ");
    printf("\n    	     ");
    printf("\n      ");
    printf("\n	");
    printf("\n");
    printf("\n 	");
    printf("\n");
    printf("\n	");
    printf("\n           ");
    printf("\n            ");
    printf("\n            ");
    do {
        printf("\nPour revenir au menu principal, appuyez sur la touche 's'. ");
        scanf("%c", &sortie);
    } while (sortie != 's');
    if(sortie=='s'){
        menu();
    }

}