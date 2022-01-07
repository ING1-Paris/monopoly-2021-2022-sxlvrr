#include "biblio.h"
int achatCarte(struct t_joueur *p, struct carte1 *c){
    int achat;
    for(int i=0;i<4;i++){
        for(int j=0;j<31;j++){
            if(p[i].position=j && c[j].numero==1||c[j].numero==2||c[j].numero==4||c[j].numero==5||c[j].numero==6||c[j].numero==7||c[j].numero==9||c[j].numero==11||c[j].numero==13||c[j].numero==14||c[j].numero==16||c[j].numero==18||c[j].numero==19||c[j].numero==20||c[j].numero==21||c[j].numero==22||c[j].numero==24||c[j].numero==27||c[j].numero==28||c[j].numero==30){
                do{
                printf("%s, Voulez vous acheter %s, 1 pour oui, 0 pour non",p[i].nom,c[j].nom);
                scanf("%d",&achat);
                }while(achat!=1 || achat!=0);
                if(achat==0)
                {
                    return p,c;
                }
                for(int k=0;k<1;k++){
                    if(achat==1 && p[k].possessions != c[j].nom && p[k+1].possessions != c[j].nom && p[k+2].possessions != c[j].nom && p[k+3].possessions != c[j].nom){
                    p[i].possessions[j]=c[j].nom;
                    printf("\nBravo pour votre achat! %s vous appartient",c[j].nom);
                    }
                    else if(p[i].possessions==c[j].nom){
                        printf("\nCette propriété vous appartient deja.");
                    }
                    else{
                        printf("Cette propriété appartient à quelqu'un d'autre");
                    }

                }
            }
        }
    }
    return p, c;
}
