#include "biblio.h"

void displayM(struct t_joueur *p,struct carte1 *c, int i, int nb){  //Affiche la/les maison(s) achetée(s) par le joueur sur le plateau
int ligj, colj;
 for(int j=0;j<32;j++) {



        if(j>=0 && j<=7)
        {
            ligj=3;
        }
        else if(j<=23 && j>=16)
        {
            ligj=48;
        }
        else if(j==31 || j==8)
        {
            ligj=8;
        }
        else if(j==30 || j==9)
        {
            ligj=13;
        }
        else if(j==29 || j==10)
        {
            ligj=18;
        }
        else if(j==28 || j==11)
        {
            ligj=23;
        }
        else if(j==27 || j==12)
        {
            ligj=28;
        }
        else if(j==26 || j==13)
        {
            ligj=33;
        }
        else if(j==25 || j==14)
        {
            ligj=38;
        }
        else if(j==24 || j==15)
        {
            ligj=43;
        }



        if(j>=7 && j<=16)
        {
            colj=98;
        }
        else if(j==1 || j==22)
        {
            colj=20;
        }
        else if(j==2 || j==21)
        {
            colj=33;
        }
        else if(j==3 || j==20)
        {
            colj=46;
        }
        else if(j==4 || j==19)
        {
            colj=59;
        }
        else if(j==5 || j==18)
        {
            colj=72;
        }
        else if(j==6 || j==17)
        {
            colj=85;
        }
        else if(j==0 ||(j>=23 && j<=31))
        {
            colj=7;
        }


        if(c[j].nbM==1){        //Affiche en fonction de la case les maisons et hotels
            Color(15,0);
            ligj+=1;
            colj-=7;
            gotoligcol(ligj,colj);
            printf("M");
            Color(15,0);
        }
        if(c[j].nbM==2){
            Color(15,0);
            ligj+=1;
            colj-=7;
            gotoligcol(ligj,colj);
            printf("M   M");
            Color(15,0);
        }
        if(c[j].nbM==3){
            Color(15,0);
            ligj+=1;
            colj-=7;
            gotoligcol(ligj,colj);
            printf("M   M   M");
            Color(15,0);
        }
        if(c[j].nbM==4){
            Color(15,0);
            ligj+=1;
            colj-=7;
            gotoligcol(ligj,colj);
            printf("M   M   M   M");
            Color(15,0);
        }
        if(c[j].nbH==1){
            Color(15,0);
            ligj+=1;
            gotoligcol(ligj,colj);
            printf("H");
            Color(15,0);
        }
       }

}
