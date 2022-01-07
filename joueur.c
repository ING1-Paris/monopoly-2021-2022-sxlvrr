#include "biblio.h"


struct t_joueur *initp()
{

    struct t_joueur *p = (struct t_joueur *)calloc(4,sizeof(struct t_joueur));
    strcpy(p[0].nom,"j1");
    p[0].numero=1;
    p[0].position=0;
    p[0].carteprison=0;
    p[0].enprison=0;
    p[0].argent=0;
    p[0].toursprison=0;
    p[0].faillite=0;

    strcpy(p[1].nom,"j2");
    p[1].numero=2;
    p[1].position=0;
    p[1].carteprison=0;
    p[1].enprison=0;
    p[1].argent=0;
    p[1].toursprison=0;
    p[1].faillite=0;

    strcpy(p[2].nom,"j3");
    p[2].numero=3;
    p[2].position=0;
    p[2].carteprison=0;
    p[2].enprison=0;
    p[2].argent=0;
    p[2].toursprison=0;
    p[2].faillite=0;

    strcpy(p[3].nom,"j4");
    p[3].numero=4;
    p[3].position=0;
    p[3].carteprison=0;
    p[3].enprison=0;
    p[3].argent=0;
    p[3].toursprison=0;
    p[3].faillite=0;


    return p;
}

