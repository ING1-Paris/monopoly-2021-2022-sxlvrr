#include "biblio.h"

void caseNew(int lig, int col, int color, int colorBack, char name[]){
    Color(color,colorBack);
    for(int i=0;i<5;i++){
        gotoligcol(lig+i,col);
        printf("             ");
    }
    gotoligcol(lig,col+3);
    printf("%s", name);
    Color(15,0);
}