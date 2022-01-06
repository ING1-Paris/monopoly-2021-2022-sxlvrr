#include "biblio.h"
int nouvellePartie(struct t_joueur *p){
    printf("%d",p[0].numero);
    int i, nb = 0;
    int* j=0;
    for(i=0;i<4;i++){
        (p)[0].argent=1000;
    }
    
     do{
        printf("Combien de joueurs ?\n");
        scanf("%d",&nb);
    }while(nb <=1 || nb >= 5);
    nb-=1;

    printf("Il y a %d joueurs dans la partie\n",nb+1);
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