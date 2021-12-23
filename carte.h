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
        carte[30];
    }
    


//POUR CARTE IF AVEC UN FOR DEDANS


    int tableau[32]; // Tableau qui permet d'afficher le nom le loyer et le prix de la carte au joueur (on devra aussi demander s'il veut acheter ou si ca appartient déja et dans ce cas obliger de payer le loyer)
                        // Il faut aussi faire ajouter un if dans chaque case associer au dé qui fait que à s'il est dessus et que dé=/// alors il avance de par exemple tableau 0 + dé
    if (j1 == tableau[0] || j2 == tableau[0] || j3 == tableau[0] || j4 == tableau[0]) ; // Départ
        printf("Case: %s",cA.nom);
        argent = argent + 200;

        
    

    if (j1 == tableau[1] || j2 == tableau[1] || j3 == tableau[1] || j4 == tableau[1]) ; // Wish
        printf("Case: %s",cG.nom);
        printf("Prix de la carte: %d",cG.prixC);
        printf("Loyer: %d",cG.loyer);
        printf("Loyer de tous le groupe: %d",cG.loyerGr);
    
    if (j1 == tableau[2] || j2 == tableau[2] || j3 == tableau[2] || j4 == tableau[2]) ; // Epicier
        printf("Case: %s",cH.nom);
        printf("Prix de la carte: %d",cH.prixC);
        printf("Loyer: %d",cH.loyer);
        printf("Loyer de tous le groupe: %d",cH.loyerGr);

    if (j1 == tableau[3] || j2 == tableau[3] || j3 == tableau[3] || j4 == tableau[3]) ;
        printf("Case: %s",cA.nom);
        printf("Prix de la carte: %d",cA.prixC);²²      // CAISSE COMMU
        printf("Loyer: %d",cA.loyer);
        printf("Loyer de tous le groupe: %d",cA.loyerGr);
    
    if (j1 == tableau[4] || j2 == tableau[4] || j3 == tableau[4] || j4 == tableau[4]) ; // Action
        printf("Case: %s",cI.nom);
        printf("Prix de la carte: %d",cI.prixC);
        printf("Loyer: %d",cI.loyer);
        printf("Loyer de tous le groupe: %d",cI.loyerGr);

    if (j1 == tableau[5] || j2 == tableau[5] || j3 == tableau[5] || j4 == tableau[5]) ; // EDF
        printf("Case: %s",cZ.nom);
        printf("Prix de la carte: %d",cZ.prixC);
        printf("Loyer: %d",cZ.loyer);
        printf("Loyer de tous le groupe: %d",cZ.loyerGr);

    
    if (j1 == tableau[6] || j2 == tableau[6] || j3 == tableau[6] || j4 == tableau[6]) ; // Lidl
        printf("Case: %s",cJ.nom);
        printf("Prix de la carte: %d",cJ.prixC);
        printf("Loyer: %d",cJ.loyer);
        printf("Loyer de tous le groupe: %d",cJ.loyerGr);

    if (j1 == tableau[7] || j2 == tableau[7] || j3 == tableau[7] || j4 == tableau[7]) ; // Fraprix
        printf("Case: %s",cK.nom);
        printf("Prix de la carte: %d",cK.prixC);
        printf("Loyer: %d",cK.loyer);
        printf("Loyer de tous le groupe: %d",cK.loyerGr);

    
    if (j1 == tableau[8] || j2 == tableau[8] || j3 == tableau[8] || j4 == tableau[8) ;
        printf("Case: %s",cI.nom);
        printf("Prix de la carte: %d",cI.prixC);            // CHANCE
        printf("Loyer: %d",cI.loyer);
        printf("Loyer de tous le groupe: %d",cI.loyerGr);


    if (j1 == tableau[9] || j2 == tableau[9] || j3 == tableau[9] || j4 == tableau[9]) ;// Monoprix
        printf("Case: %s",cL.nom);
        printf("Prix de la carte: %d",cL.prixC);
        printf("Loyer: %d",cL.loyer);
        printf("Loyer de tous le groupe: %d",cL.loyerGr);

    if (j1 == tableau[10] || j2 == tableau[10]|| j3 == tableau[10] || j4 == tableau[10]) ; // Visite prison
        printf("Case: %s",cC.nom);
        printf("Prix de la carte: %d",cC.prixC);
        printf("Loyer: %d",cC.loyer);
        printf("Loyer de tous le groupe: %d",cC.loyerGr);

    
    if (j1 == tableau[11] || j2 == tableau[11] || j3 == tableau[11] || j4 == tableau[11]) ; // Nike
        printf("Case: %s",cM.nom);
        printf("Prix de la carte: %d",cM.prixC);
        printf("Loyer: %d",cM.loyer);
        printf("Loyer de tous le groupe: %d",cM.loyerGr);

    
    if (j1 == tableau[12] || j2 == tableau[12] || j3 == tableau[12] || j4 == tableau[12]) ; // AirFrance
        printf("Case: %s",cX.nom);
        printf("Prix de la carte: %d",cX.prixC);
        printf("Loyer: %d",cX.loyer);
        printf("Loyer de 2 transports: %d",cX.m2);
        printf("Loyer de tous les transports: ",cX.m3);


    if (j1 == tableau[13] || j2 == tableau[13] || j3 == tableau[13] || j4 == tableau[13]) ; //Adidas
        printf("Case: %s",cN.nom);
        printf("Prix de la carte: %d",cN.prixC);
        printf("Loyer: %d",cN.loyer);
        printf("Loyer de tous le groupe: %d",cN.loyerGr);

    
    if (j1 == tableau[14] || j2 == tableau[14] || j3 == tableau[14] || j4 == tableau[14]) ; // Reebok
        printf("Case: %s",cO.nom);
        printf("Prix de la carte: %d",cO.prixC);
        printf("Loyer: %d",cO.loyer);
        printf("Loyer de tous le groupe: %d",cO.loyerGr);

    if (j1 == tableau[15] || j2 == tableau[15] || j3 == tableau[15] || j4 == tableau[15]) ; // Stationnement
        printf("Case: %s",cF.nom);
        printf("Prix de la carte: %d",cF.prixC);
        printf("Loyer: %d",cF.loyer);
        printf("Loyer de tous le groupe: %d",cF.loyerGr);

    
    if (j1 == tableau[16] || j2 == tableau[16] || j3 == tableau[16] || j4 == tableau[16]) ;
        printf("Case: %s",cQ.nom);
        printf("Prix de la carte: %d",cQ.prixC);
        printf("Loyer: %d",cQ.loyer);
        printf("Loyer de tous le groupe: %d",cQ.loyerGr);


    if (j1 == tableau[17] || j2 == tableau[17] || j3 == tableau[17] || j4 == tableau[17]) ; // Commu
        printf("Case: %s",cO.nom);
        printf("Prix de la carte: %d",cO.prixC);
        printf("Loyer: %d",cO.loyer);
        printf("Loyer de tous le groupe: %d",cO.loyerGr);


    if (j1 == tableau[18] || j2 == tableau[18] || j3 == tableau[18] || j4 == tableau[18]) ; // SAMSUG
        printf("Case: %s",cP.nom);
        printf("Prix de la carte: %d",cP.prixC);
        printf("Loyer: %d",cP.loyer);
        printf("Loyer de tous le groupe: %d",cP.loyerGr);

    if (j1 == tableau[19] || j2 == tableau[19] || j3 == tableau[19] || j4 == tableau[19]) ;// XAOMI
        printf("Case: %s",cR.nom);
        printf("Prix de la carte: %d",cR.prixC);
        printf("Loyer: %d",cR.loyer);
        printf("Loyer de tous le groupe: %d",cR.loyerGr);


    if (j1 == tableau[20] || j2 == tableau[20] || j3 == tableau[20] || j4 == tableau[20]) ; // SUEZ
        printf("Case: %s",cZZ.nom);
        printf("Prix de la carte: %d",cZZ.prixC);
        printf("Loyer: %d",cZZ.loyer);
        printf("Loyer de tous le groupe: %d",cZZ.loyerGr);

    if (j1 == tableau[21] || j2 == tableau[21] || j3 == tableau[21] || j4 == tableau[21]) ; // RATP
        printf("Case: %s",cY.nom);
        printf("Prix de la carte: %d",cY.prixC);
        printf("Loyer: %d",cY.loyer);
        printf("Loyer de tous le groupe: %d",cY.loyerGr);
    
    if (j1 == tableau[22] || j2 == tableau[22] || j3 == tableau[22] || j4 == tableau[22]) ; //Louis Vuitton
        printf("Case: %s",cS.nom);
        printf("Prix de la carte: %d",cS.prixC);
        printf("Loyer: %d",cS.loyer);
        printf("Loyer de tous le groupe: %d",cS.loyerGr);

    
    if (j1 == tableau[23] || j2 == tableau[23] || j3 == tableau[23] || j4 == tableau[23]) ; // IMPOT
        printf("Case: %s",cO.nom);
        printf("Prix de la carte: %d",cO.prixC);
        printf("Loyer: %d",cO.loyer);
        printf("Loyer de tous le groupe: %d",cO.loyerGr);

    if (j1 == tableau[24] || j2 == tableau[24] || j3 == tableau[24] || j4 == tableau[24]) ; // GUCCI
        printf("Case: %s",cT.nom);
        printf("Prix de la carte: %d",cT.prixC);
        printf("Loyer: %d",cT.loyer);
        printf("Loyer de tous le groupe: %d",cT.loyerGr);

    if (j1 == tableau[25] || j2 == tableau[25] || j3 == tableau[25] || j4 == tableau[25]) ;// PRISON
        printf("Case: %s",cO.nom);
        printf("Prix de la carte: %d",cO.prixC);
        printf("Loyer: %d",cO.loyer);
        printf("Loyer de tous le groupe: %d",cO.loyerGr);

    if (j1 == tableau[26] || j2 == tableau[26] || j3 == tableau[26] || j4 == tableau[26]) ; // ENCHERE
        printf("Case: %s",cO.nom);
        printf("Prix de la carte: %d",cO.prixC);
        printf("Loyer: %d",cO.loyer);
        printf("Loyer de tous le groupe: %d",cO.loyerGr);
        

    if (j1 == tableau[27] || j2 == tableau[27] || j3 == tableau[27] || j4 == tableau[27]) ; //Rolex
        printf("Case: %s",cU.nom);
        printf("Prix de la carte: %d",cU.prixC);
        printf("Loyer: %d",cU.loyer);
        printf("Loyer de tous le groupe: %d",cU.loyerGr);

    if (j1 == tableau[28] || j2 == tableau[28] || j3 == tableau[28] || j4 == tableau[28]) ;//SNCF
        printf("Case: %s",cW.nom);
        printf("Prix de la carte: %d",cW.prixC);
        printf("Loyer: %d",cW.loyer);
        printf("Loyer de tous le groupe: %d",cW.loyerGr);

    if (j1 == tableau[29] || j2 == tableau[29] || j3 == tableau[29] || j4 == tableau[29]) ; //TAXE
        printf("Case: %s",cO.nom);
        printf("Prix de la carte: %d",cO.prixC);
        printf("Loyer: %d",cO.loyer);
        printf("Loyer de tous le groupe: %d",cO.loyerGr);

    if (j1 == tableau[30] || j2 == tableau[30] || j3 == tableau[30] || j4 == tableau[30]) ; // BUGATTI
        printf("Case: %s",cV.nom);
        printf("Prix de la carte: %d",cV.prixC)
        printf("Loyer: %d",cV.loyer);
        printf("Loyer de tous le groupe: %d",cV.loyerGr);
    
    if (j1 == tableau[31] || j2 == tableau[31] || j3 == tableau[31] || j4 == tableau[31]) ; //CHANCE
        printf("Case: %s",cO.nom);
        printf("Prix de la carte: %d",cO.prixC);
        printf("Loyer: %d",cO.loyer);
        printf("Loyer de tous le groupe: %d",cO.loyerGr);
}

