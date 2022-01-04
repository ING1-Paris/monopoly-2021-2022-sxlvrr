#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
//bibliotheque des fonctions perso du projet
#include "biblio.h"

int main()
{
    //variable
    int choixUser = 0;
    int choixPossible[4] = {1,2,3,4};

    /*printf("Bienvenu sur monopoly Marque !\n");
    printf("Veuillez nous indiquer ce que vous voulez faire\n");
    printf("1- lancer une nouvelle partie\n");
    printf("2- sauvegarder la partie en cours\n");
    printf("3- charger une partie precedente\n");
    printf("4- afficher les regles\n");

    // S = a * b * c * d si a = 1 mais que b + c + d = 0 alors S = 0 sois conditions non verifier
    do{
    
        printf("faites votre choix: \n");
        scanf("%d", &choixUser);
    
        if (choixUser == 1)
        {
            printf("test");
            //nouvelle_partie();
        }/*
        else if (choixUser == 2)
        {
        // sauvegarder_une_partie();
        }
        else if (choixUser == 3)
        {
        // charger_une_partie();
        }
        else if (choixUser == 4)
        {
            //afficheregle();*/
    //}
    //while (choixUser != choixPossible[0] && choixUser != choixPossible[1] && choixUser != choixPossible[2] && choixUser != choixPossible[3]);

    ///////////////PLATEAU////////////////////////////////
    system("cls");
    caseNew(0,0,0,15, "Depart"); //Depart
    caseNew(0,13,0,9,"Wish");//Wish
    caseNew(0,26,0,9,"Epicier");//Epicier
    caseNew(0,39,0,15,"Commu");//Commu
    caseNew(0,52,0,9,"Action");//Action
    caseNew(0,65,0,7,"EDF");//EDF
    caseNew(0,78,0,13,"LIDL");//LIDL
    caseNew(0,91,0,13,"Franprix");//Fraprix
    caseNew(5,0,0,15,"Chance"); //CHANCE
    caseNew(5,91,0,15,"Chance");// CHANCE
    caseNew(10,0,0,1,"Bugatti");//Bugatti
    caseNew(10,91,0,13,"Monoprix");//Monoprix
    caseNew(15,0,0,15,"Impot");// Impot
    caseNew(15,91,0,7,"Visite");// Visite Prison
    caseNew(20,0,0,7,"SNCF");//SNCF
    caseNew(20,91,0,2,"Nike");//NIkE
    caseNew(25,0,0,1,"Rolex");//ROLEX
    caseNew(25,91,0,7,"AirFrance");//AIRFRANCE
    caseNew(30,0,0,4,"Enchere");//ENCHERE
    caseNew(30,91,0,2,"Adidas");//ADIDAS
    caseNew(35,0,0,8,"Prison");//Prison
    caseNew(35,91,0,2,"Rebook");//Rebook
    caseNew(40,0,0,14,"Gucci");//GUCCI
    caseNew(40,91,0,15,"Station");//STATIONNEMENT
    caseNew(45,0,0,7,"Taxes");//TAXE
    caseNew(45,13,0,14,"L-V");//LV
    caseNew(45,26,0,7,"RATP");//RATP
    caseNew(45,39,0,7,"Suez");//Suez
    caseNew(45,52,0,12,"Xaomi");//Xaomi
    caseNew(45,65,0,12,"Samsung");//Samsung
    caseNew(45,78,0,15,"Commu");//COMMU
    caseNew(45,91,0,12,"Apple");//APPLE

    
    return 0;
}
