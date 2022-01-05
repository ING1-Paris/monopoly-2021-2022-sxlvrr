#ifndef BIBLI
#define BIBLI
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
struct carte1 *c;
void regles();

void movePion(struct t_joueur *p, int i);
#endif // BIBLI
