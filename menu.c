#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
// bibliotheque des fonctions perso du projet
#include "biblio.h"
#include <string.h>

int menu(){
    int choixUser = 0;
    int choixPossible[4] = {1, 2, 3, 4};
    do {
    printf("Bienvenu sur monopoly Marque !\n");
    printf("Veuillez nous indiquer ce que vous voulez faire\n");
    printf("1- lancer une nouvelle partie\n");
    printf("2- sauvegarder la partie en cours\n");
    printf("3- charger une partie precedente\n");
    printf("4- afficher les regles\n");

    // S = a * b * c * d si a = 1 mais que b + c + d = 0 alors S = 0 sois conditions non verifier
    

        printf("faites votre choix: \n");
        scanf("%d", &choixUser);

        
    }while (choixUser != choixPossible[0] || choixUser != choixPossible[1] || choixUser != choixPossible[2] || choixUser != choixPossible[3]);
    return choixUser;
    }
    