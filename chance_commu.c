#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "biblio.h"
/*
ATTENTION 16 cartes chances et communauté imposées
Les actions qui impliquent plusieurs joueurs -> Communauté
Les actions qui impliquent un seul joueur -> Chance
*/

void cartechance() // carte chance 
{
    srand(time(NULL));
    int r;
    char description;
    printf("Carte Chance !\n");
    r=rand() % 16+1;

    if (r==1){
        printf("Une amende.\n\nVersez 150€ a la banque.");
        if(j1 == tableau[]){
            p1.argent -=150;
        }
        if(j2 == tableau[]){
            p2.argent -=150;
        }
        if(j3 == tableau[]){
            p3.argent -=150;
        }
        if(j4 == tableau[]){
            p4.argent -=150;
        }
    }
    if (r==2){
        printf("Oh Oh Oh C'est Noel!\nTous les joeurs vous versent 200€");
        if(j1 == tableau[]){
            p2.argent -=200;
            p3.argent -=200;
            p4.argent -=200;
            p1.argent +=600;
        }
        if(j2 == tableau[]){
            p1.argent -=200;
            p3.argent -=200;
            p4.argent -=200;
            p2.argent +=600;
        }
        if(j3 == tableau[]){
            p1.argent -=200;
            p2.argent -=200;
            p4.argent -=200;
            p3.argent +=600;
        }
        if(j4 == tableau[]){
            p1.argent -=200;
            p2.argent -=200;
            p3.argent -=200;
            p4.argent +=600;
        }
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

}
//void joueur *p luckcard(joueur *p)
void luckcard()
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

void commucard()
{
    srand(time(NULL));
    int r;
    char description;
    printf("Carte communaute !\n");
    r=rand() % 16+1;

    if (r==1){
        printf("Oeuvre de charite\nLa croix rouge recolte des dons et vous etes favorable a leurs actions.\nVersez 100€ a la banque.");
        if(j1 == tableau[17]){
            p1.argent -=100;
        }
        if(j2 == tableau[17]){
            p2.argent -=100;
        }
        if(j3 == tableau[17]){
            p3.argent -=100;
        }
        if(j4 == tableau[17]){
            p4.argent -=100;
        }
    }
    if (r==2){
        printf("C'est votre anniversaire !\nTous les joeurs vous versent 200€");
        if(j1 == tableau[17]){
            p2.argent -=200;
            p3.argent -=200;
            p4.argent -=200;
            p1.argent +=600;
        }
        if(j2 == tableau[17]){
            p1.argent -=200;
            p3.argent -=200;
            p4.argent -=200;
            p2.argent +=600;
        }
        if(j3 == tableau[17]){
            p1.argent -=200;
            p2.argent -=200;
            p4.argent -=200;
            p3.argent +=600;
        }
        if(j4 == tableau[17]){
            p1.argent -=200;
            p2.argent -=200;
            p3.argent -=200;
            p4.argent +=600;
        }
    }
    if (r==3){
        if(j1 == tableau[17] && p1.argent >= 750000){
            printf("Impot sur la fortune\nVotre richesse depassant la moyenne, vous vous devez de verser 10 pourcents de cette dernière a la banque");
            p1.argent -= (p1.argent/100)*10;
        }
        if(j2 == tableau[17] && p2.argent >= 750000){
            printf("Impot sur la fortune\nVotre richesse depassant la moyenne, vous vous devez de verser 10 pourcents de cette dernière a la banque");
            p2.argent -= (p2.argent/100)*10;
        }
        if(j3 == tableau[17] && p3.argent >= 750000){
            printf("Impot sur la fortune\nVotre richesse depassant la moyenne, vous vous devez de verser 10 pourcents de cette dernière a la banque");
            p3.argent -= (p3.argent/100)*10;
        }
        if(j4 == tableau[17] && p4.argent >= 750000){
            printf("Impot sur la fortune\nVotre richesse depassant la moyenne, vous vous devez de verser 10 pourcents de cette dernière a la banque");
            p4.argent -= (p4.argent/100)*10;
        }
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
