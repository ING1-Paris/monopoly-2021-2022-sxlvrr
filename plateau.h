#include <stdio.h>
#include <stdlib.h>

void plateau()
{
    int i,j,k,m;
    for (i=0;i<120;i++){
        printf("#");
        
    }
    printf("\n");
    
    for(k=0;k<4;k++){
        for(m=0;m<4;m++){
        
            for (i=0;i<8;i++){
            printf("#");
                for(j=0;j<13;j++)
                {
                    printf(" ");
                
                }
                printf("#");
                
            
        }
            printf("\n");
        }
   for (i=0;i<120;i++){
            printf("#");
            
        }
        printf("\n"); 
    }
}
