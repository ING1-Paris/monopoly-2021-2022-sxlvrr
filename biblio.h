#ifndef BIBLI
#define BIBLI
#include <Windows.h>
#include "Color.c"
#include "gotoligcol.c"
#include "caseNew.c"
#include "movePion.c"
#include "regles.c"
struct carte1 {
    char nom[200];
    int prixC;
    int loyer,loyerGr;
    int m1,m2,m3,m4,h;
    int prixM,prixH;
    int hyp;
    int deshyp;
    int numero;
};
struct t_joueur{
    char nom[20];
    int numero;
    int argent;
    int position;
    int enprison;
    int possessions[30];
    int faillite;
};
struct t_joueur *p;
void regles();
#endif // BIBLI
