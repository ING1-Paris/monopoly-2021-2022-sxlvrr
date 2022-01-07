#ifndef BIBLI
#define BIBLI
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <time.h>
void gotoligcol( int lig, int col );
void Color(int couleurDuTexte,int couleurDeFond);

void caseNew(int lig, int col, int color, int colorBack, char name[]);

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
struct carte1 *initc();

struct t_joueur{
    char nom[20];
    int numero;
    int argent;
    int position;
    int enprison;
    int carteprison;
    int toursprison;
    int possessions[30];
    int faillite;
};
struct t_joueur *initp();


int menu(struct t_joueur *p);

int nouvellePartie(struct t_joueur *p);

int cartechance(struct t_joueur *p, int i);

int cartecommu(struct t_joueur *p, int i);

void regles(struct t_joueur *p);

int achatCarte(struct t_joueur *p, struct carte1 *c);

void movePion(struct t_joueur *p);


#endif // BIBLI

