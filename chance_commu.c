#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "biblio.h"

joueur joueur;
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
    r=rand() % 21;

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