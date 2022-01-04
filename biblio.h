#ifndef BIBLI
#define BIBLI
#include <Windows.h>
#include "Color.c"
#include "gotoligcol.c"
#include "caseNew.c"
#include "movePion.c"
struct t_joueur{
    char nom[20];
    int numero;
    int argent;
    int position;
    int enprison;
    int possessions[30];
};


int my_strlen(const char *str);

void nouvellePartie(void);
void Color(int couleurDuTexte,int couleurDeFond);
void gotoligcol(int lig, int col);
void grilleJeux(void);
void afficheregle(void);
void caseNew(int lig, int col, int color, int colorBack, char name[]);
struct t_joueur* movePion(struct t_joueur *p);

#endif // BIBLI
