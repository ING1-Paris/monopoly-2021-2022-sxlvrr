#include <stdio.h>
#include <stdlib.h>

//bibliotheque des fonctions perso du projet
#include "biblio.h"

int main()
{
    //variable
    int choixUser = 0;
    int choixPossible[4] = {1,2,3,4};

    printf("Bienvenu sur monopoly world !\n");
    printf("Veuillez nous indiquer ce que vous voulez faire\n");
    printf("1- lancer une nouvelle partie\n");
    printf("2- sauvegarder la partie en cours\n");
    printf("3- charger une partie precedente\n");
    printf("4- afficher les regles\n");

    // S = a * b * c * d si a = 1 mais que b + c + d = 0 alors S = 0 sois conditions non verifier
    while (choixUser != choixPossible[0] && choixUser != choixPossible[1] && choixUser != choixPossible[2] && choixUser != choixPossible[3])
    {
        printf("faites votre choix: \n");
        scanf("%d", &choixUser);
    }
    if (choixUser == 1)
    {
        nouvelle partie();
    }
    else if (choixUser == 2)
    {
        sauvegarder_une_partie();
    }
    else if (choixUser == 3)
    {
        charger_une_partie();
    }
    else if (choixUser == 4)
    {
        afficheregle();
    }
        
        return 0;
}
