#include "biblio.h"


void movePion(struct t_joueur *p){
    int ligj,colj=0;
    int i=0;
    for(int j=0;j<32;j++){
        if(j>=0 && j<=7){
            ligj=3;
        }
        else if(j==0 ||j>=23 && j<=31){
            colj=7;
        }
        else if(j<=23 && j>=16){
            ligj=48;
        }
        else if(j>=8 && j<=16){
            colj=98;
        }
        else if(j==31 || j==8){
            ligj=8;
        }
        else if(j==30 || j==9){
            ligj=13;
        }
        else if(j==29 || j==10){
            ligj=18;
        }
        else if(j==28 || j==11){
            ligj=23;
        }
        else if(j==27 || j==12){
            ligj=28;
        }
        else if(j==26 || j==13){
            ligj=33;
        }
        else if(j==25 || j==14){
            ligj=38;
        }
        else if(j==24 || j==15){
            ligj=43;
        }
        else if(j==1 || j==22){
            colj=20;
        }
        else if(j==2 || j==21){
            colj=33;
        }
        else if(j==3 || j==20){
            colj=46;
        }
        else if(j==4 || j==19){
            colj=59;
        }
        else if(j==5 || j==18){
            colj=72;
        }
        else if(j==6 || j==17){
            colj=85;
        }

            for(i=0;i<4;i++){
                if ((p)[i].position==j){

                    gotoligcol(ligj,colj);
                    printf("%d",(p)[i].numero);
                }
            }
    }
return p;
}

