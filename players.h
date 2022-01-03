#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void portefeuille();
void









struct joueur{
    char nom[20];
    int numero;
    int argent;
    char possessions[30];
};

int players(){
    struct joueur p1; // JOUEUR 1
    strcpy (p1.nom, "Oscar");
    p1.numero = 1;
    p1.argent = 6500;
    strcpy(p1.possessions, "");

    struct joueur p2; // JOUEUR 2
    strcpy (p2.nom, "Alex");
    p2.numero = 3;
    p2.argent = 6500;
    strcpy(p1.possessions, "");

    struct joueur p3; // JOUEUR 3
    strcpy (p3.nom, "Mathis");
    p3.numero = 3;
    p3.argent = 6500;
    strcpy(p1.possessions, "");

    struct joueur p4; // JOUEUR 4
    strcpy (p4.nom, "Loup");
    p4.numero = 4;
    p4.argent = 6500;
    strcpy(p1.possessions, "");
    
}