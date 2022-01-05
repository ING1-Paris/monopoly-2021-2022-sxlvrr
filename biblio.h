#ifndef BIBLI
#define BIBLI
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>




void gotoligcol( int lig, int col ) {

// ressources

COORD mycoord;

mycoord.X = col;

mycoord.Y = lig;

SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );

}


void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}

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
struct t_joueur{
    char nom[20];
    int numero;
    int argent;
    int position;
    int enprison;
    int carteprison;
    int possessions[30];
    int faillite;
};
struct t_joueur *p;
struct t_joueur *initp();
struct carte1 *c;
struct carte1 *initc();

int menu();

void regles();

int achatCarte(struct t_joueur *p, struct carte1 *c);

int cartechance(struct t_joueur *p);

int cartecommu(struct t_joueur *p);

void movePion(struct t_joueur *p);


#endif // BIBLI
