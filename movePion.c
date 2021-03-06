#include "biblio.h"


void movePion(struct t_joueur *p, int nb,struct carte1 *c,int i) //Déplacement du "pion" du joueur à sa case correspondante à chaque tour
{
    int ligj,colj=0;    //(Placement en fonction de la ligne / colonne)

    int j;

    for(i=0; i<nb; i++)
    {
        j=p[i].position;

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

        /*
        Ici, on permet aux joueurs de se positionner indépendemment des autres afin qu'ils ne soient pas superposés
        */

        if(i==0){
            ligj-=2;
            colj-=1;
        }
        if(i==1){
            ligj-=1;
            colj-=1;
        }
        if(i==2){
            ligj-=2;
        }
        if(i==3){
            ligj-=1;
        }
        gotoligcol(ligj,colj);
        printf("%d",p[i].numero);


    }

}
