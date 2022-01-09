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
    int nbM;
    int nbH;
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
    char *possessions[30];
    int faillite;
};
struct t_joueur *initp();

void plateau(struct t_joueur *p, int nb);

struct t_joueur *menu(struct t_joueur *p);

struct t_joueur *nouvellePartie(struct t_joueur *p);

struct t_joueur *cartechance(struct t_joueur *p,int nb,int i);

struct t_joueur *cartecommu(struct t_joueur *p, int nb,int i);

void regles(struct t_joueur *p);

struct t_joueur *achatCarte(struct t_joueur *p, struct carte1 *c,int nb, int i);

void movePion(struct t_joueur *p, int nb,struct carte1 *c);

struct t_joueur *addMaison(struct t_joueur *p);
void sauvegarde(struct t_joueur *p, int nbj );

#endif // BIBLI

