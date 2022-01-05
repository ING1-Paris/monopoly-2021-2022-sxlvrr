#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i = 1, de = 0, nb = 0, lance = 0, fin = 0, prison = 0;

    while(nb <=1 || nb >= 5){
        printf("Combien de joueurs ?\n");
        scanf("%d",&nb);
    }

    int d[nb];

    for(i=1;i<=nb;i++){ //Setup position joueurs
        d[i] = 0;
    }

    i = 0;

    do{
        if (lance == 0){
            if(i>=1 || i<=5){
                i+=1;
            }
            if(i>nb){
                i=1;
            }
            while(lance!=1){
                if(d[i]!=25){
                    printf("Joueur %d, c'est a toi ! (tape 1 pour lancer le de)\n", i);
                }
                else{
                    printf("Joueur %d, tu es en prison, fait un 6 en lancant le de (en tapant 1) pour sortir !\n", i);
                }
                scanf("%d", &lance);
            }
        }

        if (lance == 1){
            if(d[i] == 25){ //Si le joueur est en prison, un dé de 6 lui permettra de sortir
                prison = 1;
                srand(time(NULL));
                de = rand() %6+1;
                printf("%d",de);
                lance = 0;
                if(de == 6){
                    d[i] += 1;
                }
            }
            else{
                if(prison == 1){
                    d[i] -= 1;
                }
                srand(time(NULL));
                de = rand() %6+1;
                d[i] += de;
                if(d[i] >=30){
                    d[i] -= 30;
                }
                printf("%4d\n", d[i]);
                lance = 0;
            }
        }
    }while(fin==0);


    return(0);
}

