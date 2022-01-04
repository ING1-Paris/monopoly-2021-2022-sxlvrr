#ifndef BIBLI
#define BIBLI
#include <Windows.h>
#include "Color.c"
#include "gotoligcol.c"
#include "caseNew.c"

typedef struct t_joueur{
    char nom[20];
    int numero;
    int argent;
    int position;
    int enprison;
    int possessions[30];
}joueur;


int my_strlen(const char *str);

void nouvellePartie(void);
void Color(int couleurDuTexte,int couleurDeFond);
void gotoligcol(int lig, int col);
void grilleJeux(void);
void afficheregle(void);
void caseNew(int lig, int col, int color, int colorBack, char name[]);
void movePion(joueur, int positionTableau);

#endif // BIBLI
