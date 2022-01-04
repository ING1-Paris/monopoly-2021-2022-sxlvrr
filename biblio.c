#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void regles() {  // affichage des règles du jeu on sort avec la touche s (s par rapport à sortie)
    char sortie;
    printf("                 REGLE DU Jeu ");
    printf("\                     ");
    printf("\n                  ");
    printf("\n                  ");
    printf("\n    	     ");
    printf("\n      ");
    printf("\n	");
    printf("\n");
    printf("\n 	");
    printf("\n");
    printf("\n	");
    printf("\n           ");
    printf("\n            ");
    printf("\n            ");
    do {
        printf("\nPour revenir au menu principal, appuyez sur la touche 's'. ");
        scanf("%c", &sortie);
    } while (sortie != 's');  
}
int my_strlen(const char *str){
    int i;
    i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}



int lanceurDe(tailleTabPions)
{
    int i = 0;
    int choixUser;
    printf("qui lance les des: ");
    for(i = 1;i<tailleTabPions+1;i++)
    {
        printf("joueur %d ?(1/0)\n",i);
        scanf("%d",&choixUser);
        while(choixUser != 1 && choixUser != 0){
            scanf("%d",&choixUser);
            if(choixUser == 1)
                {
                    return i;
                }


            }
    }
}

int lancerDes()
{

    srand(time(NULL));
    int nbgen = rand() % 6 + 1;
    return nbgen;

}

void nouvellePartie(){
    int argentDepart = 10000;
    int i, choixUser = 0;

     do {
        printf("Veuillez entrer le nombre de joueurs entre 2 et 4: ");
        scanf("%d", &choixUser);
    } while (choixUser < 2 || choixUser > 4);

    int tailleTab = choixUser;
    int Joueurs[tailleTab];

    for(i = 1;i < tailleTab + 1;i++)
    {
        Joueurs[i] = i;
    }

    size_t tailleTabPions = sizeof(Joueurs)/sizeof(Joueurs[0]);

    int pions[tailleTabPions];
    for(i = 1;i < tailleTabPions + 1;i++)
    {
        pions[i] = Joueurs[i];
    }
    printf("Il y a %d joueurs dans la partie\n",tailleTabPions);
    printf("La partie peut commencer\n");
    Sleep(1000);
    system("cls");
    printf("Generation de la grille de jeux en cours\n");
    for(i = 0;i < 3;i++)
    {
        printf(".\n");
        Sleep(1000);
    }
    system("cls");
    int lanceur,deScore = 0;
    lanceur = lanceurDe(tailleTabPions);
    deScore = lancerDes();
    printf("de obtenue: %d\n",deScore);


}
#include "banque.h"

int p_banque(int banqueJoueur,int somme){
    int argentBanque=1000000;
    printf("Le joueur doit recuperer %d\n",somme);
    banqueJoueur+=somme;
    argentBanque-=somme;
    printf("Le joueur a %d\n",banqueJoueur);
    return banqueJoueur;
}

int passageCaseDepart(int banqueJoueur){
    printf("Vous venez de passer par la case départ +200\n");
    p_banque(banqueJoueur,200);
    return banqueJoueur;
}
int p_Joueur(int banqueJoueur,int somme){
    int n=0;
    
    while (n != 0 || 1)
    {
    if(banqueJoueur - somme<0){
        printf("\nVous n'avez pas assez d'argent dommage...\nVendre des proprieter ?[1] Oui  [0] non.\n.\n.\n");
        scanf("%d",&n);
        
        if(n == 0){
            printf("Faillite! Vous etes eliminé");
        } else if(n == 1){
            printf("Veuiller vendre vos proprieter !");
        }else{
            printf("Erreur");
        }
    }
    return banqueJoueur;
    }}
