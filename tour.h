#include <stdlib.h>
#include <stdio.h>
#include "carte.h"

int tour(){
    int i1=0;
    int i2=0;
    int i3=0;
    int i4=0;
    int j=0;
    int p=0;

    do{
        while(d1.perdu!=1){
        j=0;// permet d'envoyer en prison si 3 fois double
        //random de entre 1 et 6, appeller ce chifffre random1 t random2 
        randomA + randomB =random1;
        j1=tableau[i1+random1];
        i1=random1;
        
        if (randomA==randomB)
            j=j+1;
            // random
            j1=tableau[i1+random1];
            i1=random1;
            
            if (j==3)
                j1=tableau[25];}
                
        while(d2.perdu=!1){
        j=0;// permet d'envoyer en prison si 3 fois double
        //random de entre 1 et 6, appeller ce chifffre random1 t random2 
        randomA + randomB =random2;
        j2=tableau[i2+random2];
        i2=random2;
        
        if (randomA==randomB)
            j=j+1;
            // random
            j1=tableau[i2+random2];
            i2=random2;
            
            if (j==3)
                j1=tableau[25];}

        while(d3.perdu!=1){
        j=0;// permet d'envoyer en prison si 3 fois double
        //random de entre 1 et 6, appeller ce chifffre random1 t random2 
        randomB + randomA =random3;
        j3=tableau[i3+random3];
        i3=random3;
        
        if (randomA==randomB)
            j=j+1;
            // random
            j3=tableau[i3+random3];
            i3=random3;
            
            if (j==3)
                j3=tableau[25];}
        

        while(d4.perdu!=1){
        j=0;// permet d'envoyer en prison si 3 fois double
        //random de entre 1 et 6, appeller ce chifffre random1 t random2 
        randomA + randomB =random4;
        j4=tableau[i4+random4];
        i4=random4;
        
        if (randomA==randomB)
            j=j+1;
            // random
            j4=tableau[i4+random4];
            i4=random4;
            
            if (j==3)
                j4=tableau[25];}
        

    }while(d1.perdu==1 && d2.perdu==1 && d3.perdu==1 || d4.perdu==1 && d2.perdu==1 && d3.perdu==1 || d1.perdu==1 && d4.perdu==1 && d3.perdu==1 || d1.perdu==1 && d2.perdu==1 && d4.perdu==1);

}