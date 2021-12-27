#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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