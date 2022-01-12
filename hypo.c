/*#include "biblio.h"

struct carte1 *hypo(struct t_joueur *p, struct carte1 *c, int i, int nb){

    int chypo;
    int hypoChoix;
    int k=3;

    do{

    gotoligcol(0,115);
    printf("Voulez vous hypothequer?\t");
    scanf("%d",&chypo);
    }while(chypo!=1 && chypo!=0);
    if(chypo==0){
        return c;
    }
    if(chypo==1){
        gotoligcol(3,115);
        printf("Vos cartes sont les suivantes:");

        for(int j=0;j<32;j++){
            if(p[i].possessions[j]==c[j].nom){
                gotoligcol(3+k,115);
                printf("%d: %s",c[j].numero,c[j].nom);
                k+=3;
            }
            else{

            }
        }
        gotoligcol(33,115);
        printf("Laquelle souhaitez vous hypothequer?");
        gotoligcol(36,115);
        do{
        printf("Rentrez le numero de votre carte pour l'hypothequer ou 0 pour sortir:\t");
        scanf("%d",hypoChoix);
        }while(p[i].possessions[hypoChoix]==c[hypoChoix].nom);

        if(hypoChoix==0){
            return c;
        }

        gotoligcol(39,115);
        if(p[i].possessions[hypoChoix]==c[hypoChoix].nom){
            c[hypoChoix].hypo=1;
            printf("Vous avez hypothequer %s",c[hypoChoix].nom);
        }


    }
    return c;
}
*/
