#include <stdlib.h>
#include <stdio.h>
#include "carte.h"


int affichageCase(){


    // CASE 1
    if (j1 == tableau[0]){ // Départ
        printf("Case: %s",cA.nom);
        p1.argent = p1.argent + 200;}

    if (j1 == tableau[1]){ // Wish
        printf("Case: %s",cG.nom);
        printf("Prix de la carte: %d",cG.prixC);
        printf("Loyer: %d",cG.loyer);
        printf("Loyer de tous le groupe: %d",cG.loyerGr);}
    
    if (j1 == tableau[2]){
        printf("Case: %s",cH.nom);
        printf("Prix de la carte: %d",cH.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cH.loyer);
        printf("Loyer de tous le groupe: %d",cH.loyerGr);}
    
    if (j1 == tableau[4]);
        printf("Case: %s",cI.nom);
        printf("Prix de la carte: %d",cI.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cI.loyer);
        printf("Loyer de tous le groupe: %d",cI.loyerGr);

    if (j1 == tableau[5]){ // EDF
        printf("Case: %s",cZ.nom);
        printf("Prix de la carte: %d",cZ.prixC); // On écZit chacZn des éléments de la carte
        printf("Loyer: %d",cZ.loyer);
        printf("Loyer de tous le groupe: %d",cZ.loyerGr);}
    
    if (j1 == tableau[6]){
        printf("Case: %s",cJ.nom);
        printf("Prix de la carte: %d",cJ.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cJ.loyer);
        printf("Loyer de tous le groupe: %d",cJ.loyerGr);}

    if (j1 == tableau[7]){
        printf("Case: %s",cK.nom);
        printf("Prix de la carte: %d",cK.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cK.loyer);
        printf("Loyer de tous le groupe: %d",cK.loyerGr);}

    if (j1 == tableau[9]);
        printf("Case: %s",cL.nom);
        printf("Prix de la carte: %d",cL.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cL.loyer);
        printf("Loyer de tous le groupe: %d",cL.loyerGr);

    if (j2== tableau[0]){ // Départ
        printf("Case: %s",cA.nom);
        p2.argent = p2.argent + 200;}

    if (j2 == tableau[1]){ // Wish
        printf("Case: %s",cG.nom);
        printf("Prix de la carte: %d",cG.prixC);
        printf("Loyer: %d",cG.loyer);
        printf("Loyer de tous le groupe: %d",cG.loyerGr);}

    if (j2 == tableau[2]){
        printf("Case: %s",cH.nom);
        printf("Prix de la carte: %d",cH.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cH.loyer);
        printf("Loyer de tous le groupe: %d",cH.loyerGr);}

    if (j2 == tableau[4]);
        printf("Case: %s",cI.nom);
        printf("Prix de la carte: %d",cI.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cI.loyer);
        printf("Loyer de tous le groupe: %d",cI.loyerGr);

    if (j2 == tableau[5]){ // EDF
        printf("Case: %s",cZ.nom);
        printf("Prix de la carte: %d",cZ.prixC); // On écZit chacZn des éléments de la carte
        printf("Loyer: %d",cZ.loyer);
        printf("Loyer de tous le groupe: %d",cZ.loyerGr);}
    
    if (j2 == tableau[6]){
        printf("Case: %s",cJ.nom);
        printf("Prix de la carte: %d",cJ.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cJ.loyer);
        printf("Loyer de tous le groupe: %d",cJ.loyerGr);}

    if (j2 == tableau[7]){
        printf("Case: %s",cK.nom);
        printf("Prix de la carte: %d",cK.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cK.loyer);
        printf("Loyer de tous le groupe: %d",cK.loyerGr);}

    if (j1 == tableau[9]);
        printf("Case: %s",cL.nom);
        printf("Prix de la carte: %d",cL.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cL.loyer);
        printf("Loyer de tous le groupe: %d",cL.loyerGr);

    if (j3 == tableau[0]){ // Départ
        printf("Case: %s",cA.nom);          //PAS BON CAR SI PASSE PAR DEPART
        p3.argent = p3.argent + 200;}
    
    if (j3 == tableau[1]){ // Wish
        printf("Case: %s",cG.nom);
        printf("Prix de la carte: %d",cG.prixC);
        printf("Loyer: %d",cG.loyer);
        printf("Loyer de tous le groupe: %d",cG.loyerGr);}

    if (j3 == tableau[2]){
        printf("Case: %s",cH.nom);
        printf("Prix de la carte: %d",cH.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cH.loyer);
        printf("Loyer de tous le groupe: %d",cH.loyerGr);}
    
    if (j3 == tableau[4]);
        printf("Case: %s",cI.nom);
        printf("Prix de la carte: %d",cI.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cI.loyer);
        printf("Loyer de tous le groupe: %d",cI.loyerGr);

    if (j3 == tableau[5]){// EDF
        printf("Case: %s",cZ.nom);
        printf("Prix de la carte: %d",cZ.prixC); // On écZit chacZn des éléments de la carte
        printf("Loyer: %d",cZ.loyer);
        printf("Loyer de tous le groupe: %d",cZ.loyerGr);}

    if (j3 == tableau[6]){
        printf("Case: %s",cJ.nom);
        printf("Prix de la carte: %d",cJ.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cJ.loyer);
        printf("Loyer de tous le groupe: %d",cJ.loyerGr);}

    if (j3 == tableau[7]){
        printf("Case: %s",cK.nom);
        printf("Prix de la carte: %d",cK.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cK.loyer);
        printf("Loyer de tous le groupe: %d",cK.loyerGr);}

    if (j4 == tableau[0]){ // Départ
        printf("Case: %s",cA.nom);
        p4.argent = p4.argent + 200;}
    
    if (j4 == tableau[1]){ // Wish
        printf("Case: %s",cG.nom);
        printf("Prix de la carte: %d",cG.prixC);
        printf("Loyer: %d",cG.loyer);
        printf("Loyer de tous le groupe: %d",cG.loyerGr);}
    
    if (j4 == tableau[2]){
        printf("Case: %s",cH.nom);
        printf("Prix de la carte: %d",cH.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cH.loyer);
        printf("Loyer de tous le groupe: %d",cH.loyerGr);}

    if (j4 == tableau[4]);
        printf("Case: %s",cI.nom);
        printf("Prix de la carte: %d",cI.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cI.loyer);
        printf("Loyer de tous le groupe: %d",cI.loyerGr);

    if (j4 == tableau[5]){ // EDF
        printf("Case: %s",cZ.nom);
        printf("Prix de la carte: %d",cZ.prixC); // On écZit chacZn des éléments de la carte
        printf("Loyer: %d",cZ.loyer);
        printf("Loyer de tous le groupe: %d",cZ.loyerGr);}
    
    if (j4 == tableau[6]){
        printf("Case: %s",cJ.nom);
        printf("Prix de la carte: %d",cJ.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cJ.loyer);
        printf("Loyer de tous le groupe: %d",cJ.loyerGr);}

    if (j4 == tableau[7]){
        printf("Case: %s",cK.nom);
        printf("Prix de la carte: %d",cK.prixC); // On écrit chacun des éléments de la carte
        printf("Loyer: %d",cK.loyer);
        printf("Loyer de tous le groupe: %d",cK.loyerGr);}

    
    if (j1 == tableau[3] || j2 == tableau[3] || j3 == tableau[3] || j4 == tableau[3]){
        printf("Case: %s",cA.nom);} // CHANCE
    
    if (j1 == tableau[8] || j2 == tableau[8] || j3 == tableau[8] || j4 == tableau[8]) ;
        printf("Case: %s",cI.nom);

    
}