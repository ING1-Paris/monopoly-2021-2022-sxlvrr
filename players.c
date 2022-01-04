#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct t_joueur{
    char nom[20];
    int numero;
    int argent;
    int possessions[30];
}joueur;

joueur *players(){
    joueur *p = (joueur *)malloc(4*sizeof(joueur));
    
    joueur tempj1 = {"Oscar", 1, 6500, NULL};
    p[0] = tempj1;
    //strcpy(p[1].possessions, "");


    strcpy (p[2].nom, "Alex");
    p[1].numero = 3;
    p[1].argent = 6500;
    strcpy(p[2].possessions, "");

    strcpy (p[3].nom, "Mathis");
    p[2].numero = 3;
    p[2].argent = 6500;
    strcpy(p[3].possessions, "");

    strcpy (p[4].nom, "Loup");
    p[3].numero = 4;
    p[3].argent = 6500;
    strcpy(p[4].possessions, "");

    return p;
}