#include <time.h>
#include "biblio.h"
/*
ATTENTION 16 cartes chances et communauté imposées
Les actions qui impliquent plusieurs joueurs -> Communauté
Les actions qui impliquent un seul joueur -> Chance
*/

int cartechance(struct t_joueur *p, int i) // carte chance 
{
    srand(time(NULL));
    int r;
    char description;
    printf("Carte Chance !\n");
    r=rand() % 16+1;

    for(int i=0;i<4;i++){
    if (r==1){
        printf("Une amende.\n\nVersez 150€ a la banque.");
        (p)[i].argent -= 150;
    }
    if (r==2){
        printf("Oh Oh Oh C'est Noel!\nTous les joeurs vous versent 200€");
        if((p)[i].position == 8|| (p)[i].position== 31){
            (p)[i].argent -=200;
    }
    if (r==3){
        if(j1 == tableau[] && p1.argent >= 750000){
            printf("Coup dur \n Donnez 20% de votre argent a la banque pas de chance...");
            p1.argent -= (p1.argent/100)*20;
        }
        if(j2 == tableau[] && p2.argent >= 750000){
            printf("Coup dur \n Donnez 20% de votre argent a la banque pas de chance...");
            p2.argent -= (p2.argent/100)*20;
        }
        if(j3 == tableau[] && p3.argent >= 750000){
            printf("Coup dur \n Donnez 20% de votre argent a la banque pas de chance...");
            p3.argent -= (p3.argent/100)*20;
        }
        if(j4 == tableau[] && p4.argent >= 750000){
            printf("Coup dur \n Donnez 20% de votre argent a la banque pas de chance...");
            p4.argent -= (p4.argent/100)*20;
        }
        else{
            r=rand() % 21;
        }
    }
    if (r==4){
        printf("Erreur de la banque\n Elle vous avez donner que 50 euros au de lieu de 300");
        if(j1 == tableau[]){
            p1.argent += 250;
        }
        if(j2 == tableau[]){
            p2.argent += 250;
        }
        if(j3 == tableau[]){
            p3.argent += 250;
        }
        if(j4 == tableau[]){
            p4.argent += 250;
        }
    }
    if (r==5){
        printf("C'est votre jour de chance vous gagne au bingo !!!!");
        p1.argent += 2;
        p2.argent += 2;
        p3.argent += 2;
        p4.argent += 2;
    }
    return p;
}

/*
int luckcard(struct t_joueur *p)
{
    srand(time(NULL));
    j1->argent = 200;

    int r;
    char description;
    printf("Carte chance !\n");
    r=rand() % 21;

    if (r==1){
        printf("Vous sortez de prison.\nVous pouvez conserver cette carte jusqu'a ce qu'elle soit utilisee ou vendue.");


    }
    if(r==2){
        printf("Allez en prison\nVous allez directement a la case prison et y restez pendant 3 tours");
        
    }

    return p;
}
*/

int cartecommu(struct t_joueur *p, int i, int nb)
{
    srand(time(NULL));
    int r;
    printf("Carte communaute !\n");
    r=rand() % 16+1;

    if (r==1){
        printf("Oeuvre de charite\nLa croix rouge recolte des dons et vous etes favorable a leurs actions.\nVersez 100€ a la banque.");
        p[i].argent -=100;
    }
    if (r==2){
        printf("C'est votre anniversaire !\nTous les joueurs vous versent 200€");
        for(k=1;k<=nb;k++){
            p[k].argent-=200;
            p[i].argent+=200;
        }
    }
    if (r==3){
        if(p[i].argent >= 7500){
            printf("Impot sur la fortune\nVotre richesse depassant la moyenne, vous vous devez de verser 10 pourcents de cette dernière a la banque");
            p[i].argent -= (p1.argent/100)*10;
        else{
            r=rand() % 21;
        }
    }
    if (r==4){
        printf("Erreur de la banque\nUn bug informatique a vendu une part des actions de l'epicier du coin, recevez 2500€");
        if(j1 == tableau[17]){
            p1.argent += 2500;
        }
        if(j2 == tableau[17]){
            p2.argent += 2500;
        }
        if(j3 == tableau[17]){
            p3.argent += 2500;
        }
        if(j4 == tableau[17]){
            p4.argent += 2500;
        }
    }
    if (r==5){
        printf("Fete commune\nChaque joueur verse 400€ a la banque afin de contribuer a la saint jean guile");
        p1.argent -= 400;
        p2.argent -= 400;
        p3.argent -= 400;
        p4.argent -= 400;
    }

}
