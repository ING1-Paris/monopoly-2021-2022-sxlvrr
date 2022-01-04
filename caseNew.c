#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"
#include <Windows.h>
void caseNew(int lig, int col, int color, int colorBack){

        Color(color,colorBack);
        gotoligcol(lig,col);
        for(int i;i<5;i++){
            printf("         ");
            printf("\n");
        }
}