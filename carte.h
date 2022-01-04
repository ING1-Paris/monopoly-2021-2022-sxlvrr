#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct carte1 {
        char nom[200];
        int prixC;
        int loyer,loyerGr;
        int m1,m2,m3,m4,h;
        int prixM,prixH;
        int hypotheque;
        int deshypotheque;
    };
int carte (){
    struct carte1 cA; // DEPART
    strcpy (cA.nom, "Depart");
    cA.loyer = 0;
    cA.m1=cA.m2=cA.m3=cA.m4=0;
    cA.prixM = cA.prixH = 0;
    cA.hypotheque = cA.deshypotheque= 0;

    struct carte1 cB; // PRISON
    strcpy (cB.nom , "Prison");
    cB.loyer = 0;
    cB.m1=cB.m2=cB.m3=cB.m4=0;
    cB.prixM = cB.prixH = 0;
    cB.hypotheque = cB.deshypotheque= 0;

    struct carte1 cC; // VISITE PRISON
    strcpy(cC.nom , "Visite Prison");
    cC.loyer = 0;
    cC.m1=cC.m2=cC.m3=cC.m4=0;
    cC.prixM = cC.prixH = 0;
    cC.hypotheque = cC.deshypotheque= 0;

    struct carte1 cD; // CARTE ENCHERE
    strcpy(cD.nom , "Enchere");
    cD.loyer = 0;
    cD.m1=cD.m2=cD.m3=cD.m4=0;
    cD.prixM = cD.prixH = 0;
    cD.hypotheque = cD.deshypotheque= 0;

    struct carte1 cF;
    strcpy(cF.nom , "Stationnement gratuit");
    cF.loyer = 0;
    cF.m1=cF.m2=cF.m3=cF.m4=0;
    cF.prixM = cF.prixH = 0;
    cF.hypotheque = cF.deshypotheque= 0;

    struct carte1 cG;
    strcpy(cG.nom , "Wish");
    cG.prixC=60;
    cG.loyer =2;
    cG.loyerGr=4;
    cG.m1=10;
    cG.m2=30;
    cG.m3=90;
    cG.m4=160;
    cG.h=250;
    cG.prixM =50;
    cG.prixH = 50;
    cG.hypotheque = 30 ;
    cG.deshypotheque=33 ;

    struct carte1 cH;
    strcpy(cH.nom , "Epicier du coin");
    cH.prixC=60;
    cH.loyer =4;
    cH.loyerGr=8;
    cH.m1=20;
    cH.m2=60;
    cH.m3=180;
    cH.m4=360;
    cH.h=450;
    cH.prixM =50;
    cH.prixH = 50;
    cH.hypotheque = 30;
    cH.deshypotheque= 33;

    struct carte1 cI;
    strcpy(cI.nom , "Action");
    cI.prixC=100;
    cI.loyer =6;
    cI.loyerGr=12;
    cI.m1=30;
    cI.m2=90;
    cI.m3=270;
    cI.m4=400;
    cI.h=550;
    cI.prixM =50;
    cI.prixH = 50;
    cI.hypotheque = 50;
    cI.deshypotheque= 55;

    struct carte1 cJ;
    strcpy(cJ.nom , "Lidl");
    cJ.prixC=100;
    cJ.loyer =6;
    cJ.loyerGr=12;
    cJ.m1=30;
    cJ.m2=90;
    cJ.m3=270;
    cJ.m4=400;
    cJ.h=550;
    cJ.prixM =50;
    cJ.prixH = 50;
    cJ.hypotheque =50 ;
    cJ.deshypotheque=55 ;

    struct carte1 cK;
    strcpy(cK.nom , "Franprix");
    cK.prixC=120;
    cK.loyer =8;
    cK.loyerGr=16;
    cK.m1=40;
    cK.m2=100;
    cK.m3=300;
    cK.m4=450;
    cK.h=600;
    cK.prixM =50;
    cK.prixH = 50;
    cK.hypotheque =60 ;
    cK.deshypotheque=66 ;

    struct carte1 cL;
    strcpy(cL.nom , "Monoprix");
    cL.prixC=140;
    cL.loyer =10;
    cL.loyerGr=20;
    cL.m1=50;
    cL.m2=150;
    cL.m3=450;
    cL.m4=625;
    cL.h=750;
    cL.prixM =100;
    cL.prixH = 100;
    cL.hypotheque =70 ;
    cL.deshypotheque=77 ;

    struct carte1 cM;
    strcpy(cM.nom , "Nike");
    cM.prixC=140;
    cM.loyer =10;
    cM.loyerGr=20;
    cM.m1=50;
    cM.m2=150;
    cM.m3=450;
    cM.m4=625;
    cM.h=750;
    cM.prixM =100;
    cM.prixH = 100;
    cM.hypotheque =70 ;
    cM.deshypotheque=77 ;

    struct carte1 cN;
    strcpy(cN.nom , "Adidas");
    cN.prixC=160;
    cN.loyer =12;
    cN.loyerGr=24;
    cN.m1=60;
    cN.m2=180;
    cN.m3=500;
    cN.m4=700;
    cN.h=900;
    cN.prixM =100;
    cN.prixH = 100;
    cN.hypotheque = 80;
    cN.deshypotheque= 88;

    struct carte1 cO;
    strcpy(cO.nom , "Rebook");
    cO.prixC=180;
    cO.loyer =14;
    cO.loyerGr=28;
    cO.m1=70;
    cO.m2=200;
    cO.m3=550;
    cO.m4=750;
    cO.h=950;
    cO.prixM =100;
    cO.prixH = 100;
    cO.hypotheque = 90;
    cO.deshypotheque= 99;

    struct carte1 cP;
    strcpy(cP.nom , "Samsung");
    cP.prixC=180;
    cP.loyer =14;
    cP.loyerGr=28;
    cP.m1=70;
    cP.m2=200;
    cP.m3=550;
    cP.m4=750;
    cP.h=950;
    cP.prixM =100;
    cP.prixH = 100;
    cP.hypotheque = 90;
    cP.deshypotheque=99 ;

    struct carte1 cQ;
    strcpy(cQ.nom , "Apple");
    cQ.prixC=200;
    cQ.loyer =16;
    cQ.loyerGr=32;
    cQ.m1=80;
    cQ.m2=220;
    cQ.m3=600;
    cQ.m4=800;
    cQ.h=1000;
    cQ.prixM =100;
    cQ.prixH = 100;
    cQ.hypotheque =100 ;
    cQ.deshypotheque= 110;

    struct carte1 cR;
    strcpy(cR.nom , "Xaomi");
    cR.prixC=220;
    cR.loyer =18;
    cR.loyerGr=36;
    cR.m1=90;
    cR.m2=250;
    cR.m3=700;
    cR.m4=875;
    cR.h=1050;
    cR.prixM =150;
    cR.prixH = 150;
    cR.hypotheque = 110;
    cR.deshypotheque= 121;

    struct carte1 cS;
    strcpy(cS.nom , "Louis Vuitton");
    cS.prixC=220;
    cS.loyer =18;
    cS.loyerGr=36;
    cS.m1=90;
    cS.m2=250;
    cS.m3=750;
    cS.m4=875;
    cS.h=1050;
    cS.prixM =150;
    cS.prixH = 150;
    cS.hypotheque =110 ;
    cS.deshypotheque= 121;

    struct carte1 cT;
    strcpy(cT.nom , "Gucci");
    cT.prixC=240;
    cT.loyer =20;
    cT.loyerGr=40;
    cT.m1=100;
    cT.m2=300;
    cT.m3=750;
    cT.m4=925;
    cT.h=1100;
    cT.prixM =150;
    cT.prixH = 150;
    cT.hypotheque =120 ;
    cT.deshypotheque=132 ;

    struct carte1 cU;
    strcpy(cU.nom , "Rolex");
    cU.prixC=280;
    cU.loyer =24;
    cU.loyerGr=48;
    cU.m1=120;
    cU.m2=360;
    cU.m3=850;
    cU.m4=1025;
    cU.h=1200;
    cU.prixM =150;
    cU.prixH = 150;
    cU.hypotheque = 140;
    cU.deshypotheque= 154;

    struct carte1 cV;
    strcpy(cV.nom , "Bugatti");
    cV.prixC=300;
    cV.loyer =26;
    cV.loyerGr=52;
    cV.m1=130;
    cV.m2=390;
    cV.m3=900;
    cV.m4=1100;
    cV.h=1275;
    cV.prixM =200;
    cV.prixH = 200;
    cV.hypotheque =150 ;
    cV.deshypotheque=165;

    struct carte1 cW;
    strcpy(cW.nom , "SNCF");
    cW.prixC=200;
    cW.loyer =50;
    cW.m1=0;
    cW.m2=100; // LOYER SI 2 gares
    cW.m3=200; // Loyer si toutes les gares
    cW.m4=0;
    cW.prixM =0;
    cW.prixH = 0;
    cW.hypotheque =100 ;
    cW.deshypotheque=110 ;

    struct carte1 cX;
    strcpy(cX.nom , "AirFrance");
    cX.prixC=200;
    cX.loyer =50;
    cX.m1=0;
    cX.m2=100;
    cX.m3=200;
    cX.m4=0;
    cX.prixM =0;
    cX.prixH = 0;
    cX.hypotheque = 100;
    cX.deshypotheque= 110;

    struct carte1 cY;
    strcpy(cY.nom , "RATP");
    cY.prixC=200;
    cY.loyer =50;
    cY.m1=0;
    cY.m2=100;
    cY.m3=200;
    cY.m4=0;
    cY.prixM =0;
    cY.prixH = 0;
    cY.hypotheque =100 ;
    cY.deshypotheque=110 ;

    struct carte1 cZ;
    strcpy(cZ.nom , "EDF");
    cZ.prixC=150;
    cZ.loyer =4*dé;
    cZ.loyerGr=10*dé; //4 fois le résultat du dé
    cZ.m1=0;
    cZ.m2=0; // Si les deux services : fois 10
    cZ.m3=0;
    cZ.m4=0;
    cZ.prixM =0;
    cZ.prixH = 0;
    cZ.hypotheque = 100;
    cZ.deshypotheque= 110;

    struct carte1 cZZ;
    strcpy(cZZ.nom , "Suez");
    cZZ.prixC=150;
    cZZ.loyer =4*dé;
    cZZ.m1=0;
    cZZ.loyerGr=10*dé;
    cZZ.m2=0;
    cZZ.m3=0;
    cZZ.m4=0;
    cZZ.prixM =0;
    cZZ.prixH = 0;
    cZZ.hypotheque =100 ;
    cZZ.deshypotheque= 110;


    struct joueur{
        char nom[200];
        int argent;
        int achat;
        char* carte[30];
    };
    struct joueur p1;
    struct joueur p2;
    struct joueur p3;
    struct joueur p4;
struct perdu{
    int perdu;
};

struct perdu d1;
struct perdu d2;
struct perdu d3;
struct perdu d4;
}
int fin;
// dé qui tourne
int j1=tableau[0];
int j2=tableau[0];
int j3=tableau[0];
int j4=tableau[0];

int tableau[32]; // Tableau qui permet d'afficher le nom le loyer et le prix de la carte au joueur (on devra aussi demander s'il veut acheter ou si ca appartient déja et dans ce cas obliger de payer le loyer)
                        // Il faut aussi faire ajouter un if dans chaque case associer au dé qui fait que à s'il est dessus et que dé=/// alors il avance de par exemple tableau 0 + dé


// boucle do while qui fait jouer les joueurs de 1 à 4 tant que 3 n'ont pas fait faillite. dé qui tourne 
//POUR CARTE IF AVEC UN FOR DEDANS

    
    
   

    if (j1 == tableau[1]); // Wish
        printf("Case: %s",cG.nom);
        printf("Prix de la carte: %d",cG.prixC);
        printf("Loyer: %d",cG.loyer);
        printf("Loyer de tous le groupe: %d",cG.loyerGr); //CP


        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cG.nom == p1.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cG.nom == p2.carte[k]||cG.nom==p3.carte[k]||cG.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cG.loyer;
    
    if (j2 == tableau[1]); // Wish
        printf("Case: %s",cG.nom);
        printf("Prix de la carte: %d",cG.prixC);
        printf("Loyer: %d",cG.loyer);
        printf("Loyer de tous le groupe: %d",cG.loyerGr);


        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cG.nom == p2.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cG.nom == p1.carte[k]||cG.nom==p3.carte[k]||cG.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cG.loyer;
        
    if (j3 == tableau[1]); // Wish
        printf("Case: %s",cG.nom);
        printf("Prix de la carte: %d",cG.prixC);
        printf("Loyer: %d",cG.loyer);
        printf("Loyer de tous le groupe: %d",cG.loyerGr);


        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cG.nom == p3.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cG.nom == p2.carte[k]||cG.nom==p1.carte[k]||cG.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cG.loyer;    
        
                
    if (j4 == tableau[1]); 
        printf("Case: %s",cG.nom);
        printf("Prix de la carte: %d",cG.prixC);
        printf("Loyer: %d",cG.loyer);
        printf("Loyer de tous le groupe: %d",cG.loyerGr);


        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cG.nom == p4.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cG.nom == p2.carte[k]||cG.nom==p3.carte[k]||cG.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cG.loyer;

        for (int k=0;k>30;k++)
            if (!(cH.nom==p1.carte[k] && cH.nom==p2.carte[k]&& cH.nom==p3.carte[k]&& cH.nom==p4.carte[k])) // Si la carte appartient à personne

                if(j1==tableau[1])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p1.achat);}
                    while(p1.achat!=1||p1.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j1==tableau[1] && p1.achat==1);
                            p1.carte[1]=cG.nom;
                            p1.argent=p1.argent - cG.prixC;
                
                if(j2==tableau[1])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p2.achat);}
                    while(p2.achat!=1||p2.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j2==tableau[1] && p2.achat==1);
                            p2.carte[1]=cG.nom;
                            p2.argent=p2.argent - cG.prixC;
                        

                if(j3==tableau[1])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p3.achat);}
                    while(p3.achat!=1||p3.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j3==tableau[1] && p3.achat==1);
                            p3.carte[1]=cG.nom;
                            p3.argent=p3.argent - cG.prixC;
                        
                if(j4==tableau[1])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p4.achat);}
                    while(p4.achat!=1||p4.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j4==tableau[1] && p4.achat==1);
                            p4.carte[1]=cG.nom;
                            p4.argent=p4.argent - cG.prixC;


    if (j1 == tableau[2]);
        printf("Case: %s",cH.nom);
        printf("Prix de la carte: %d",cH.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cH.loyer);
        printf("Loyer de tous le groupe: %d",cH.loyerGr);
        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cH.nom == p1.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cH.nom == p2.carte[k]||cH.nom==p3.carte[k]||cH.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cH.loyer;
    
    if (j2 == tableau[2]); // épicier, on le fait pour chacun des joueurs pour la clareté du code 
        printf("Case: %s",cH.nom);
        printf("Prix de la carte: %d",cH.prixC);
        printf("Loyer: %d",cH.loyer);
        printf("Loyer de tous le groupe: %d",cH.loyerGr);


        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cH.nom == p2.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cH.nom == p1.carte[k]||cH.nom==p3.carte[k]||cH.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cH.loyer;
        
    if (j3 == tableau[2]); // Wish
        printf("Case: %s",cH.nom);
        printf("Prix de la carte: %d",cH.prixC);
        printf("Loyer: %d",cH.loyer);
        printf("Loyer de tous le groupe: %d",cH.loyerGr);


        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cH.nom == p3.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cH.nom == p2.carte[k]||cH.nom==p1.carte[k]||cH.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cH.loyer;    
        
                
    if (j4 == tableau[2]); 
        printf("Case: %s",cH.nom);
        printf("Prix de la carte: %d",cH.prixC);
        printf("Loyer: %d",cH.loyer);
        printf("Loyer de tous le groupe: %d",cH.loyerGr);


        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cH.nom == p4.carte[k])
                printf("Cette carte vous appartient\n ");

         // regarde si la carte appartient deja à quelqu"un
        for (int k=0;k>30;k++)
            if (cH.nom == p2.carte[k]||cH.nom==p3.carte[k]||cH.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cH.loyer;

        for (int k=0;k>30;k++)
            if (!(cH.nom==p1.carte[k] && cH.nom==p2.carte[k]&& cH.nom==p3.carte[k]&& cH.nom==p4.carte[k])) // Si la carte appartient à personne
                if(j1==tableau[2])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p1.achat);}
                    while(p1.achat!=1||p1.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j1==tableau[1] && p1.achat==1);
                            p1.carte[2]=cH.nom;
                            p1.argent=p1.argent - cH.prixC;
                
                if(j2==tableau[2])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p2.achat);}
                    while(p2.achat!=1||p2.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j2==tableau[2] && p2.achat==1);
                            p2.carte[2]=cH.nom;
                            p2.argent=p2.argent - cH.prixC;
                        

                if(j3==tableau[2])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p3.achat);}
                    while(p3.achat!=1||p3.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j3==tableau[2] && p3.achat==1);
                            p3.carte[2]=cH.nom;
                            p3.argent=p3.argent - cH.prixC;
                        
                if(j4==tableau[2])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p4.achat);}
                    while(p4.achat!=1||p4.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j4==tableau[2] && p4.achat==1);
                            p4.carte[2]=cH.nom;
                            p4.argent=p4.argent - cH.prixC;


    if (j1 == tableau[3] || j2 == tableau[3] || j3 == tableau[3] || j4 == tableau[3]) ;
        printf("Case: %s",cA.nom);
        printf("Prix de la carte: %d",cA.prixC);      // CAISSE COMMU
        printf("Loyer: %d",cA.loyer);
        printf("Loyer de tous le groupe: %d",cA.loyerGr);   
    
    if (j1 == tableau[4]);
        printf("Case: %s",cI.nom);
        printf("Prix de la carte: %d",cI.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cI.loyer);
        printf("Loyer de tous le groupe: %d",cI.loyerGr);
        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cI.nom == p1.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cI.nom == p2.carte[k]||cI.nom==p3.carte[k]||cI.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cI.loyer;
    
    if (j2 == tableau[4]); // Action, on le fait pour chacun des joueurs pour la clareté du code 
        printf("Case: %s",cI.nom);
        printf("Prix de la carte: %d",cI.prixC);
        printf("Loyer: %d",cI.loyer);
        printf("Loyer de tous le groupe: %d",cI.loyerGr);


        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cI.nom == p2.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cI.nom == p1.carte[k]||cI.nom==p3.carte[k]||cI.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cI.loyer;
        
    if (j3 == tableau[4]); // Wish
        printf("Case: %s",cI.nom);
        printf("Prix de la carte: %d",cI.prixC);
        printf("Loyer: %d",cI.loyer);
        printf("Loyer de tous le groupe: %d",cI.loyerGr);


        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cI.nom == p3.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cI.nom == p2.carte[k]||cI.nom==p1.carte[k]||cI.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cI.loyer;    
        
                
    if (j4 == tableau[4]); 
        printf("Case: %s",cI.nom);
        printf("Prix de la carte: %d",cI.prixC);
        printf("Loyer: %d",cI.loyer);
        printf("Loyer de tous le groupe: %d",cI.loyerGr);


        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cI.nom == p4.carte[k])
                printf("Cette carte vous appartient\n ");

         // regarde si la carte appartient deja à quelqu"un
        for (int k=0;k>30;k++)
            if (cI.nom == p2.carte[k]||cI.nom==p3.carte[k]||cI.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cI.loyer;

        for (int k=0;k>30;k++)
            if (!(cI.nom==p1.carte[k] && cI.nom==p2.carte[k]&& cI.nom==p3.carte[k]&& cI.nom==p4.carte[k])) // Si la carte appartient à personne
                if(j1==tableau[4])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p1.achat);}
                    while(p1.achat!=1||p1.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j1==tableau[4] && p1.achat==1);
                            p1.carte[4]=cI.nom;
                            p1.argent=p1.argent - cI.prixC;
                
                if(j2==tableau[4])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p2.achat);}
                    while(p2.achat!=1||p2.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j2==tableau[4] && p2.achat==1);
                            p2.carte[4]=cI.nom;
                            p2.argent=p2.argent - cI.prixC;
                        

                if(j3==tableau[4])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p3.achat);}
                    while(p3.achat!=1||p3.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j3==tableau[4] && p3.achat==1);
                            p3.carte[4]=cI.nom;
                            p3.argent=p3.argent - cI.prixC;
                        
                if(j4==tableau[4])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p4.achat);}
                    while(p4.achat!=1||p4.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j4==tableau[4] && p4.achat==1);
                            p4.carte[4]=cI.nom;
                            p4.argent=p4.argent - cI.prixC;

    if (j1 == tableau[5]); // EDF
        printf("Case: %s",cZ.nom);
        printf("Prix de la carte: %d",cZ.prixC); // On écZit chacZn des éléments de la carte
        printf("Loyer: %d",cZ.loyer);
        printf("Loyer de tous le groupe: %d",cZ.loyerGr);
        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cZ.nom == p1.carte[k])
                printf("Cette carte vous appartient, bienvenue chez vous\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cZ.nom == p2.carte[k]||cZ.nom==p3.carte[k]||cZ.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cZ.loyer;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cZ.nom == p2.carte[k] && cZZ.nom==p2.carte[k]||cZ.nom==p3.carte[k] && cZZ.nom==p3.carte[k]||cZ.nom==p4.carte[k] && cZZ.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cZ.loyerGr;
    
    if (j2 == tableau[5]); // AcZion, on le fait pour chacZn des joueurs pour la cZareté du cZde 
        printf("Case: %s",cZ.nom);
        printf("Prix de la carte: %d",cZ.prixC);
        printf("Loyer: %d",cZ.loyer);
        printf("Loyer de tous le groupe: %d",cZ.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cZ.nom == p2.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cZ.nom == p1.carte[k]||cZ.nom==p3.carte[k]||cZ.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cZ.loyer;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cZ.nom == p2.carte[k] && cZZ.nom==p2.carte[k]||cZ.nom==p3.carte[k] && cZZ.nom==p3.carte[k]||cZ.nom==p4.carte[k] && cZZ.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cZ.loyerGr;

    if (j3 == tableau[5]); // Wish
        printf("Case: %s",cZ.nom);
        printf("Prix de la carte: %d",cZ.prixC);
        printf("Loyer: %d",cZ.loyer);
        printf("Loyer de tous le groupe: %d",cZ.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cZ.nom == p3.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cZ.nom == p2.carte[k]||cZ.nom==p1.carte[k]||cZ.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cZ.loyer;    
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cZ.nom == p2.carte[k] && cZZ.nom==p2.carte[k]||cZ.nom==p3.carte[k] && cZZ.nom==p3.carte[k]||cZ.nom==p4.carte[k] && cZZ.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cZ.loyerGr;
                
    if (j4 == tableau[5]); 
        printf("Case: %s",cZ.nom);
        printf("Prix de la carte: %d",cZ.prixC);
        printf("Loyer: %d",cZ.loyer);
        printf("Loyer de tous le groupe: %d",cZ.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cZ.nom == p4.carte[k])
                printf("Cette carte vous appartient\n ");

         // regarde si la carte appartient deja à quelqu"un
        for (int k=0;k>30;k++)
            if (cZ.nom == p2.carte[k]||cZ.nom==p3.carte[k]||cZ.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cZ.loyer;

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cZ.nom == p2.carte[k] && cZZ.nom==p2.carte[k]||cZ.nom==p3.carte[k] && cZZ.nom==p3.carte[k]||cZ.nom==p4.carte[k] && cZZ.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cZ.loyerGr;

        for (int k=0;k>30;k++)
            if (!(cZ.nom==p1.carte[k] && cZ.nom==p2.carte[k]&& cZ.nom==p3.carte[k]&& cZ.nom==p4.carte[k])) // Si la carte appartient à personne
                if(j1==tableau[5])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p1.achat);}
                    while(p1.achat!=1||p1.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facZn à ce que après la propriété ne soit plus achetable
                        if (j1==tableau[5] && p1.achat==1);
                            p1.carte[5]=cZ.nom;
                            p1.argent=p1.argent - cZ.prixC;
                
                if(j2==tableau[5])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p2.achat);}
                    while(p2.achat!=1||p2.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facZn à ce que après la propriété ne soit plus achetable
                        if (j2==tableau[5] && p2.achat==1);
                            p2.carte[5]=cZ.nom;
                            p2.argent=p2.argent - cZ.prixC;
                        

                if(j3==tableau[5])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p3.achat);}
                    while(p3.achat!=1||p3.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facZn à ce que après la propriété ne soit plus achetable
                        if (j3==tableau[5] && p3.achat==1);
                            p3.carte[5]=cZ.nom;
                            p3.argent=p3.argent - cZ.prixC;
                        
                if(j4==tableau[5])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p4.achat);}
                    while(p4.achat!=1||p4.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facZn à ce que après la propriété ne soit plus achetable
                        if (j4==tableau[5] && p4.achat==1);
                            p4.carte[5]=cZ.nom;
                            p4.argent=p4.argent - cZ.prixC;




    
    if (j1 == tableau[6]);
        printf("Case: %s",cJ.nom);
        printf("Prix de la carte: %d",cJ.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cJ.loyer);
        printf("Loyer de tous le groupe: %d",cJ.loyerGr);
        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cJ.nom == p1.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cJ.nom == p2.carte[k]||cJ.nom==p3.carte[k]||cJ.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cJ.loyer;
    
    if (j2 == tableau[6]); // Action, on le fait pour chacun des joueurs pour la clareté du code 
        printf("Case: %s",cJ.nom);
        printf("Prix de la carte: %d",cJ.prixC);
        printf("Loyer: %d",cJ.loyer);
        printf("Loyer de tous le groupe: %d",cJ.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cJ.nom == p2.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cJ.nom == p1.carte[k]||cJ.nom==p3.carte[k]||cJ.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cJ.loyer;
        
    if (j3 == tableau[6]); // Wish
        printf("Case: %s",cJ.nom);
        printf("Prix de la carte: %d",cJ.prixC);
        printf("Loyer: %d",cJ.loyer);
        printf("Loyer de tous le groupe: %d",cJ.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cJ.nom == p3.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cJ.nom == p2.carte[k]||cJ.nom==p1.carte[k]||cJ.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cJ.loyer;    
        
                
    if (j4 == tableau[6]); 
        printf("Case: %s",cJ.nom);
        printf("Prix de la carte: %d",cJ.prixC);
        printf("Loyer: %d",cJ.loyer);
        printf("Loyer de tous le groupe: %d",cJ.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cJ.nom == p4.carte[k])
                printf("Cette carte vous appartient\n ");

         // regarde si la carte appartient deja à quelqu"un
        for (int k=0;k>30;k++)
            if (cJ.nom == p2.carte[k]||cJ.nom==p3.carte[k]||cJ.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cJ.loyer;

        for (int k=0;k>30;k++)
            if (!(cJ.nom==p1.carte[k] && cJ.nom==p2.carte[k]&& cJ.nom==p3.carte[k]&& cJ.nom==p4.carte[k])) // Si la carte appartient à personne
                if(j1==tableau[6])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p1.achat);}
                    while(p1.achat!=1||p1.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j1==tableau[6] && p1.achat==1);
                            p1.carte[6]=cJ.nom;
                            p1.argent=p1.argent - cJ.prixC;
                
                if(j2==tableau[6])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p2.achat);}
                    while(p2.achat!=1||p2.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j2==tableau[6] && p2.achat==1);
                            p2.carte[6]=cJ.nom;
                            p2.argent=p2.argent - cJ.prixC;
                        

                if(j3==tableau[6])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p3.achat);}
                    while(p3.achat!=1||p3.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j3==tableau[6] && p3.achat==1);
                            p3.carte[6]=cJ.nom;
                            p3.argent=p3.argent - cJ.prixC;
                        
                if(j4==tableau[6])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p4.achat);}
                    while(p4.achat!=1||p4.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j4==tableau[6] && p4.achat==1);
                            p4.carte[6]=cJ.nom;
                            p4.argent=p4.argent - cJ.prixC;;



    if (j1 == tableau[7]);
        printf("Case: %s",cK.nom);
        printf("Prix de la carte: %d",cK.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cK.loyer);
        printf("Loyer de tous le groupe: %d",cK.loyerGr);
        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cK.nom == p1.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cK.nom == p2.carte[k]||cK.nom==p3.carte[k]||cK.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cK.loyer;
    
    if (j2 == tableau[7]); // Action, on le fait pour chacun des joueurs pour la clareté du code 
        printf("Case: %s",cK.nom);
        printf("Prix de la carte: %d",cK.prixC);
        printf("Loyer: %d",cK.loyer);
        printf("Loyer de tous le groupe: %d",cK.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cK.nom == p2.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cK.nom == p1.carte[k]||cK.nom==p3.carte[k]||cK.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cK.loyer;
        
    if (j3 == tableau[7]); // Wish
        printf("Case: %s",cK.nom);
        printf("Prix de la carte: %d",cK.prixC);
        printf("Loyer: %d",cK.loyer);
        printf("Loyer de tous le groupe: %d",cK.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cK.nom == p3.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cK.nom == p2.carte[k]||cK.nom==p1.carte[k]||cK.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cK.loyer;    
        
                
    if (j4 == tableau[7]); 
        printf("Case: %s",cK.nom);
        printf("Prix de la carte: %d",cK.prixC);
        printf("Loyer: %d",cK.loyer);
        printf("Loyer de tous le groupe: %d",cK.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cK.nom == p4.carte[k])
                printf("Cette carte vous appartient\n ");

         // regarde si la carte appartient deja à quelqu"un
        for (int k=0;k>30;k++)
            if (cK.nom == p2.carte[k]||cK.nom==p3.carte[k]||cK.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cK.loyer;

        for (int k=0;k>30;k++)
            if (!(cK.nom==p1.carte[k] && cK.nom==p2.carte[k]&& cK.nom==p3.carte[k]&& cK.nom==p4.carte[k])) // Si la carte appartient à personne
                if(j1==tableau[7])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p1.achat);}
                    while(p1.achat!=1||p1.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j1==tableau[7] && p1.achat==1);
                            p1.carte[7]=cK.nom;
                            p1.argent=p1.argent - cK.prixC;
                
                if(j2==tableau[7])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p2.achat);}
                    while(p2.achat!=1||p2.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j2==tableau[7] && p2.achat==1);
                            p2.carte[7]=cK.nom;
                            p2.argent=p2.argent - cK.prixC;
                        

                if(j3==tableau[7])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p3.achat);}
                    while(p3.achat!=1||p3.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j3==tableau[7] && p3.achat==1);
                            p3.carte[7]=cK.nom;
                            p3.argent=p3.argent - cK.prixC;
                        
                if(j4==tableau[7])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p4.achat);}
                    while(p4.achat!=1||p4.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j4==tableau[7] && p4.achat==1);
                            p4.carte[7]=cK.nom;
                            p4.argent=p4.argent - cK.prixC;

    
    if (j1 == tableau[8] || j2 == tableau[8] || j3 == tableau[8] || j4 == tableau[8]) ;
        printf("Case: %s",cI.nom);
        printf("Prix de la carte: %d",cI.prixC);            // CHANCE
        printf("Loyer: %d",cI.loyer);
        printf("Loyer de tous le groupe: %d",cI.loyerGr);


    if (j1 == tableau[9]);
        printf("Case: %s",cL.nom);
        printf("Prix de la carte: %d",cL.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cL.loyer);
        printf("Loyer de tous le groupe: %d",cL.loyerGr);
        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cL.nom == p1.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cL.nom == p2.carte[k]||cL.nom==p3.carte[k]||cL.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cL.loyer;
    
    if (j2 == tableau[9]); // Action, on le fait pour chacun des joueurs pour la clareté du code 
        printf("Case: %s",cL.nom);
        printf("Prix de la carte: %d",cL.prixC);
        printf("Loyer: %d",cL.loyer);
        printf("Loyer de tous le groupe: %d",cL.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cL.nom == p2.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cL.nom == p1.carte[k]||cL.nom==p3.carte[k]||cL.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cL.loyer;
        
    if (j3 == tableau[9]); // Wish
        printf("Case: %s",cL.nom);
        printf("Prix de la carte: %d",cL.prixC);
        printf("Loyer: %d",cL.loyer);
        printf("Loyer de tous le groupe: %d",cL.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cL.nom == p3.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cL.nom == p2.carte[k]||cL.nom==p1.carte[k]||cL.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cL.loyer;    
        
                
    if (j4 == tableau[9]); 
        printf("Case: %s",cL.nom);
        printf("Prix de la carte: %d",cL.prixC);
        printf("Loyer: %d",cL.loyer);
        printf("Loyer de tous le groupe: %d",cL.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cL.nom == p4.carte[k])
                printf("Cette carte vous appartient\n ");

         // regarde si la carte appartient deja à quelqu"un
        for (int k=0;k>30;k++)
            if (cL.nom == p2.carte[k]||cL.nom==p3.carte[k]||cL.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cL.loyer;

        for (int k=0;k>30;k++)
            if (!(cL.nom==p1.carte[k] && cL.nom==p2.carte[k]&& cL.nom==p3.carte[k]&& cL.nom==p4.carte[k])) // Si la carte appartient à personne
                if(j1==tableau[9])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p1.achat);}
                    while(p1.achat!=1||p1.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j1==tableau[9] && p1.achat==1);
                            p1.carte[9]=cL.nom;
                            p1.argent=p1.argent - cL.prixC;
                
                if(j2==tableau[9])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p2.achat);}
                    while(p2.achat!=1||p2.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j2==tableau[9] && p2.achat==1);
                            p2.carte[9]=cL.nom;
                            p2.argent=p2.argent - cL.prixC;
                        

                if(j3==tableau[9])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p3.achat);}
                    while(p3.achat!=1||p3.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j3==tableau[9] && p3.achat==1);
                            p3.carte[9]=cL.nom;
                            p3.argent=p3.argent - cL.prixC;
                        
                if(j4==tableau[9])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p4.achat);}
                    while(p4.achat!=1||p4.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j4==tableau[9] && p4.achat==1);
                            p4.carte[9]=cL.nom;
                            p4.argent=p4.argent - cL.prixC;;




    if (j1 == tableau[10] || j2 == tableau[10]|| j3 == tableau[10] || j4 == tableau[10]) ; // Visite prison
        printf("Case: %s",cC.nom);
        printf("Prix de la carte: %d",cC.prixC);
        printf("Loyer: %d",cC.loyer);
        printf("Loyer de tous le groupe: %d",cC.loyerGr);
        printf("Coucou les prisonniers!!!");

    
    if (j1 == tableau[11]);
        printf("Case: %s",cM.nom);
        printf("Prix de la carte: %d",cM.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cM.loyer);
        printf("Loyer de tous le groupe: %d",cM.loyerGr);
        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cM.nom == p1.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cM.nom == p2.carte[k]||cM.nom==p3.carte[k]||cM.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cM.loyer;
    
    if (j2 == tableau[11]); // Action, on le fait pour chacun des joueurs pour la cMareté du code 
        printf("Case: %s",cM.nom);
        printf("Prix de la carte: %d",cM.prixC);
        printf("Loyer: %d",cM.loyer);
        printf("Loyer de tous le groupe: %d",cM.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cM.nom == p2.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cM.nom == p1.carte[k]||cM.nom==p3.carte[k]||cM.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cM.loyer;
        
    if (j3 == tableau[11]); // Wish
        printf("Case: %s",cM.nom);
        printf("Prix de la carte: %d",cM.prixC);
        printf("Loyer: %d",cM.loyer);
        printf("Loyer de tous le groupe: %d",cM.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cM.nom == p3.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cM.nom == p2.carte[k]||cM.nom==p1.carte[k]||cM.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cM.loyer;    
        
                
    if (j4 == tableau[11]); 
        printf("Case: %s",cM.nom);
        printf("Prix de la carte: %d",cM.prixC);
        printf("Loyer: %d",cM.loyer);
        printf("Loyer de tous le groupe: %d",cM.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cM.nom == p4.carte[k])
                printf("Cette carte vous appartient\n ");

         // regarde si la carte appartient deja à quelqu"un
        for (int k=0;k>30;k++)
            if (cM.nom == p2.carte[k]||cM.nom==p3.carte[k]||cM.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cM.loyer;

        for (int k=0;k>30;k++)
            if (!(cM.nom==p1.carte[k] && cM.nom==p2.carte[k]&& cM.nom==p3.carte[k]&& cM.nom==p4.carte[k])) // Si la carte appartient à personne
                if(j1==tableau[11])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p1.achat);}
                    while(p1.achat!=1||p1.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j1==tableau[11] && p1.achat==1);
                            p1.carte[11]=cM.nom;
                            p1.argent=p1.argent - cM.prixC;
                
                if(j2==tableau[11])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p2.achat);}
                    while(p2.achat!=1||p2.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j2==tableau[11] && p2.achat==1);
                            p2.carte[11]=cM.nom;
                            p2.argent=p2.argent - cM.prixC;
                        

                if(j3==tableau[11])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p3.achat);}
                    while(p3.achat!=1||p3.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j3==tableau[11] && p3.achat==1);
                            p3.carte[11]=cM.nom;
                            p3.argent=p3.argent - cM.prixC;
                        
                if(j4==tableau[11])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p4.achat);}
                    while(p4.achat!=1||p4.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j4==tableau[11] && p4.achat==1);
                            p4.carte[11]=cM.nom;
                            p4.argent=p4.argent - cM.prixC;;


    if (j1 == tableau[12]); // AF
        printf("Case: %s",cX.nom);
        printf("Prix de la carte: %d",cX.prixC); // On écZit chacZn des éléments de la carte
        printf("Loyer: %d",cX.loyer);
        printf("Loyer de tous le groupe: %d",cX.loyerGr);
        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cX.nom == p1.carte[k])
                printf("Cette carte vous appartient, bienvenue chez vous\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] && cW.nom==p2.carte[k] && cY.nom==p2.carte[k] ||cX.nom==p3.carte[k] && cW.nom==p3.carte[k] && cY.nom==p3.carte[k] ||cX.nom==p4.carte[k] && cW.nom==p4.carte[k] && cY.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cX.m3;

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] && cY.nom==p2.carte[k]||cX.nom==p3.carte[k] && cY.nom==p3.carte[k]||cX.nom==p4.carte[k] && cY.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cX.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] && cW.nom==p2.carte[k]||cX.nom==p3.carte[k] && cW.nom==p3.carte[k]||cX.nom==p4.carte[k] && cW.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cX.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] ||cX.nom==p3.carte[k] ||cX.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cX.loyer;
        
    if (j2 == tableau[12]); // AcZion, on le fait pour chacZn des joueurs pour la cZareté du cZde 
        printf("Case: %s",cX.nom);
        printf("Prix de la carte: %d",cX.prixC);
        printf("Loyer: %d",cX.loyer);
        printf("Loyer de tous le groupe: %d",cX.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cX.nom == p2.carte[k])
                printf("Cette carte vous appartient, bienvenue chez vous\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p1.carte[k] && cW.nom==p1.carte[k] && cY.nom==p1.carte[k] ||cX.nom==p3.carte[k] && cW.nom==p3.carte[k] && cY.nom==p3.carte[k] ||cX.nom==p4.carte[k] && cW.nom==p4.carte[k] && cY.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cX.m3;

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p1.carte[k] && cY.nom==p1.carte[k]||cX.nom==p3.carte[k] && cY.nom==p3.carte[k]||cX.nom==p4.carte[k] && cY.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cX.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p1.carte[k] && cW.nom==p1.carte[k]||cX.nom==p3.carte[k] && cW.nom==p3.carte[k]||cX.nom==p4.carte[k] && cW.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cX.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p1.carte[k] ||cX.nom==p3.carte[k] ||cX.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cX.loyer;
        

    if (j3 == tableau[12]); // Wish
        printf("Case: %s",cX.nom);
        printf("Prix de la carte: %d",cX.prixC);
        printf("Loyer: %d",cX.loyer);
        printf("Loyer de tous le groupe: %d",cX.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cX.nom == p3.carte[k])
                printf("Cette carte vous appartient, bienvenue chez vous\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] && cW.nom==p2.carte[k] && cY.nom==p2.carte[k] ||cX.nom==p1.carte[k] && cW.nom==p1.carte[k] && cY.nom==p1.carte[k] ||cX.nom==p4.carte[k] && cW.nom==p4.carte[k] && cY.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cX.m3;

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] && cY.nom==p2.carte[k]||cX.nom==p1.carte[k] && cY.nom==p1.carte[k]||cX.nom==p4.carte[k] && cY.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cX.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] && cW.nom==p2.carte[k]||cX.nom==p1.carte[k] && cW.nom==p1.carte[k]||cX.nom==p4.carte[k] && cW.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cX.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] ||cX.nom==p1.carte[k] ||cX.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cX.loyer;
        
                
    if (j4 == tableau[12]); 
        printf("Case: %s",cX.nom);
        printf("Prix de la carte: %d",cX.prixC);
        printf("Loyer: %d",cX.loyer);
        printf("Loyer de tous le groupe: %d",cX.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cX.nom == p4.carte[k])
                printf("Cette carte vous appartient, bienvenue chez vous\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] && cW.nom==p2.carte[k] && cY.nom==p2.carte[k] ||cX.nom==p3.carte[k] && cW.nom==p3.carte[k] && cY.nom==p3.carte[k] ||cX.nom==p1.carte[k] && cW.nom==p1.carte[k] && cY.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cX.m3;

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] && cY.nom==p2.carte[k]||cX.nom==p3.carte[k] && cY.nom==p3.carte[k]||cX.nom==p1.carte[k] && cY.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cX.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] && cW.nom==p2.carte[k]||cX.nom==p3.carte[k] && cW.nom==p3.carte[k]||cX.nom==p1.carte[k] && cW.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cX.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] ||cX.nom==p3.carte[k] ||cX.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cX.loyer;
        
        for (int k=0;k>30;k++)
            if (!(cX.nom==p1.carte[k] && cX.nom==p2.carte[k]&& cX.nom==p3.carte[k]&& cX.nom==p4.carte[k])) // Si la carte appartient à personne
                if(j1==tableau[12])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p1.achat);}
                    while(p1.achat!=1||p1.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facZn à ce que après la propriété ne soit plus achetable
                        if (j1==tableau[12] && p1.achat==1);
                            p1.carte[12]=cX.nom;
                            p1.argent=p1.argent - cX.prixC;
                
                if(j2==tableau[12])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p2.achat);}
                    while(p2.achat!=1||p2.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facZn à ce que après la propriété ne soit plus achetable
                        if (j2==tableau[12] && p2.achat==1);
                            p2.carte[12]=cX.nom;
                            p2.argent=p2.argent - cX.prixC;
                        

                if(j3==tableau[12])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p3.achat);}
                    while(p3.achat!=1||p3.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facZn à ce que après la propriété ne soit plus achetable
                        if (j3==tableau[12] && p3.achat==1);
                            p3.carte[12]=cX.nom;
                            p3.argent=p3.argent - cX.prixC;
                        
                if(j4==tableau[12])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p4.achat);}
                    while(p4.achat!=1||p4.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facZn à ce que après la propriété ne soit plus achetable
                        if (j4==tableau[12] && p4.achat==1);
                            p4.carte[12]=cX.nom;
                            p4.argent=p4.argent - cX.prixC;



    if (j1 == tableau[13]); // C ADIDAS
        printf("Case: %s",cN.nom);
        printf("Prix de la carte: %d",cN.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cN.loyer);
        printf("Loyer de tous le groupe: %d",cN.loyerGr);
        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cN.nom == p1.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cN.nom == p2.carte[k]||cN.nom==p3.carte[k]||cN.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cN.loyer;
    
    if (j2 == tableau[13]); // Action, on le fait pour chacun des joueurs pour la cNareté du code 
        printf("Case: %s",cN.nom);
        printf("Prix de la carte: %d",cN.prixC);
        printf("Loyer: %d",cN.loyer);
        printf("Loyer de tous le groupe: %d",cN.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cN.nom == p2.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cN.nom == p1.carte[k]||cN.nom==p3.carte[k]||cN.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cN.loyer;
        
    if (j3 == tableau[13]); // Wish
        printf("Case: %s",cN.nom);
        printf("Prix de la carte: %d",cN.prixC);
        printf("Loyer: %d",cN.loyer);
        printf("Loyer de tous le groupe: %d",cN.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cN.nom == p3.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cN.nom == p2.carte[k]||cN.nom==p1.carte[k]||cN.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cN.loyer;    
        
                
    if (j4 == tableau[13]); 
        printf("Case: %s",cN.nom);
        printf("Prix de la carte: %d",cN.prixC);
        printf("Loyer: %d",cN.loyer);
        printf("Loyer de tous le groupe: %d",cN.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cN.nom == p4.carte[k])
                printf("Cette carte vous appartient\n ");

         // regarde si la carte appartient deja à quelqu"un
        for (int k=0;k>30;k++)
            if (cN.nom == p2.carte[k]||cN.nom==p3.carte[k]||cN.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cN.loyer;

        for (int k=0;k>30;k++)
            if (!(cN.nom==p1.carte[k] && cN.nom==p2.carte[k]&& cN.nom==p3.carte[k]&& cN.nom==p4.carte[k])) // Si la carte appartient à personne
                if(j1==tableau[13])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p1.achat);}
                    while(p1.achat!=1||p1.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j1==tableau[13] && p1.achat==1);
                            p1.carte[13]=cN.nom;
                            p1.argent=p1.argent - cN.prixC;
                
                if(j2==tableau[13])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p2.achat);}
                    while(p2.achat!=1||p2.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j2==tableau[13] && p2.achat==1);
                            p2.carte[13]=cN.nom;
                            p2.argent=p2.argent - cN.prixC;
                        

                if(j3==tableau[13])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p3.achat);}
                    while(p3.achat!=1||p3.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j3==tableau[13] && p3.achat==1);
                            p3.carte[13]=cN.nom;
                            p3.argent=p3.argent - cN.prixC;
                        
                if(j4==tableau[13])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p4.achat);}
                    while(p4.achat!=1||p4.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j4==tableau[13] && p4.achat==1);
                            p4.carte[13]=cN.nom;
                            p4.argent=p4.argent - cN.prixC;;




    
    if (j1 == tableau[14]);
        printf("Case: %s",cO.nom);
        printf("Prix de la carte: %d",cO.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cO.loyer);
        printf("Loyer de tous le groupe: %d",cO.loyerGr);
        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cO.nom == p1.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cO.nom == p2.carte[k]||cO.nom==p3.carte[k]||cO.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cO.loyer;
    
    if (j2 == tableau[14]); // Action, on le fait pour chacun des joueurs pour la cOareté du code 
        printf("Case: %s",cO.nom);
        printf("Prix de la carte: %d",cO.prixC);
        printf("Loyer: %d",cO.loyer);
        printf("Loyer de tous le groupe: %d",cO.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cO.nom == p2.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cO.nom == p1.carte[k]||cO.nom==p3.carte[k]||cO.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cO.loyer;
        
    if (j3 == tableau[14]); // Wish
        printf("Case: %s",cO.nom);
        printf("Prix de la carte: %d",cO.prixC);
        printf("Loyer: %d",cO.loyer);
        printf("Loyer de tous le groupe: %d",cO.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cO.nom == p3.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cO.nom == p2.carte[k]||cO.nom==p1.carte[k]||cO.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cO.loyer;    
        
                
    if (j4 == tableau[14]); 
        printf("Case: %s",cO.nom);
        printf("Prix de la carte: %d",cO.prixC);
        printf("Loyer: %d",cO.loyer);
        printf("Loyer de tous le groupe: %d",cO.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cO.nom == p4.carte[k])
                printf("Cette carte vous appartient\n ");

         // regarde si la carte appartient deja à quelqu"un
        for (int k=0;k>30;k++)
            if (cO.nom == p2.carte[k]||cO.nom==p3.carte[k]||cO.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cO.loyer;

        for (int k=0;k>30;k++)
            if (!(cO.nom==p1.carte[k] && cO.nom==p2.carte[k]&& cO.nom==p3.carte[k]&& cO.nom==p4.carte[k])) // Si la carte appartient à personne
                if(j1==tableau[14])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p1.achat);}
                    while(p1.achat!=1||p1.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j1==tableau[14] && p1.achat==1);
                            p1.carte[14]=cO.nom;
                            p1.argent=p1.argent - cO.prixC;
                
                if(j2==tableau[14])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p2.achat);}
                    while(p2.achat!=1||p2.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j2==tableau[14] && p2.achat==1);
                            p2.carte[14]=cO.nom;
                            p2.argent=p2.argent - cO.prixC;
                        

                if(j3==tableau[14])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p3.achat);}
                    while(p3.achat!=1||p3.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j3==tableau[14] && p3.achat==1);
                            p3.carte[14]=cO.nom;
                            p3.argent=p3.argent - cO.prixC;
                        
                if(j4==tableau[14])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p4.achat);}
                    while(p4.achat!=1||p4.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facon à ce que après la propriété ne soit plus achetable
                        if (j4==tableau[14] && p4.achat==1);
                            p4.carte[14]=cO.nom;
                            p4.argent=p4.argent - cO.prixC;




    if (j1 == tableau[15] || j2 == tableau[15] || j3 == tableau[15] || j4 == tableau[15]) ; // Stationnement
        printf("Case: %s",cF.nom);
        printf("Prix de la carte: %d",cF.prixC);
        printf("Loyer: %d",cF.loyer);
        printf("Loyer de tous le groupe: %d",cF.loyerGr);
        printf("Tu stationne gratuitement, la chance!");

    
    if (j1 == tableau[16]);
        printf("Case: %s",cQ.nom);
        printf("Prix de la carte: %d",cQ.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cQ.loyer);
        printf("Loyer de tous le groupe: %d",cQ.loyerGr);
        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cQ.nom == p1.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cQ.nom == p2.carte[k]||cQ.nom==p3.carte[k]||cQ.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cQ.loyer;
    
    if (j2 == tableau[16]); // Action, on le fait pour chacun des joueurs pour la cQareté du cQde 
        printf("Case: %s",cQ.nom);
        printf("Prix de la carte: %d",cQ.prixC);
        printf("Loyer: %d",cQ.loyer);
        printf("Loyer de tous le groupe: %d",cQ.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cQ.nom == p2.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cQ.nom == p1.carte[k]||cQ.nom==p3.carte[k]||cQ.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cQ.loyer;
        
    if (j3 == tableau[16]); // Wish
        printf("Case: %s",cQ.nom);
        printf("Prix de la carte: %d",cQ.prixC);
        printf("Loyer: %d",cQ.loyer);
        printf("Loyer de tous le groupe: %d",cQ.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cQ.nom == p3.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cQ.nom == p2.carte[k]||cQ.nom==p1.carte[k]||cQ.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cQ.loyer;    
        
                
    if (j4 == tableau[16]); 
        printf("Case: %s",cQ.nom);
        printf("Prix de la carte: %d",cQ.prixC);
        printf("Loyer: %d",cQ.loyer);
        printf("Loyer de tous le groupe: %d",cQ.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cQ.nom == p4.carte[k])
                printf("Cette carte vous appartient\n ");

         // regarde si la carte appartient deja à quelqu"un
        for (int k=0;k>30;k++)
            if (cQ.nom == p2.carte[k]||cQ.nom==p3.carte[k]||cQ.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cQ.loyer;

        for (int k=0;k>30;k++)
            if (!(cQ.nom==p1.carte[k] && cQ.nom==p2.carte[k]&& cQ.nom==p3.carte[k]&& cQ.nom==p4.carte[k])) // Si la carte appartient à personne
                if(j1==tableau[16])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p1.achat);}
                    while(p1.achat!=1||p1.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facQn à ce que après la propriété ne soit plus achetable
                        if (j1==tableau[16] && p1.achat==1);
                            p1.carte[16]=cQ.nom;
                            p1.argent=p1.argent - cQ.prixC;
                
                if(j2==tableau[16])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p2.achat);}
                    while(p2.achat!=1||p2.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facQn à ce que après la propriété ne soit plus achetable
                        if (j2==tableau[16] && p2.achat==1);
                            p2.carte[16]=cQ.nom;
                            p2.argent=p2.argent - cQ.prixC;
                        

                if(j3==tableau[16])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p3.achat);}
                    while(p3.achat!=1||p3.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facQn à ce que après la propriété ne soit plus achetable
                        if (j3==tableau[16] && p3.achat==1);
                            p3.carte[16]=cQ.nom;
                            p3.argent=p3.argent - cQ.prixC;
                        
                if(j4==tableau[16])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p4.achat);}
                    while(p4.achat!=1||p4.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facQn à ce que après la propriété ne soit plus achetable
                        if (j4==tableau[16] && p4.achat==1);
                            p4.carte[16]=cQ.nom;
                            p4.argent=p4.argent - cQ.prixC;;





    if (j1 == tableau[17] || j2 == tableau[17] || j3 == tableau[17] || j4 == tableau[17]) ; // Commu
        printf("Case: %s",cO.nom);
        printf("Prix de la carte: %d",cO.prixC);
        printf("Loyer: %d",cO.loyer);
        printf("Loyer de tous le groupe: %d",cO.loyerGr);


    if (j1 == tableau[18]);
        printf("Case: %s",cP.nom);
        printf("Prix de la carte: %d",cP.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cP.loyer);
        printf("Loyer de tous le groupe: %d",cP.loyerGr);
        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cP.nom == p1.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cP.nom == p2.carte[k]||cP.nom==p3.carte[k]||cP.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cP.loyer;
    
    if (j2 == tableau[18]); // Action, on le fait pour chacun des joueurs pour la cPareté du cPde 
        printf("Case: %s",cP.nom);
        printf("Prix de la carte: %d",cP.prixC);
        printf("Loyer: %d",cP.loyer);
        printf("Loyer de tous le groupe: %d",cP.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cP.nom == p2.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cP.nom == p1.carte[k]||cP.nom==p3.carte[k]||cP.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cP.loyer;
        
    if (j3 == tableau[18]); // Wish
        printf("Case: %s",cP.nom);
        printf("Prix de la carte: %d",cP.prixC);
        printf("Loyer: %d",cP.loyer);
        printf("Loyer de tous le groupe: %d",cP.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cP.nom == p3.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cP.nom == p2.carte[k]||cP.nom==p1.carte[k]||cP.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cP.loyer;    
        
                
    if (j4 == tableau[18]); 
        printf("Case: %s",cP.nom);
        printf("Prix de la carte: %d",cP.prixC);
        printf("Loyer: %d",cP.loyer);
        printf("Loyer de tous le groupe: %d",cP.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cP.nom == p4.carte[k])
                printf("Cette carte vous appartient\n ");

         // regarde si la carte appartient deja à quelqu"un
        for (int k=0;k>30;k++)
            if (cP.nom == p2.carte[k]||cP.nom==p3.carte[k]||cP.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cP.loyer;

        for (int k=0;k>30;k++)
            if (!(cP.nom==p1.carte[k] && cP.nom==p2.carte[k]&& cP.nom==p3.carte[k]&& cP.nom==p4.carte[k])) // Si la carte appartient à personne
                if(j1==tableau[18])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p1.achat);}
                    while(p1.achat!=1||p1.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facPn à ce que après la propriété ne soit plus achetable
                        if (j1==tableau[18] && p1.achat==1);
                            p1.carte[18]=cP.nom;
                            p1.argent=p1.argent - cP.prixC;
                
                if(j2==tableau[18])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p2.achat);}
                    while(p2.achat!=1||p2.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facPn à ce que après la propriété ne soit plus achetable
                        if (j2==tableau[18] && p2.achat==1);
                            p2.carte[18]=cP.nom;
                            p2.argent=p2.argent - cP.prixC;
                        

                if(j3==tableau[18])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p3.achat);}
                    while(p3.achat!=1||p3.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facPn à ce que après la propriété ne soit plus achetable
                        if (j3==tableau[18] && p3.achat==1);
                            p3.carte[18]=cP.nom;
                            p3.argent=p3.argent - cP.prixC;
                        
                if(j4==tableau[18])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p4.achat);}
                    while(p4.achat!=1||p4.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facPn à ce que après la propriété ne soit plus achetable
                        if (j4==tableau[18] && p4.achat==1);
                            p4.carte[18]=cP.nom;
                            p4.argent=p4.argent - cP.prixC;;




    if (j1 == tableau[19]);
        printf("Case: %s",cR.nom);
        printf("Prix de la carte: %d",cR.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cR.loyer);
        printf("Loyer de tous le groupe: %d",cR.loyerGr);
        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cR.nom == p1.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cR.nom == p2.carte[k]||cR.nom==p3.carte[k]||cR.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cR.loyer;
    
    if (j2 == tableau[19]); // Action, on le fait pour chacun des joueurs pour la cRareté du cRde 
        printf("Case: %s",cR.nom);
        printf("Prix de la carte: %d",cR.prixC);
        printf("Loyer: %d",cR.loyer);
        printf("Loyer de tous le groupe: %d",cR.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cR.nom == p2.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cR.nom == p1.carte[k]||cR.nom==p3.carte[k]||cR.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cR.loyer;
        
    if (j3 == tableau[19]); // Wish
        printf("Case: %s",cR.nom);
        printf("Prix de la carte: %d",cR.prixC);
        printf("Loyer: %d",cR.loyer);
        printf("Loyer de tous le groupe: %d",cR.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cR.nom == p3.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cR.nom == p2.carte[k]||cR.nom==p1.carte[k]||cR.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cR.loyer;    
        
                
    if (j4 == tableau[19]); 
        printf("Case: %s",cR.nom);
        printf("Prix de la carte: %d",cR.prixC);
        printf("Loyer: %d",cR.loyer);
        printf("Loyer de tous le groupe: %d",cR.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cR.nom == p4.carte[k])
                printf("Cette carte vous appartient\n ");

         // regarde si la carte appartient deja à quelqu"un
        for (int k=0;k>30;k++)
            if (cR.nom == p2.carte[k]||cR.nom==p3.carte[k]||cR.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cR.loyer;

        for (int k=0;k>30;k++)
            if (!(cR.nom==p1.carte[k] && cR.nom==p2.carte[k]&& cR.nom==p3.carte[k]&& cR.nom==p4.carte[k])) // Si la carte appartient à personne
                if(j1==tableau[19])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p1.achat);}
                    while(p1.achat!=1||p1.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facRn à ce que après la propriété ne soit plus achetable
                        if (j1==tableau[19] && p1.achat==1);
                            p1.carte[19]=cR.nom;
                            p1.argent=p1.argent - cR.prixC;
                
                if(j2==tableau[19])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p2.achat);}
                    while(p2.achat!=1||p2.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facRn à ce que après la propriété ne soit plus achetable
                        if (j2==tableau[19] && p2.achat==1);
                            p2.carte[19]=cR.nom;
                            p2.argent=p2.argent - cR.prixC;
                        

                if(j3==tableau[19])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p3.achat);}
                    while(p3.achat!=1||p3.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facRn à ce que après la propriété ne soit plus achetable
                        if (j3==tableau[19] && p3.achat==1);
                            p3.carte[19]=cR.nom;
                            p3.argent=p3.argent - cR.prixC;
                        
                if(j4==tableau[19])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p4.achat);}
                    while(p4.achat!=1||p4.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facRn à ce que après la propriété ne soit plus achetable
                        if (j4==tableau[19] && p4.achat==1);
                            p4.carte[19]=cR.nom;
                            p4.argent=p4.argent - cR.prixC;;



    if (j1 == tableau[20]); // EDF
        printf("Case: %s",cZZ.nom);
        printf("Prix de la carte: %d",cZZ.prixC); // On écZit chacZn des éléments de la carte
        printf("Loyer: %d",cZZ.loyer);
        printf("Loyer de tous le groupe: %d",cZZ.loyerGr);
        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cZZ.nom == p1.carte[k])
                printf("Cette carte vous appartient, bienvenue chez vous\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cZZ.nom == p2.carte[k]||cZZ.nom==p3.carte[k]||cZZ.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cZZ.loyer;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cZ.nom == p2.carte[k] && cZZ.nom==p2.carte[k]||cZ.nom==p3.carte[k] && cZZ.nom==p3.carte[k]||cZ.nom==p4.carte[k] && cZZ.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cZZ.loyerGr;
    
    if (j2 == tableau[20]); // AcZion, on le fait pour chacZn des joueurs pour la cZareté du cZde 
        printf("Case: %s",cZZ.nom);
        printf("Prix de la carte: %d",cZZ.prixC);
        printf("Loyer: %d",cZZ.loyer);
        printf("Loyer de tous le groupe: %d",cZZ.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cZZ.nom == p2.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cZZ.nom == p1.carte[k]||cZZ.nom==p3.carte[k]||cZZ.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cZZ.loyer;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cZ.nom == p2.carte[k] && cZZ.nom==p2.carte[k]||cZ.nom==p3.carte[k] && cZZ.nom==p3.carte[k]||cZ.nom==p4.carte[k] && cZZ.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cZZ.loyerGr;

    if (j3 == tableau[20]); // Wish
        printf("Case: %s",cZZ.nom);
        printf("Prix de la carte: %d",cZZ.prixC);
        printf("Loyer: %d",cZZ.loyer);
        printf("Loyer de tous le groupe: %d",cZZ.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cZZ.nom == p3.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cZZ.nom == p2.carte[k]||cZZ.nom==p1.carte[k]||cZZ.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cZZ.loyer;    
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cZ.nom == p2.carte[k] && cZZ.nom==p2.carte[k]||cZ.nom==p3.carte[k] && cZZ.nom==p3.carte[k]||cZ.nom==p4.carte[k] && cZZ.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cZZ.loyerGr;
                
    if (j4 == tableau[20]); 
        printf("Case: %s",cZZ.nom);
        printf("Prix de la carte: %d",cZZ.prixC);
        printf("Loyer: %d",cZZ.loyer);
        printf("Loyer de tous le groupe: %d",cZZ.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cZZ.nom == p4.carte[k])
                printf("Cette carte vous appartient\n ");

         // regarde si la carte appartient deja à quelqu"un
        for (int k=0;k>30;k++)
            if (cZZ.nom == p2.carte[k]||cZZ.nom==p3.carte[k]||cZZ.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cZZ.loyer;

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cZ.nom == p2.carte[k] && cZZ.nom==p2.carte[k]||cZ.nom==p3.carte[k] && cZZ.nom==p3.carte[k]||cZ.nom==p4.carte[k] && cZZ.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cZZ.loyerGr;

        for (int k=0;k>30;k++)
            if (!(cZZ.nom==p1.carte[k] && cZZ.nom==p2.carte[k]&& cZZ.nom==p3.carte[k]&& cZZ.nom==p4.carte[k])) // Si la carte appartient à personne
                if(j1==tableau[20])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p1.achat);}
                    while(p1.achat!=1||p1.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facZn à ce que après la propriété ne soit plus achetable
                        if (j1==tableau[20] && p1.achat==1);
                            p1.carte[20]=cZZ.nom;
                            p1.argent=p1.argent - cZZ.prixC;
                
                if(j2==tableau[20])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p2.achat);}
                    while(p2.achat!=1||p2.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facZn à ce que après la propriété ne soit plus achetable
                        if (j2==tableau[20] && p2.achat==1);
                            p2.carte[20]=cZZ.nom;
                            p2.argent=p2.argent - cZZ.prixC;
                        

                if(j3==tableau[20])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p3.achat);}
                    while(p3.achat!=1||p3.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facZn à ce que après la propriété ne soit plus achetable
                        if (j3==tableau[20] && p3.achat==1);
                            p3.carte[20]=cZZ.nom;
                            p3.argent=p3.argent - cZZ.prixC;
                        
                if(j4==tableau[20])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p4.achat);}
                    while(p4.achat!=1||p4.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facZn à ce que après la propriété ne soit plus achetable
                        if (j4==tableau[20] && p4.achat==1);
                            p4.carte[20]=cZZ.nom;
                            p4.argent=p4.argent - cZZ.prixC;;

    if (j1 == tableau[21]); // RATP
        printf("Case: %s",cY.nom);
        printf("Prix de la carte: %d",cY.prixC); // On écZit chacZn des éléments de la carte
        printf("Loyer: %d",cY.loyer);
        printf("Loyer de tous le groupe: %d",cY.loyerGr);
        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cY.nom == p1.carte[k])
                printf("Cette carte vous appartient, bienvenue chez vous\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] && cW.nom==p2.carte[k] && cY.nom==p2.carte[k] ||cX.nom==p3.carte[k] && cW.nom==p3.carte[k] && cY.nom==p3.carte[k] ||cX.nom==p4.carte[k] && cW.nom==p4.carte[k] && cY.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cY.m3;

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] && cY.nom==p2.carte[k]||cX.nom==p3.carte[k] && cY.nom==p3.carte[k]||cX.nom==p4.carte[k] && cY.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cY.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cY.nom == p2.carte[k] && cW.nom==p2.carte[k]||cY.nom==p3.carte[k] && cW.nom==p3.carte[k]||cY.nom==p4.carte[k] && cW.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cY.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cY.nom == p2.carte[k] ||cY.nom==p3.carte[k] ||cY.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cY.loyer;
        
    if (j2 == tableau[21]); // AcZion, on le fait pour chacZn des joueurs pour la cZareté du cZde 
        printf("Case: %s",cY.nom);
        printf("Prix de la carte: %d",cY.prixC);
        printf("Loyer: %d",cY.loyer);
        printf("Loyer de tous le groupe: %d",cY.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cY.nom == p2.carte[k])
                printf("Cette carte vous appartient, bienvenue chez vous\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p1.carte[k] && cW.nom==p1.carte[k] && cY.nom==p1.carte[k] ||cX.nom==p3.carte[k] && cW.nom==p3.carte[k] && cY.nom==p3.carte[k] ||cX.nom==p4.carte[k] && cW.nom==p4.carte[k] && cY.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cY.m3;

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p1.carte[k] && cY.nom==p1.carte[k]||cX.nom==p3.carte[k] && cY.nom==p3.carte[k]||cX.nom==p4.carte[k] && cY.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cY.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cY.nom == p1.carte[k] && cW.nom==p1.carte[k]||cY.nom==p3.carte[k] && cW.nom==p3.carte[k]||cY.nom==p4.carte[k] && cW.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cY.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cY.nom == p1.carte[k] ||cY.nom==p3.carte[k] ||cY.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cY.loyer;
        

    if (j3 == tableau[21]); // Wish
        printf("Case: %s",cY.nom);
        printf("Prix de la carte: %d",cY.prixC);
        printf("Loyer: %d",cY.loyer);
        printf("Loyer de tous le groupe: %d",cY.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cY.nom == p3.carte[k])
                printf("Cette carte vous appartient, bienvenue chez vous\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] && cW.nom==p2.carte[k] && cY.nom==p2.carte[k] ||cX.nom==p1.carte[k] && cW.nom==p1.carte[k] && cY.nom==p1.carte[k] ||cX.nom==p4.carte[k] && cW.nom==p4.carte[k] && cY.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cY.m3;

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] && cY.nom==p2.carte[k]||cX.nom==p1.carte[k] && cY.nom==p1.carte[k]||cX.nom==p4.carte[k] && cY.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cY.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cY.nom == p2.carte[k] && cW.nom==p2.carte[k]||cY.nom==p1.carte[k] && cW.nom==p1.carte[k]||cY.nom==p4.carte[k] && cW.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cY.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cY.nom == p2.carte[k] ||cY.nom==p1.carte[k] ||cY.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cY.loyer;
        
                
    if (j4 == tableau[21]); 
        printf("Case: %s",cY.nom);
        printf("Prix de la carte: %d",cY.prixC);
        printf("Loyer: %d",cY.loyer);
        printf("Loyer de tous le groupe: %d",cY.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cY.nom == p4.carte[k])
                printf("Cette carte vous appartient, bienvenue chez vous\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] && cW.nom==p2.carte[k] && cY.nom==p2.carte[k] ||cX.nom==p3.carte[k] && cW.nom==p3.carte[k] && cY.nom==p3.carte[k] ||cX.nom==p1.carte[k] && cW.nom==p1.carte[k] && cY.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cY.m3;

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] && cY.nom==p2.carte[k]||cX.nom==p3.carte[k] && cY.nom==p3.carte[k]||cX.nom==p1.carte[k] && cY.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cY.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cY.nom == p2.carte[k] && cW.nom==p2.carte[k]||cY.nom==p3.carte[k] && cW.nom==p3.carte[k]||cY.nom==p1.carte[k] && cW.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cY.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cY.nom == p2.carte[k] ||cY.nom==p3.carte[k] ||cY.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cY.loyer;
        
        for (int k=0;k>30;k++)
            if (!(cY.nom==p1.carte[k] && cY.nom==p2.carte[k]&& cY.nom==p3.carte[k]&& cY.nom==p4.carte[k])) // Si la carte appartient à personne
                if(j1==tableau[21])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p1.achat);}
                    while(p1.achat!=1||p1.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facZn à ce que après la propriété ne soit plus achetable
                        if (j1==tableau[21] && p1.achat==1);
                            p1.carte[21]=cY.nom;
                            p1.argent=p1.argent - cY.prixC;
                
                if(j2==tableau[21])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p2.achat);}
                    while(p2.achat!=1||p2.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facZn à ce que après la propriété ne soit plus achetable
                        if (j2==tableau[21] && p2.achat==1);
                            p2.carte[21]=cY.nom;
                            p2.argent=p2.argent - cY.prixC;
                        

                if(j3==tableau[21])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p3.achat);}
                    while(p3.achat!=1||p3.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facZn à ce que après la propriété ne soit plus achetable
                        if (j3==tableau[21] && p3.achat==1);
                            p3.carte[21]=cY.nom;
                            p3.argent=p3.argent - cY.prixC;
                        
                if(j4==tableau[21])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p4.achat);}
                    while(p4.achat!=1||p4.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facZn à ce que après la propriété ne soit plus achetable
                        if (j4==tableau[21] && p4.achat==1);
                            p4.carte[21]=cY.nom;
                            p4.argent=p4.argent - cY.prixC;
    
    if (j1 == tableau[22]);
        printf("Case: %s",cS.nom);
        printf("Prix de la carte: %d",cS.prixC); // On écSit chacun des éléments de la carte
        printf("Loyer: %d",cS.loyer);
        printf("Loyer de tous le groupe: %d",cS.loyerGr);
        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cS.nom == p1.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cS.nom == p2.carte[k]||cS.nom==p3.carte[k]||cS.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cS.loyer;
    
    if (j2 == tableau[22]); // Action, on le fait pour chacun des joueurs pour la cSareté du cSde 
        printf("Case: %s",cS.nom);
        printf("Prix de la carte: %d",cS.prixC);
        printf("Loyer: %d",cS.loyer);
        printf("Loyer de tous le groupe: %d",cS.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cS.nom == p2.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cS.nom == p1.carte[k]||cS.nom==p3.carte[k]||cS.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cS.loyer;
        
    if (j3 == tableau[22]); // Wish
        printf("Case: %s",cS.nom);
        printf("Prix de la carte: %d",cS.prixC);
        printf("Loyer: %d",cS.loyer);
        printf("Loyer de tous le groupe: %d",cS.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cS.nom == p3.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cS.nom == p2.carte[k]||cS.nom==p1.carte[k]||cS.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cS.loyer;    
        
                
    if (j4 == tableau[22]); 
        printf("Case: %s",cS.nom);
        printf("Prix de la carte: %d",cS.prixC);
        printf("Loyer: %d",cS.loyer);
        printf("Loyer de tous le groupe: %d",cS.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cS.nom == p4.carte[k])
                printf("Cette carte vous appartient\n ");

         // regarde si la carte appartient deja à quelqu"un
        for (int k=0;k>30;k++)
            if (cS.nom == p2.carte[k]||cS.nom==p3.carte[k]||cS.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cS.loyer;

        for (int k=0;k>30;k++)
            if (!(cS.nom==p1.carte[k] && cS.nom==p2.carte[k]&& cS.nom==p3.carte[k]&& cS.nom==p4.carte[k])) // Si la carte appartient à personne
                if(j1==tableau[22])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p1.achat);}
                    while(p1.achat!=1||p1.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facSn à ce que après la propriété ne soit plus achetable
                        if (j1==tableau[22] && p1.achat==1);
                            p1.carte[22]=cS.nom;
                            p1.argent=p1.argent - cS.prixC;
                
                if(j2==tableau[22])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p2.achat);}
                    while(p2.achat!=1||p2.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facSn à ce que après la propriété ne soit plus achetable
                        if (j2==tableau[22] && p2.achat==1);
                            p2.carte[22]=cS.nom;
                            p2.argent=p2.argent - cS.prixC;
                        

                if(j3==tableau[22])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p3.achat);}
                    while(p3.achat!=1||p3.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facSn à ce que après la propriété ne soit plus achetable
                        if (j3==tableau[22] && p3.achat==1);
                            p3.carte[22]=cS.nom;
                            p3.argent=p3.argent - cS.prixC;
                        
                if(j4==tableau[22])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p4.achat);}
                    while(p4.achat!=1||p4.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facSn à ce que après la propriété ne soit plus achetable
                        if (j4==tableau[22] && p4.achat==1);
                            p4.carte[22]=cS.nom;
                            p4.argent=p4.argent - cS.prixC;;

    
    if (j1 == tableau[23]) //TAXE
        printf("Case Impot\n");
        printf("Payez le montant suivant: 100");
        p1.argent=p1.argent-100;

    if (j2 == tableau[23]) //TAXE
        printf("Case Impot\n");
        printf("Payez le montant suivant: 100");
        p2.argent=p2.argent-100;

    if (j3 == tableau[23]) //TAXE
        printf("Case Impot\n");
        printf("Payez le montant suivant: 100");
        p3.argent=p3.argent-100;

    if (j4 == tableau[23])//TAXE
        printf("Case Impot\n");
        printf("Payez le montant suivant: 100");
        p4.argent=p4.argent-100;


    if (j1 == tableau[24]);
        printf("Case: %s",cT.nom);
        printf("Prix de la carte: %d",cT.prixC); // On écTit chacun des éléments de la carte
        printf("Loyer: %d",cT.loyer);
        printf("Loyer de tous le groupe: %d",cT.loyerGr);
        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cT.nom == p1.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cT.nom == p2.carte[k]||cT.nom==p3.carte[k]||cT.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cT.loyer;
    
    if (j2 == tableau[24]); // Action, on le fait pour chacun des joueurs pour la cTareté du cTde 
        printf("Case: %s",cT.nom);
        printf("Prix de la carte: %d",cT.prixC);
        printf("Loyer: %d",cT.loyer);
        printf("Loyer de tous le groupe: %d",cT.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cT.nom == p2.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cT.nom == p1.carte[k]||cT.nom==p3.carte[k]||cT.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cT.loyer;
        
    if (j3 == tableau[24]); // Wish
        printf("Case: %s",cT.nom);
        printf("Prix de la carte: %d",cT.prixC);
        printf("Loyer: %d",cT.loyer);
        printf("Loyer de tous le groupe: %d",cT.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cT.nom == p3.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cT.nom == p2.carte[k]||cT.nom==p1.carte[k]||cT.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cT.loyer;    
        
                
    if (j4 == tableau[24]); 
        printf("Case: %s",cT.nom);
        printf("Prix de la carte: %d",cT.prixC);
        printf("Loyer: %d",cT.loyer);
        printf("Loyer de tous le groupe: %d",cT.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cT.nom == p4.carte[k])
                printf("Cette carte vous appartient\n ");

         // regarde si la carte appartient deja à quelqu"un
        for (int k=0;k>30;k++)
            if (cT.nom == p2.carte[k]||cT.nom==p3.carte[k]||cT.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cT.loyer;

        for (int k=0;k>30;k++)
            if (!(cT.nom==p1.carte[k] && cT.nom==p2.carte[k]&& cT.nom==p3.carte[k]&& cT.nom==p4.carte[k])) // Si la carte appartient à personne
                if(j1==tableau[24])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p1.achat);}
                    while(p1.achat!=1||p1.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facTn à ce que après la propriété ne soit plus achetable
                        if (j1==tableau[24] && p1.achat==1);
                            p1.carte[24]=cT.nom;
                            p1.argent=p1.argent - cT.prixC;
                
                if(j2==tableau[24])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p2.achat);}
                    while(p2.achat!=1||p2.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facTn à ce que après la propriété ne soit plus achetable
                        if (j2==tableau[24] && p2.achat==1);
                            p2.carte[24]=cT.nom;
                            p2.argent=p2.argent - cT.prixC;
                        

                if(j3==tableau[24])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p3.achat);}
                    while(p3.achat!=1||p3.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facTn à ce que après la propriété ne soit plus achetable
                        if (j3==tableau[24] && p3.achat==1);
                            p3.carte[24]=cT.nom;
                            p3.argent=p3.argent - cT.prixC;
                        
                if(j4==tableau[24])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p4.achat);}
                    while(p4.achat!=1||p4.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facTn à ce que après la propriété ne soit plus achetable
                        if (j4==tableau[24] && p4.achat==1);
                            p4.carte[24]=cT.nom;
                            p4.argent=p4.argent - cT.prixC;




    if (j1 == tableau[25] || j2 == tableau[25] || j3 == tableau[25] || j4 == tableau[25]) ;// PRISON
        printf("Case: %s",cO.nom);
        printf("Prix de la carte: %d",cO.prixC);
        printf("Loyer: %d",cO.loyer);
        printf("Loyer de tous le groupe: %d",cO.loyerGr);

        printf("Vous êtes en prison pendant 3 tours à moins que vous fassiez un double au cours de ces tours!");

    if (j1 == tableau[26] || j2 == tableau[26] || j3 == tableau[26] || j4 == tableau[26]) ; // ENCHERE
        printf("Case: %s",cO.nom);
        printf("Prix de la carte: %d",cO.prixC);
        printf("Loyer: %d",cO.loyer);
        printf("Loyer de tous le groupe: %d",cO.loyerGr);
        

    if (j1 == tableau[27]);
        printf("Case: %s",cU.nom);
        printf("Prix de la carte: %d",cU.prixC); // On écUit chacun des éléments de la carte
        printf("Loyer: %d",cU.loyer);
        printf("Loyer de tous le groupe: %d",cU.loyerGr);
        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cU.nom == p1.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cU.nom == p2.carte[k]||cU.nom==p3.carte[k]||cU.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cU.loyer;
    
    if (j2 == tableau[27]); // AcUion, on le fait pour chacun des joueurs pour la cUareté du cUde 
        printf("Case: %s",cU.nom);
        printf("Prix de la carte: %d",cU.prixC);
        printf("Loyer: %d",cU.loyer);
        printf("Loyer de tous le groupe: %d",cU.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cU.nom == p2.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cU.nom == p1.carte[k]||cU.nom==p3.carte[k]||cU.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cU.loyer;
        
    if (j3 == tableau[27]); // Wish
        printf("Case: %s",cU.nom);
        printf("Prix de la carte: %d",cU.prixC);
        printf("Loyer: %d",cU.loyer);
        printf("Loyer de tous le groupe: %d",cU.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cU.nom == p3.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cU.nom == p2.carte[k]||cU.nom==p1.carte[k]||cU.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cU.loyer;    
        
                
    if (j4 == tableau[27]); 
        printf("Case: %s",cU.nom);
        printf("Prix de la carte: %d",cU.prixC);
        printf("Loyer: %d",cU.loyer);
        printf("Loyer de tous le groupe: %d",cU.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cU.nom == p4.carte[k])
                printf("Cette carte vous appartient\n ");

         // regarde si la carte appartient deja à quelqu"un
        for (int k=0;k>30;k++)
            if (cU.nom == p2.carte[k]||cU.nom==p3.carte[k]||cU.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cU.loyer;

        for (int k=0;k>30;k++)
            if (!(cU.nom==p1.carte[k] && cU.nom==p2.carte[k]&& cU.nom==p3.carte[k]&& cU.nom==p4.carte[k])) // Si la carte appartient à personne
                if(j1==tableau[27])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p1.achat);}
                    while(p1.achat!=1||p1.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facUn à ce que après la propriété ne soit plus achetable
                        if (j1==tableau[27] && p1.achat==1);
                            p1.carte[27]=cU.nom;
                            p1.argent=p1.argent - cU.prixC;
                
                if(j2==tableau[27])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p2.achat);}
                    while(p2.achat!=1||p2.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facUn à ce que après la propriété ne soit plus achetable
                        if (j2==tableau[27] && p2.achat==1);
                            p2.carte[27]=cU.nom;
                            p2.argent=p2.argent - cU.prixC;
                        

                if(j3==tableau[27])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p3.achat);}
                    while(p3.achat!=1||p3.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facUn à ce que après la propriété ne soit plus achetable
                        if (j3==tableau[27] && p3.achat==1);
                            p3.carte[27]=cU.nom;
                            p3.argent=p3.argent - cU.prixC;
                        
                if(j4==tableau[27])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p4.achat);}
                    while(p4.achat!=1||p4.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facUn à ce que après la propriété ne soit plus achetable
                        if (j4==tableau[27] && p4.achat==1);
                            p4.carte[27]=cU.nom;
                            p4.argent=p4.argent - cU.prixC;




    if (j1 == tableau[28]); // SNCF
        printf("Case: %s",cW.nom);
        printf("Prix de la carte: %d",cW.prixC); // On écZit chacZn des éléments de la carte
        printf("Loyer: %d",cW.loyer);
        printf("Loyer de tous le groupe: %d",cW.loyerGr);
        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cW.nom == p1.carte[k])
                printf("Cette carte vous appartient, bienvenue chez vous\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] && cW.nom==p2.carte[k] && cY.nom==p2.carte[k] ||cX.nom==p3.carte[k] && cW.nom==p3.carte[k] && cY.nom==p3.carte[k] ||cX.nom==p4.carte[k] && cW.nom==p4.carte[k] && cY.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cW.m3;

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cW.nom == p2.carte[k] && cY.nom==p2.carte[k]||cW.nom==p3.carte[k] && cY.nom==p3.carte[k]||cW.nom==p4.carte[k] && cY.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cW.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] && cW.nom==p2.carte[k]||cX.nom==p3.carte[k] && cW.nom==p3.carte[k]||cX.nom==p4.carte[k] && cW.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cW.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cW.nom == p2.carte[k] ||cW.nom==p3.carte[k] ||cW.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cW.loyer;
        
    if (j2 == tableau[28]); // AcZion, on le fait pour chacZn des joueurs pour la cZareté du cZde 
        printf("Case: %s",cW.nom);
        printf("Prix de la carte: %d",cW.prixC);
        printf("Loyer: %d",cW.loyer);
        printf("Loyer de tous le groupe: %d",cW.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cW.nom == p2.carte[k])
                printf("Cette carte vous appartient, bienvenue chez vous\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p1.carte[k] && cW.nom==p1.carte[k] && cY.nom==p1.carte[k] ||cX.nom==p3.carte[k] && cW.nom==p3.carte[k] && cY.nom==p3.carte[k] ||cX.nom==p4.carte[k] && cW.nom==p4.carte[k] && cY.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cW.m3;

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cW.nom == p1.carte[k] && cY.nom==p1.carte[k]||cW.nom==p3.carte[k] && cY.nom==p3.carte[k]||cW.nom==p4.carte[k] && cY.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cW.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p1.carte[k] && cW.nom==p1.carte[k]||cX.nom==p3.carte[k] && cW.nom==p3.carte[k]||cX.nom==p4.carte[k] && cW.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cW.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cW.nom == p1.carte[k] ||cW.nom==p3.carte[k] ||cW.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cW.loyer;
        

    if (j3 == tableau[28]); // Wish
        printf("Case: %s",cW.nom);
        printf("Prix de la carte: %d",cW.prixC);
        printf("Loyer: %d",cW.loyer);
        printf("Loyer de tous le groupe: %d",cW.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cW.nom == p3.carte[k])
                printf("Cette carte vous appartient, bienvenue chez vous\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] && cW.nom==p2.carte[k] && cY.nom==p2.carte[k] ||cX.nom==p1.carte[k] && cW.nom==p1.carte[k] && cY.nom==p1.carte[k] ||cX.nom==p4.carte[k] && cW.nom==p4.carte[k] && cY.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cW.m3;

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cW.nom == p2.carte[k] && cY.nom==p2.carte[k]||cW.nom==p1.carte[k] && cY.nom==p1.carte[k]||cW.nom==p4.carte[k] && cY.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cW.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] && cW.nom==p2.carte[k]||cX.nom==p1.carte[k] && cW.nom==p1.carte[k]||cX.nom==p4.carte[k] && cW.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cW.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cW.nom == p2.carte[k] ||cW.nom==p1.carte[k] ||cW.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cW.loyer;
        
                
    if (j4 == tableau[28]); 
        printf("Case: %s",cW.nom);
        printf("Prix de la carte: %d",cW.prixC);
        printf("Loyer: %d",cW.loyer);
        printf("Loyer de tous le groupe: %d",cW.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cW.nom == p4.carte[k])
                printf("Cette carte vous appartient, bienvenue chez vous\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] && cW.nom==p2.carte[k] && cY.nom==p2.carte[k] ||cX.nom==p3.carte[k] && cW.nom==p3.carte[k] && cY.nom==p3.carte[k] ||cX.nom==p1.carte[k] && cW.nom==p1.carte[k] && cY.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cW.m3;

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cW.nom == p2.carte[k] && cY.nom==p2.carte[k]||cW.nom==p3.carte[k] && cY.nom==p3.carte[k]||cW.nom==p1.carte[k] && cY.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cW.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cX.nom == p2.carte[k] && cW.nom==p2.carte[k]||cX.nom==p3.carte[k] && cW.nom==p3.carte[k]||cX.nom==p1.carte[k] && cW.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cW.m2;
        
        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cW.nom == p2.carte[k] ||cW.nom==p3.carte[k] ||cW.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cW.loyer;
        
        for (int k=0;k>30;k++)
            if (!(cW.nom==p1.carte[k] && cW.nom==p2.carte[k]&& cW.nom==p3.carte[k]&& cW.nom==p4.carte[k])) // Si la carte appartient à personne
                if(j1==tableau[28])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p1.achat);}
                    while(p1.achat!=1||p1.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facZn à ce que après la propriété ne soit plus achetable
                        if (j1==tableau[28] && p1.achat==1);
                            p1.carte[28]=cW.nom;
                            p1.argent=p1.argent - cW.prixC;
                
                if(j2==tableau[28])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p2.achat);}
                    while(p2.achat!=1||p2.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facZn à ce que après la propriété ne soit plus achetable
                        if (j2==tableau[28] && p2.achat==1);
                            p2.carte[28]=cW.nom;
                            p2.argent=p2.argent - cW.prixC;
                        

                if(j3==tableau[28])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p3.achat);}
                    while(p3.achat!=1||p3.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facZn à ce que après la propriété ne soit plus achetable
                        if (j3==tableau[28] && p3.achat==1);
                            p3.carte[28]=cW.nom;
                            p3.argent=p3.argent - cW.prixC;
                        
                if(j4==tableau[28])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p4.achat);}
                    while(p4.achat!=1||p4.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facZn à ce que après la propriété ne soit plus achetable
                        if (j4==tableau[28] && p4.achat==1);
                            p4.carte[28]=cW.nom;
                            p4.argent=p4.argent - cW.prixC;

    if (j1 == tableau[29]) //TAXE
        printf("Case TAXE\n");
        printf("Payez le montant suivant: 100");
        p1.argent=p1.argent-100;

    if (j2 == tableau[29]) //TAXE
        printf("Case TAXE\n");
        printf("Payez le montant suivant: 100");
        p2.argent=p2.argent-100;

    if (j3 == tableau[29]) //TAXE
        printf("Case TAXE\n");
        printf("Payez le montant suivant: 100");
        p3.argent=p3.argent-100;

    if (j4 == tableau[29])//TAXE
        printf("Case TAXE\n");
        printf("Payez le montant suivant: 100");
        p4.argent=p4.argent-100;   
        

    if (j1 == tableau[30]);
        printf("Case: %s",cV.nom);
        printf("Prix de la carte: %d",cV.prixC); // On écVit chacVn des éléments de la carte
        printf("Loyer: %d",cV.loyer);
        printf("Loyer de tous le groupe: %d",cV.loyerGr);
        for (int k=0;k>30;k++) // regarde si la carte lui appartient deja
            if (cV.nom == p1.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cV.nom == p2.carte[k]||cV.nom==p3.carte[k]||cV.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p1.argent=p1.argent-cV.loyer;
    
    if (j2 == tableau[30]); // AcVion, on le fait pour chacVn des joueurs pour la cVareté du cVde 
        printf("Case: %s",cV.nom);
        printf("Prix de la carte: %d",cV.prixC);
        printf("Loyer: %d",cV.loyer);
        printf("Loyer de tous le groupe: %d",cV.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cV.nom == p2.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cV.nom == p1.carte[k]||cV.nom==p3.carte[k]||cV.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p2.argent=p2.argent-cV.loyer;
        
    if (j3 == tableau[30]); // Wish
        printf("Case: %s",cV.nom);
        printf("Prix de la carte: %d",cV.prixC);
        printf("Loyer: %d",cV.loyer);
        printf("Loyer de tous le groupe: %d",cV.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cV.nom == p3.carte[k])
                printf("Cette carte vous appartient\n ");

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cV.nom == p2.carte[k]||cV.nom==p1.carte[k]||cV.nom==p4.carte[k])
                printf("Payez le loyer indiqué");
                p3.argent=p3.argent-cV.loyer;    
        
                
    if (j4 == tableau[30]); 
        printf("Case: %s",cV.nom);
        printf("Prix de la carte: %d",cV.prixC);
        printf("Loyer: %d",cV.loyer);
        printf("Loyer de tous le groupe: %d",cV.loyerGr);

        for (int k=0;k>30;k++) // regarde si la carte appartient deja à quelqu"un
            if (cV.nom == p4.carte[k])
                printf("Cette carte vous appartient\n ");

         // regarde si la carte appartient deja à quelqu"un
        for (int k=0;k>30;k++)
            if (cV.nom == p2.carte[k]||cV.nom==p3.carte[k]||cV.nom==p1.carte[k])
                printf("Payez le loyer indiqué");
                p4.argent=p4.argent-cV.loyer;

        for (int k=0;k>30;k++)
            if (!(cV.nom==p1.carte[k] && cV.nom==p2.carte[k]&& cV.nom==p3.carte[k]&& cV.nom==p4.carte[k])) // Si la carte appartient à personne
                if(j1==tableau[30])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p1.achat);}
                    while(p1.achat!=1||p1.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facVn à ce que après la propriété ne soit plus achetable
                        if (j1==tableau[30] && p1.achat==1);
                            p1.carte[30]=cV.nom;
                            p1.argent=p1.argent - cV.prixC;
                
                if(j2==tableau[30])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p2.achat);}
                    while(p2.achat!=1||p2.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facVn à ce que après la propriété ne soit plus achetable
                        if (j2==tableau[30] && p2.achat==1);
                            p2.carte[30]=cV.nom;
                            p2.argent=p2.argent - cV.prixC;
                        

                if(j3==tableau[30])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p3.achat);}
                    while(p3.achat!=1||p3.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facVn à ce que après la propriété ne soit plus achetable
                        if (j3==tableau[30] && p3.achat==1);
                            p3.carte[30]=cV.nom;
                            p3.argent=p3.argent - cV.prixC;
                        
                if(j4==tableau[30])
                    do{
                    printf("Voulez vous achetez cette propriété?\n si oui, rentrez 1 si non rentrez 2\n"); // achat ou non
                    scanf("%d",&p4.achat);}
                    while(p4.achat!=1||p4.achat!=2); // S'il veut l'acheter on l'ajoute en position 1 dans le tableau de carte de ce joueur de facVn à ce que après la propriété ne soit plus achetable
                        if (j4==tableau[30] && p4.achat==1);
                            p4.carte[30]=cV.nom;
                            p4.argent=p4.argent - cV.prixC;;



    
    if (j1 == tableau[31] || j2 == tableau[31] || j3 == tableau[31] || j4 == tableau[31]) ; //CHANCE
        printf("Case: %s",cO.nom);
        printf("Prix de la carte: %d",cO.prixC);
        printf("Loyer: %d",cO.loyer);
        printf("Loyer de tous le groupe: %d",cO.loyerGr);



    if (p1.argent<=0)
        fin=0;
        printf("Joueur 1 vous avez fait faillite");
        do{
            printf("Pouvez vous hypothequer? 1 pour oui, 0 pour non"); 
            scanf("%d",&fin);
        }while(fin!=1 || fin!=0);
    if (fin == 1){
        //Hypothèque
    }
    else
        printf("Vous avez perdu");
        d1.perdu=1; //permettera de l'empecher de tirer le dé
        

    if (p2.argent<=0)
        fin=0;
        printf("Joueur 2 vous avez fait faillite");
        do{
            printf("Pouvez vous hypothequer? 1 pour oui, 0 pour non"); 
            scanf("%d",&fin) ;  
        }while(fin!=1 || fin!=0);
    if (fin == 1){
        //Hypothèque
    }
    else
        printf("Vous avez perdu");
        d2.perdu=1; //permettera de l'empecher de tirer le dé
    

    if (p3.argent<=0)
        fin=0;
        printf("Joueur 3 vous avez fait faillite");
        do{
            printf("Pouvez vous hypothequer? 1 pour oui, 0 pour non"); 
            scanf("%d",&fin);    
        }while(fin!=1 || fin!=0);
    if (fin == 1){
        //Hypothèque
    }
    else
        printf("Vous avez perdu");
        d3.perdu=1; //permettera de l'empecher de tirer le dé
    

    if (p4.argent<=0)
        fin=0;
        printf("Joueur 4 vous avez fait faillite");
        do{
            printf("Pouvez vous hypothequer? 1 pour oui, 0 pour non"); 
            scanf("%d",&fin);    
        }while(fin!=1 || fin!=0);
    if (fin == 1){
        //Hypothèque
    }
        else
            printf("Vous avez perdu");
            d4.perdu=1; //permettera de l'empecher de tirer le dé
// voir dé et reproduire
