#ifndef BIBLI
#define BIBLI
#include <Windows.h>
#include "Color.c"
#include "gotoligcol.c"
#include "caseNew.c"
#include "movePion.c"
#include "biblio.c"
#include "regles.c"

struct t_joueur{
    char nom[20];
    int numero;
    int argent;
    int position;
    int enprison;
    int possessions[30];
};
struct t_joueur *p;
void regles();
#endif // BIBLI
