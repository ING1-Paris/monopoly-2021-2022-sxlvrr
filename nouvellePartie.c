#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblio.h"
#include <Windows.h>
void nouvellePartie(){
    int argentDepart = 10000;
    int i, choixUser = 0;

     do {
        printf("Veuillez entrer le nombre de joueurs entre 2 et 4: ");
        scanf("%d", &choixUser);
    } while (choixUser < 2 || choixUser > 4);

    int tailleTab = choixUser;
    int Joueurs[tailleTab];

    for(i = 1;i < tailleTab + 1;i++)
    {
        Joueurs[i] = i;
    }

    size_t tailleTabPions = sizeof(Joueurs)/sizeof(Joueurs[0]);

    int pions[tailleTabPions];
    for(i = 1;i < tailleTabPions + 1;i++)
    {
        pions[i] = Joueurs[i];
    }
    printf("Il y a %d joueurs dans la partie\n",tailleTabPions);
    printf("La partie peut commencer\n");
    Sleep(1000);
    system("cls");
    printf("Generation de la grille de jeux en cours\n");
    printf("Que le jeu commence !");
    printf("|");
    for(int z=0;z<15;z++){
        printf("-");
        Sleep(100);

    }
    printf("|");
    system("cls");
    int lanceur,deScore = 0;
    lanceur = lanceurDe(tailleTabPions);
    deScore = lancerDes();
    printf("de obtenue: %d\n",deScore);


}