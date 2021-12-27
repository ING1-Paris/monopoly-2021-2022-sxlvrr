#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void luckcard()
{
    srand(time(NULL));
    int r;
    char nom;
    print("Carte chance : ");
    r=rand() % 21;
    if (r==1){
        printf("sortez de prison");
        
    }

}