#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "carte.h"

void luckcard()
{
    srand(time(NULL));
    int r;
    char description;
    printf("Carte chance !\n");
    r=rand() % 21;

    if (r==1){
        printf("Vous sortez de prison.\nVous pouvez conserver cette carte jusqu'a ce qu'elle soit utilisee ou vendue.");


    }
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
        if(j2 == tableau[17]){
            p1.argent -=200;
            p3.argent -=200;
            p4.argent -=200;
            p2.argent +=600;
        if(j3 == tableau[17]){
            p1.argent -=200;
            p2.argent -=200;
            p4.argent -=200;
            p3.argent +=600;
        if(j4 == tableau[17]){
            p1.argent -=200;
            p2.argent -=200;
            p3.argent -=200;
            p4.argent +=600;
        }
    }

}