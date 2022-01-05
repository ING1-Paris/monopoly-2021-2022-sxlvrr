#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"


struct t_joueur *initp()
{

    struct t_joueur *p = (struct t_joueur *)malloc(4 * sizeof(struct t_joueur));
    struct t_joueur j1 = {{0}, 1, 0, 0, 0, 0, {0}};
    p[0] = j1;
    struct t_joueur j2 = {{0}, 2, 0, 0, 0, 0, {0}};
    p[1] = j2;
    struct t_joueur j3 = {{0}, 3, 0, 0, 0, 0, {0}};
    p[2] = j3;
    struct t_joueur j4 = {{0}, 4, 0, 0, 0, 0, {0}};
    p[3] = j4;
    // strcpy(p[1].possessions, "")

    return p;
}