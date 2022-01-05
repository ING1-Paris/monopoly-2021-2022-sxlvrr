#include <time.h>

int main()
{
    int i = 1, de1 = 0, de2 = 0, nb = 0, lance = 0, fin = 0;
    int prison = 0; //TEST ICI, SERA DANS STRUCT DE JOUEUR A LA FIN

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
                    printf("Joueur %d, c'est a toi ! (tape 1 pour lancer les des)\n", i);
                }
                else{
                    printf("Joueur %d, tu es en prison, fais un double en lancant les des (en tapant 1) pour sortir !\n", i);
                }
                scanf("%d", &lance);
            }
        }

        if (lance == 1){
            if(d[i] == 25){ //Si le joueur est en prison, un dé de 6 lui permettra de sortir
                prison = 1; //TEST ICI, SERA DANS STRUCT DE JOUEUR A LA FIN
                srand(time(NULL));
                de1 = rand() %6+1;
                de2 = rand() %6+1;
                printf("%4d%4d\n",de1,de2);
                lance = 0;
                if(de1 == de2){
                    d[i] += 1;
                }
            }
            else{
                if(prison == 1){
                    d[i] -= 1;
                }
                srand(time(NULL));
                de1 = rand() %6+1;
                de2 = rand() %6+1;
                d[i] += de1+de2;
                if(d[i] >= 31){
                    d[i] -= 31;
                }
                printf("%4d\n", d[i]);
                lance = 0;
            }
        }
    }while(fin==0);


    return(0);
}

