#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct t_joueur{
    char nom[20];
    int numero;
    int argent;
    int position;
    int possessions[30];
}joueur;

joueur *players(){
    joueur *p = (joueur *)malloc(4*sizeof(joueur));
    
    joueur j1 = {"", 1, 0, 0, NULL};
    p[0] = j1;
    joueur j2 = {"", 1, 0, 0, NULL};
    p[1] = j2;
    joueur j3 = {"", 1, 0, 0, NULL};
    p[2] = j3;
    joueur j4 = {"", 1, 0, 0, NULL};
    p[3] = j4;
    //strcpy(p[1].possessions, "")

    return p;
}