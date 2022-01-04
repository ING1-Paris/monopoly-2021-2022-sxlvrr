#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"
#include <Windows.h>

void gotoligcol( int lig, int col ) {

// ressources

COORD mycoord;

mycoord.X = col;

mycoord.Y = lig;

SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );

}