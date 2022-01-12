#include "biblio.h"
void plateau(struct t_joueur *p, int nb){   //Création de chaque case du plateau (position + prix)
    system("cls");  //Réinitialisation de l'écran
    caseNew(0, 0, 0, 15, "   Depart");     // Depart
    caseNew(0, 13, 0, 9, "  Wish,60");       // Wish
    caseNew(0, 26, 0, 9, " Epicier,60");    // Epicier
    caseNew(0, 39, 0, 15, "    Commu");     // Commu 3
    caseNew(0, 52, 0, 9, " Action,100");     // Action
    caseNew(0, 65, 0, 7, "  EDF,150");        // EDF
    caseNew(0, 78, 0, 13, "  LIDL,100");      // LIDL
    caseNew(0, 91, 0, 13, "Franprix,120");  // Fraprix
    caseNew(5, 0, 0, 15, "   Chance");     // CHANCE 31
    caseNew(5, 91, 0, 15, "   Chance");    // CHANCE 8
    caseNew(10, 0, 0, 1, " Bugatti,300");    // Bugatti
    caseNew(10, 91, 0, 13, "Monoprix,140"); // Monoprix
    caseNew(15, 0, 0, 15, "   Impot");     // Impot
    caseNew(15, 91, 0, 7, "   Visite");    // Visite Prison
    caseNew(20, 0, 0, 7, "  SNCF, 200");       // SNCF
    caseNew(20, 91, 0, 2, "  Nike, 140");      // NIkE
    caseNew(25, 0, 0, 1, " Rolex, 280");      // ROLEX
    caseNew(25, 91, 0, 7, "AirFrance,200"); // AIRFRANCE
    caseNew(30, 0, 0, 4, "    Slogan");    // CHill
    caseNew(30, 91, 0, 2, " Adidas,160");    // ADIDAS
    caseNew(35, 0, 0, 8, "    Prison");     // Prison
    caseNew(35, 91, 0, 2, " Rebok,180");    // Rebook
    caseNew(40, 0, 0, 14, "  Gucci,240");     // GUCCI
    caseNew(40, 91, 0, 15, "  Station");  // STATIONNEMENT
    caseNew(45, 0, 0, 7, "    Taxes");      // TAXE
    caseNew(45, 13, 0, 14, "   L-V,220");      // LV
    caseNew(45, 26, 0, 7, "  RATP,200");      // RATP
    caseNew(45, 39, 0, 7, "  Suez,150");      // Suez
    caseNew(45, 52, 0, 12, " Xaomi,220");    // Xaomi
    caseNew(45, 65, 0, 12, "Samsung,180");  // Samsung
    caseNew(45, 78, 0, 15, "    Commu");    // COMMU 17
    caseNew(45, 91, 0, 12, "  Apple,200");    // APPLE
    for(int i;i<nb;i++){
    gotoligcol(1+2*i, 180);
    printf("Wallet de %s: %d",p[i].nom,p[i].argent);
    }
}
