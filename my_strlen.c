#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "biblio.h"

    
int my_strlen(const char *str){
    int i;
    i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}