#include "biblio.h"
int nouvellePartie(struct t_joueur *p){
    printf("%d",p[0].numero);
    int i, nb = 0;
    int* j=0;
    for(i=0;i<4;i++){
        (p)[i].argent=1000;
    }

     do{
        printf("Combien de joueurs ?\n");
        scanf("%d",&nb);
    }while(nb <=1 || nb >= 5);
    //nb-=1;

    printf("Il y a %d joueurs dans la partie\n",nb);
    for(int k=0;k<nb;k++){
        printf("joueur %d quel est votre nom?",p[k].numero);
        scanf("%s",&p[k].nom);
    }
    printf("La partie peut commencer\n");
    Sleep(1000);
    system("cls");
    printf("Generation de la grille de jeux en cours\n");
    printf("Que le jeu commence !");
    printf("|");
    for(int z=0;z<15;z++){
        printf("-");
        Sleep(100);

    }
    printf("|");
    system("cls");
return (int)p;
}

