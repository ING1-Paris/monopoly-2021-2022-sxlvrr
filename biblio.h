#ifndef BIBLI
#define BIBLI

typedef struct t_joueur{
    char nom[20];
    int numero;
    int argent;
    int position;
    int possessions[30];
}joueur;

int my_strlen(const char *str);

void nouvellePartie(void);
void Color();
void gotoligcol();
void grilleJeux(void);
void afficheregle(void);
void caseNew();
#endif // BIBLI
