#include "biblio.h"

struct carte1 *initc(){
    struct carte1 *c = (struct carte1 *)calloc(4,sizeof(struct carte1));
     // DEPART
    strcpy(c[0].nom, "Depart");
    c[0].numero=0;

     // PRISON
    strcpy(c[25].nom , "Prison");
    c[25].numero=25;


     // VISITE PRISON
    strcpy(c[10].nom , "Visite Prison");
    c[10].numero=10;


    // CARTE ENCHERE
    strcpy(c[26].nom , "Enchere");
    c[26].numero=26;


    // STATIONNEMENT GRATUIT
    strcpy(c[15].nom , "Stationnement gratuit");
    c[15].numero=15;


    // WISH
    strcpy(c[1].nom , "Wish");
    c[1].prixC=60,
    c[1].loyer =2,
    c[1].loyerGr=4,
    c[1].m1=10,
    c[1].m2=30,
    c[1].m3=90,
    c[1].m4=160,
    c[1].h=250,
    c[1].prixM =50,
    c[1].prixH = 50,
    c[1].hyp = 30 ,
    c[1].deshyp=33 ,
    c[1].numero=1;


    // EPICIER DU COIN
    strcpy(c[2].nom , "Epicier du coin");
    c[2].prixC=60,
    c[2].loyer =4,
    c[2].loyerGr=8,
    c[2].m1=20,
    c[2].m2=60,
    c[2].m3=180,
    c[2].m4=360,
    c[2].h=450,
    c[2].prixM =50,
    c[2].prixH = 50,
    c[2].hyp = 30,
    c[2].deshyp= 33,
    c[2].numero=2;

    // ACTION (enseigne)
    strcpy(c[4].nom , "Action");
    c[4].prixC=100,
    c[4].loyer =6,
    c[4].loyerGr=12,
    c[4].m1=30,
    c[4].m2=90,
    c[4].m3=270,
    c[4].m4=400,
    c[4].h=550,
    c[4].prixM =50,
    c[4].prixH = 50,
    c[4].hyp = 50,
    c[4].deshyp= 55,
    c[4].numero=4;


    // LIDL
    strcpy(c[6].nom , "Lidl");
    c[6].prixC=100,
    c[6].loyer =6,
    c[6].loyerGr=12,
    c[6].m1=30,
    c[6].m2=90,
    c[6].m3=270,
    c[6].m4=400,
    c[6].h=550,
    c[6].prixM =50,
    c[6].prixH = 50,
    c[6].hyp =50 ,
    c[6].deshyp=55 ,
    c[6].numero=6;


     // FRANPRIX
    strcpy(c[7].nom , "Franprix");
    c[7].prixC=120,
    c[7].loyer =8,
    c[7].loyerGr=16,
    c[7].m1=40,
    c[7].m2=100,
    c[7].m3=300,
    c[7].m4=450,
    c[7].h=600,
    c[7].prixM =50,
    c[7].prixH = 50,
    c[7].hyp =60 ,
    c[7].deshyp=66 ,
    c[7].numero=7;


    // MONOPRIX
    strcpy(c[9].nom , "Monoprix");
    c[9].prixC=140,
    c[9].loyer =10,
    c[9].loyerGr=20,
    c[9].m1=50,
    c[9].m2=150,
    c[9].m3=450,
    c[9].m4=625,
    c[9].h=750,
    c[9].prixM =100,
    c[9].prixH = 100,
    c[9].hyp =70 ,
    c[9].deshyp=77 ,
    c[9].numero=9;


    // NIKE
    strcpy(c[11].nom , "Nike");
    c[11].prixC=140,
    c[11].loyer =10,
    c[11].loyerGr=20,
    c[11].m1=50,
    c[11].m2=150,
    c[11].m3=450,
    c[11].m4=625,
    c[11].h=750,
    c[11].prixM =100,
    c[11].prixH = 100,
    c[11].hyp =70 ,
    c[11].deshyp=77 ,
    c[11].numero=11;


    // ADIDAS
    strcpy(c[13].nom , "Adidas");
    c[13].prixC=160,
    c[13].loyer =12,
    c[13].loyerGr=24,
    c[13].m1=60,
    c[13].m2=180,
    c[13].m3=500,
    c[13].m4=700,
    c[13].h=900,
    c[13].prixM =100,
    c[13].prixH = 100,
    c[13].hyp = 80,
    c[13].deshyp= 88,
    c[13].numero=13;


    // REEBOK
    strcpy(c[14].nom , "Reebok");
    c[14].prixC=180,
    c[14].loyer =14,
    c[14].loyerGr=28,
    c[14].m1=70,
    c[14].m2=200,
    c[14].m3=550,
    c[14].m4=750,
    c[14].h=950,
    c[14].prixM =100,
    c[14].prixH = 100,
    c[14].hyp = 90,
    c[14].deshyp= 99,
    c[14].numero=14;


     // SAMSUNG
    strcpy(c[18].nom , "Samsung");
    c[18].prixC=180,
    c[18].loyer =14,
    c[18].loyerGr=28,
    c[18].m1=70,
    c[18].m2=200,
    c[18].m3=550,
    c[18].m4=750,
    c[18].h=950,
    c[18].prixM =100,
    c[18].prixH = 100,
    c[18].hyp = 90,
    c[18].deshyp=99 ,
    c[18].numero=18;


     // APPLE
    strcpy(c[16].nom , "Apple");
    c[16].prixC=200,
    c[16].loyer =16,
    c[16].loyerGr=32,
    c[16].m1=80,
    c[16].m2=220,
    c[16].m3=600,
    c[16].m4=800,
    c[16].h=1000,
    c[16].prixM =100,
    c[16].prixH = 100,
    c[16].hyp =100 ,
    c[16].deshyp= 110,
    c[16].numero=16;


     // XAOMI
    strcpy(c[19].nom , "Xaomi");
    c[19].prixC=220,
    c[19].loyer =18,
    c[19].loyerGr=36,
    c[19].m1=90,
    c[19].m2=250,
    c[19].m3=700,
    c[19].m4=875,
    c[19].h=1050,
    c[19].prixM =150,
    c[19].prixH = 150,
    c[19].hyp = 110,
    c[19].deshyp= 121,
    c[19].numero=19;


     // LV
    strcpy(c[22].nom , "Louis Vuitton"),
    c[22].prixC=220,
    c[22].loyer =18,
    c[22].loyerGr=36,
    c[22].m1=90,
    c[22].m2=250,
    c[22].m3=750,
    c[22].m4=875,
    c[22].h=1050,
    c[22].prixM =150,
    c[22].prixH = 150,
    c[22].hyp =110 ,
    c[22].deshyp= 121,
    c[22].numero=22;


    // GUCCI
    strcpy(c[24].nom , "Gucci");
    c[24].prixC=240,
    c[24].loyer =20,
    c[24].loyerGr=40,
    c[24].m1=100,
    c[24].m2=300,
    c[24].m3=750,
    c[24].m4=925,
    c[24].h=1100,
    c[24].prixM =150,
    c[24].prixH = 150,
    c[24].hyp =120 ,
    c[24].deshyp=132 ,
    c[24].numero=24;

    // ROLEX
    strcpy(c[27].nom , "Rolex");
    c[27].prixC=280,
    c[27].loyer =24,
    c[27].loyerGr=48,
    c[27].m1=120,
    c[27].m2=360,
    c[27].m3=850,
    c[27].m4=1025,
    c[27].h=1200,
    c[27].prixM =150,
    c[27].prixH = 150,
    c[27].hyp = 140,
    c[27].deshyp= 154,
    c[27].numero=27;

     // BUGATTI
    strcpy(c[30].nom , "Bugatti");
    c[30].prixC=300,
    c[30].loyer =26,
    c[30].loyerGr=52,
    c[30].m1=130,
    c[30].m2=390,
    c[30].m3=900,
    c[30].m4=1100,
    c[30].h=1275,
    c[30].prixM =200,
    c[30].prixH = 200,
    c[30].hyp =150 ,
    c[30].deshyp=165,
    c[30].numero=30;

    // SNCF
    strcpy(c[28].nom , "SNCF");
    c[28].prixC=200,
    c[28].loyer =50,
    c[28].m1=0,
    c[28].m2=100, // LOYER SI 2 gares
    c[28].m3=200, // Loyer si toutes les gares
    c[28].m4=0,
    c[28].prixM =0,
    c[28].prixH = 0,
    c[28].hyp =100 ,
    c[28].deshyp=110 ,
    c[28].numero=28;

    // AIRFRANCE
    strcpy(c[12].nom , "AirFrance");
    c[12].prixC=200,
    c[12].loyer =50,
    c[12].m1=0,
    c[12].m2=100,
    c[12].m3=200,
    c[12].m4=0,
    c[12].prixM =0,
    c[12].prixH = 0,
    c[12].hyp = 100,
    c[12].deshyp= 110,
    c[12].numero=12;

    // RATP
    strcpy(c[21].nom , "RATP");
    c[21].prixC=200,
    c[21].loyer =50,
    c[21].m1=0,
    c[21].m2=100,
    c[21].m3=200,
    c[21].m4=0,
    c[21].prixM =0,
    c[21].prixH = 0,
    c[21].hyp =100 ,
    c[21].deshyp=110 ,
    c[21].numero=21;

    // EDF (/!\ ne pas oublier l'implantation du dé /!\)
    strcpy(c[5].nom , "EDF");
    c[5].prixC=150,
    c[5].loyer =4,      // (! xdé)
    c[5].loyerGr=10,    //4 fois le résultat du dé (! xdé)
    c[5].m1=0,
    c[5].m2=0, // Si les deux services : fois 10
    c[5].m3=0,
    c[5].m4=0,
    c[5].prixM =0,
    c[5].hyp = 100,
    c[5].deshyp= 110,
    c[5].numero=5;

    // SUEZ (/!\ ne pas oublier l'implantation du dé /!\)
    strcpy(c[20].nom , "Suez");
    c[20].prixC=150,
    c[20].loyer =4,        // (! xdé)
    c[20].m1=0,
    c[20].loyerGr=10,      // (! xdé)
    c[20].m2=0,
    c[20].m3=0,
    c[20].m4=0,
    c[20].prixM =0,
    c[20].hyp =100 ,
    c[20].deshyp= 110,
    c[20].numero=20;

    return c;
}







