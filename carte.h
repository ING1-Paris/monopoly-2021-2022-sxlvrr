#include <stdio.h>
#include <stdlib.h>
struct carte1 {
        char nom[200];
        int prixC;
        int loyer,loyerGr;
        int m1,m2,m3,m4,h,;
        int prixM,prixH;
        int hypotheque;
        int deshypotheque;
    };
int carte (){
    struct carte1 cA; // DEPART
    cA.nom = 'Depart';
    cA.loyer = NULL;
    cA.m1=cA.m2=cA.m3=cA.m4=NULL;
    cA.prixM = cA.prixH = NULL;
    cA.hypotheque = cA.deshypotheque= NULL;

    struct carte1 cB; // PRISON
    cB.nom = 'Prison';
    cB.loyer = NULL;
    cB.m1=cB.m2=cB.m3=cB.m4=NULL;
    cB.prixM = cB.prixH = NULL;
    cB.hypotheque = cB.deshypotheque= NULL;

    struct carte1 cC; // VISITE PRISON
    cC.nom = 'Visite Prison';
    cC.loyer = NULL;
    cC.m1=cC.m2=cC.m3=cC.m4=NULL;
    cC.prixM = cC.prixH = NULL;
    cC.hypotheque = cC.deshypotheque= NULL;

    struct carte1 cD; // CARTE ENCHERE
    cD.nom = 'Enchere';
    cD.loyer = NULL;
    cD.m1=cD.m2=cD.m3=cD.m4=NULL;
    cD.prixM = cD.prixH = NULL;
    cD.hypotheque = cD.deshypotheque= NULL;

    struct carte1 cF;
    cF.nom = 'Stationnement gratuit';
    cF.loyer = NULL;
    cF.m1=cF.m2=cF.m3=cF.m4=NULL;
    cF.prixM = cF.prixH = NULL;
    cF.hypotheque = cF.deshypotheque= NULL;

    struct carte1 cG;
    cG.nom = 'Wish';
    cG.prixC=60;
    cG.loyer =2;
    cG.loyerGr=4;
    cG.m1=10;
    cG.m2=30;
    cG.m3=90;
    cG.m4=160;
    cG.h=250
    cG.prixM =50;
    cG.prixH = 50;
    cG.hypotheque = 30 ;
    cG.deshypotheque=33 ;

    struct carte1 cH;
    cH.nom = 'Epicier du coin';
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
    cI.nom = 'Action';
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
    cJ.nom = 'Lidl';
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
    cK.nom = 'Franprix';
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
    cL.nom = 'Monoprix';
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
    cM.nom = 'Nike';
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
    cN.nom = 'Adidas';
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
    cO.nom = 'Rebook';
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
    cP.nom = 'Samsung';
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
    cQ.nom = 'Apple';
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
    cR.nom = 'Xaomi';
    cR.prixC=220;
    cR.loyer =18;
    cR.loyerGr=36;
    cR.m1=90;
    cR.m2=250;
    cR.m3=700;
    cR.m4=875;
    cR.h=1050
    cR.prixM =150;
    cR.prixH = 150;
    cR.hypotheque = 110;
    cR.deshypotheque= 121;

    struct carte1 cS;
    cS.nom = 'Louis Vuitton';
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
    cT.nom = 'Gucci';
    cT.prixC=240;
    cT.loyer =20;
    cT.loyerGr=40;
    cT.m1=100;
    cT.m2=300;
    cT.m3=750;
    cT.m4=925;
    cT.h=1100
    cT.prixM =150;
    cT.prixH = 150;
    cT.hypotheque =120 ;
    cT.deshypotheque=132 ;

    struct carte1 cU;
    cU.nom = 'Rolex';
    cU.prixC=280;
    cU.loyer =24;
    cU.loyerGr=48;
    cU.m1=120;
    cU.m2=360;
    cU.m3=850;
    cU.m4=1025;
    cU.h=1200
    cU.prixM =150;
    cU.prixH = 150;
    cU.hypotheque = 140;
    cU.deshypotheque= 154;

    struct carte1 cV;
    cV.nom = 'Bugatti';
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
    cW.nom = 'SNCF';
    cW.prixC=200;
    cW.loyer =50;
    cW.m1=NULL;
    cW.m2=100; // LOYER SI 2 gares
    cW.m3=200; // Loyer si toutes les gares
    cW.m4=NULL;
    cW.prixM =NULL;
    cW.prixH = NULL;
    cW.hypotheque =100 ;
    cW.deshypotheque=110 ;

    struct carte1 cX;
    cX.nom = 'AirFrance';
    cX.prixC=200;
    cX.loyer =50;
    cX.m1=NULL;
    cX.m2=100;
    cX.m3=200;
    cX.m4=NULL;
    cX.prixM =NULL;
    cX.prixH = NULL;
    cX.hypotheque = 100;
    cX.deshypotheque= 110;

    struct carte1 cY;
    cY.nom = 'RATP';
    cY.prixC=200;
    cY.loyer =50;
    cY.m1=NULL;
    cY.m2=100;
    cY.m3=200;
    cY.m4=NULL;
    cY.prixM =NULL;
    cY.prixH = NULL;
    cY.hypotheque =100 ;
    cY.deshypotheque=110 ;

    struct carte1 cZ;
    cZ.nom = 'EDF';
    cZ.prixC=150;
    cZ.loyer =4*dé; //4 fois le résultat du dé
    cZ.m1=NULL;
    cZ.m2=10*dé; // Si les deux services : fois 10
    cZ.m3=NULL;
    cZ.m4=NULL;
    cZ.prixM =NULL;
    cZ.prixH = NULL;
    cZ.hypotheque = 100;
    cZ.deshypotheque= 110;

    struct carte1 cZZ;
    cZZ.nom = 'Suez';
    cZZ.prixC=150;
    cZZ.loyer =4*dé;
    cZZ.m1=NULL;
    cZZ.m2=10*dé;
    cZZ.m3=NULL;
    cZZ.m4=NULL;
    cZZ.prixM =NULL;
    cZZ.prixH = NULL;
    cZZ.hypotheque =100 ;
    cZZ.deshypotheque= 110;

}
