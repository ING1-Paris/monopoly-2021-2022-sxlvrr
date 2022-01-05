#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblio.h"


struct carte1 {
    char nom[200];
    int prixC;
    int loyer,loyerGr;
    int m1,m2,m3,m4,h;
    int prixM,prixH;
    int hyp;
    int deshyp;
    int numero;
};

int carte (){
    struct carte1 c_depart; // DEPART
    strcpy (c_depart.nom, "Depart");
    c_depart.numero=0;
    struct carte1 c_prison; // PRISON
    strcpy (c_prison.nom , "Prison");
    c_prison.numero=25;

    struct carte1 c_visiteprison; // VISITE PRISON
    strcpy(c_visiteprison.nom , "Visite Prison");
    c_visiteprison.numero=10;

    struct carte1 c_enchere; // CARTE ENCHERE
    strcpy(c_enchere.nom , "Enchere");
    c_enchere.numero=26;

    struct carte1 c_stationnement; // STATIONNEMENT GRATUIT
    strcpy(c_stationnement.nom , "Stationnement gratuit");
    c_stationnement.numero=15;

    struct carte1 c_wish; // WISH
    strcpy(c_wish.nom , "Wish");
    c_wish.prixC=60;
    c_wish.loyer =2;
    c_wish.loyerGr=4;
    c_wish.m1=10;
    c_wish.m2=30;
    c_wish.m3=90;
    c_wish.m4=160;
    c_wish.h=250;
    c_wish.prixM =50;
    c_wish.prixH = 50;
    c_wish.hyp = 30 ;
    c_wish.deshyp=33 ;
    c_wish.numero=1;

    struct carte1 c_epicier; // EPICIER DU COIN
    strcpy(c_epicier.nom , "Epicier du coin");
    c_epicier.prixC=60;
    c_epicier.loyer =4;
    c_epicier.loyerGr=8;
    c_epicier.m1=20;
    c_epicier.m2=60;
    c_epicier.m3=180;
    c_epicier.m4=360;
    c_epicier.h=450;
    c_epicier.prixM =50;
    c_epicier.prixH = 50;
    c_epicier.hyp = 30;
    c_epicier.deshyp= 33;
    c_epicier.numero=2;

    struct carte1 c_action; // ACTION (enseigne)
    strcpy(c_action.nom , "Action");
    c_action.prixC=100;
    c_action.loyer =6;
    c_action.loyerGr=12;
    c_action.m1=30;
    c_action.m2=90;
    c_action.m3=270;
    c_action.m4=400;
    c_action.h=550;
    c_action.prixM =50;
    c_action.prixH = 50;
    c_action.hyp = 50;
    c_action.deshyp= 55;
    c_action.numero=4;

    struct carte1 c_lidl; // LIDL
    strcpy(c_lidl.nom , "Lidl");
    c_lidl.prixC=100;
    c_lidl.loyer =6;
    c_lidl.loyerGr=12;
    c_lidl.m1=30;
    c_lidl.m2=90;
    c_lidl.m3=270;
    c_lidl.m4=400;
    c_lidl.h=550;
    c_lidl.prixM =50;
    c_lidl.prixH = 50;
    c_lidl.hyp =50 ;
    c_lidl.deshyp=55 ;
    c_lidl.numero=6;

    struct carte1 c_franprix; // FRANPRIX
    strcpy(c_franprix.nom , "Franprix");
    c_franprix.prixC=120;
    c_franprix.loyer =8;
    c_franprix.loyerGr=16;
    c_franprix.m1=40;
    c_franprix.m2=100;
    c_franprix.m3=300;
    c_franprix.m4=450;
    c_franprix.h=600;
    c_franprix.prixM =50;
    c_franprix.prixH = 50;
    c_franprix.hyp =60 ;
    c_franprix.deshyp=66 ;
    c_franprix.numero=7;

    struct carte1 c_monoprix; // MONOPRIX
    strcpy(c_monoprix.nom , "Monoprix");
    c_monoprix.prixC=140;
    c_monoprix.loyer =10;
    c_monoprix.loyerGr=20;
    c_monoprix.m1=50;
    c_monoprix.m2=150;
    c_monoprix.m3=450;
    c_monoprix.m4=625;
    c_monoprix.h=750;
    c_monoprix.prixM =100;
    c_monoprix.prixH = 100;
    c_monoprix.hyp =70 ;
    c_monoprix.deshyp=77 ;
    c_monoprix.numero=9;

    struct carte1 c_nike; // NIKE
    strcpy(c_nike.nom , "Nike");
    c_nike.prixC=140;
    c_nike.loyer =10;
    c_nike.loyerGr=20;
    c_nike.m1=50;
    c_nike.m2=150;
    c_nike.m3=450;
    c_nike.m4=625;
    c_nike.h=750;
    c_nike.prixM =100;
    c_nike.prixH = 100;
    c_nike.hyp =70 ;
    c_nike.deshyp=77 ;
    c_nike.numero=11;

    struct carte1 c_adidas; // ADIDAS
    strcpy(c_adidas.nom , "Adidas");
    c_adidas.prixC=160;
    c_adidas.loyer =12;
    c_adidas.loyerGr=24;
    c_adidas.m1=60;
    c_adidas.m2=180;
    c_adidas.m3=500;
    c_adidas.m4=700;
    c_adidas.h=900;
    c_adidas.prixM =100;
    c_adidas.prixH = 100;
    c_adidas.hyp = 80;
    c_adidas.deshyp= 88;
    c_adidas.numero=13;


    struct carte1 c_reebok; // REEBOK
    strcpy(c_reebok.nom , "Reebok");
    c_reebok.prixC=180;
    c_reebok.loyer =14;
    c_reebok.loyerGr=28;
    c_reebok.m1=70;
    c_reebok.m2=200;
    c_reebok.m3=550;
    c_reebok.m4=750;
    c_reebok.h=950;
    c_reebok.prixM =100;
    c_reebok.prixH = 100;
    c_reebok.hyp = 90;
    c_reebok.deshyp= 99;
    c_reebok.numero=14;

    struct carte1 c_samsung; // SAMSUNG
    strcpy(c_samsung.nom , "Samsung");
    c_samsung.prixC=180;
    c_samsung.loyer =14;
    c_samsung.loyerGr=28;
    c_samsung.m1=70;
    c_samsung.m2=200;
    c_samsung.m3=550;
    c_samsung.m4=750;
    c_samsung.h=950;
    c_samsung.prixM =100;
    c_samsung.prixH = 100;
    c_samsung.hyp = 90;
    c_samsung.deshyp=99 ;
    c_samsung.numero=18;

    struct carte1 c_apple; // APPLE
    strcpy(c_apple.nom , "Apple");
    c_apple.prixC=200;
    c_apple.loyer =16;
    c_apple.loyerGr=32;
    c_apple.m1=80;
    c_apple.m2=220;
    c_apple.m3=600;
    c_apple.m4=800;
    c_apple.h=1000;
    c_apple.prixM =100;
    c_apple.prixH = 100;
    c_apple.hyp =100 ;
    c_apple.deshyp= 110;
    c_apple.numero=16;

    struct carte1 c_xaomi; // XAOMI
    strcpy(c_xaomi.nom , "Xaomi");
    c_xaomi.prixC=220;
    c_xaomi.loyer =18;
    c_xaomi.loyerGr=36;
    c_xaomi.m1=90;
    c_xaomi.m2=250;
    c_xaomi.m3=700;
    c_xaomi.m4=875;
    c_xaomi.h=1050;
    c_xaomi.prixM =150;
    c_xaomi.prixH = 150;
    c_xaomi.hyp = 110;
    c_xaomi.deshyp= 121;
    c_xaomi.numero=19;

    struct carte1 c_lv; // LV
    strcpy(c_lv.nom , "Louis Vuitton");
    c_lv.prixC=220;
    c_lv.loyer =18;
    c_lv.loyerGr=36;
    c_lv.m1=90;
    c_lv.m2=250;
    c_lv.m3=750;
    c_lv.m4=875;
    c_lv.h=1050;
    c_lv.prixM =150;
    c_lv.prixH = 150;
    c_lv.hyp =110 ;
    c_lv.deshyp= 121;
    c_lv.numero=22;

    struct carte1 c_gucci; // GUCCI
    strcpy(c_gucci.nom , "Gucci");
    c_gucci.prixC=240;
    c_gucci.loyer =20;
    c_gucci.loyerGr=40;
    c_gucci.m1=100;
    c_gucci.m2=300;
    c_gucci.m3=750;
    c_gucci.m4=925;
    c_gucci.h=1100;
    c_gucci.prixM =150;
    c_gucci.prixH = 150;
    c_gucci.hyp =120 ;
    c_gucci.deshyp=132 ;
    c_gucci.numero=24;

    struct carte1 c_rolex; // ROLEX
    strcpy(c_rolex.nom , "Rolex");
    c_rolex.prixC=280;
    c_rolex.loyer =24;
    c_rolex.loyerGr=48;
    c_rolex.m1=120;
    c_rolex.m2=360;
    c_rolex.m3=850;
    c_rolex.m4=1025;
    c_rolex.h=1200;
    c_rolex.prixM =150;
    c_rolex.prixH = 150;
    c_rolex.hyp = 140;
    c_rolex.deshyp= 154;
    c_rolex.numero=27;

    struct carte1 c_gatti; // BUGATTI
    strcpy(c_gatti.nom , "Bugatti");
    c_gatti.prixC=300;
    c_gatti.loyer =26;
    c_gatti.loyerGr=52;
    c_gatti.m1=130;
    c_gatti.m2=390;
    c_gatti.m3=900;
    c_gatti.m4=1100;
    c_gatti.h=1275;
    c_gatti.prixM =200;
    c_gatti.prixH = 200;
    c_gatti.hyp =150 ;
    c_gatti.deshyp=165;
    c_gatti.numero=30;

    struct carte1 c_sncf; // SNCF
    strcpy(c_sncf.nom , "SNCF");
    c_sncf.prixC=200;
    c_sncf.loyer =50;
    c_sncf.m1=0;
    c_sncf.m2=100; // LOYER SI 2 gares
    c_sncf.m3=200; // Loyer si toutes les gares
    c_sncf.m4=0;
    c_sncf.prixM =0;
    c_sncf.prixH = 0;
    c_sncf.hyp =100 ;
    c_sncf.deshyp=110 ;
    c_sncf.numero=28;

    struct carte1 c_airf; // AIRFRANCE
    strcpy(c_airf.nom , "AirFrance");
    c_airf.prixC=200;
    c_airf.loyer =50;
    c_airf.m1=0;
    c_airf.m2=100;
    c_airf.m3=200;
    c_airf.m4=0;
    c_airf.prixM =0;
    c_airf.prixH = 0;
    c_airf.hyp = 100;
    c_airf.deshyp= 110;
    c_airf.numero=12;

    struct carte1 c_ratp; // RATP
    strcpy(c_ratp.nom , "RATP");
    c_ratp.prixC=200;
    c_ratp.loyer =50;
    c_ratp.m1=0;
    c_ratp.m2=100;
    c_ratp.m3=200;
    c_ratp.m4=0;
    c_ratp.prixM =0;
    c_ratp.prixH = 0;
    c_ratp.hyp =100 ;
    c_ratp.deshyp=110 ;
    c_ratp.numero=21;

    struct carte1 c_edf; // EDF (/!\ ne pas oublier l'implantation du dé /!\)
    strcpy(c_edf.nom , "EDF");
    c_edf.prixC=150;
    c_edf.loyer =4;      // (! xdé)
    c_edf.loyerGr=10;    //4 fois le résultat du dé (! xdé)
    c_edf.m1=0;
    c_edf.m2=0; // Si les deux services : fois 10
    c_edf.m3=0;
    c_edf.m4=0;
    c_edf.prixM =0;
    c_edf.hyp = 100;
    c_edf.deshyp= 110;
    c_edf.numero=5;

    struct carte1 c_suez; // SUEZ (/!\ ne pas oublier l'implantation du dé /!\)
    strcpy(c_suez.nom , "Suez");
    c_suez.prixC=150;
    c_suez.loyer =4;        // (! xdé)
    c_suez.m1=0;
    c_suez.loyerGr=10;      // (! xdé)
    c_suez.m2=0;
    c_suez.m3=0;
    c_suez.m4=0;
    c_suez.prixM =0;
    c_suez.hyp =100 ;
    c_suez.deshyp= 110;
    c_suez.numero=20;

