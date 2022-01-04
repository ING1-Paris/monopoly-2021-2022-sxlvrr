#include <stdlib.h>
#include <stdio.h>
#include <Sauvegarde.h>

typedef struct{
    char nom;
    int position, monnaie;
    int propriete, hypothequere;
  }Joueur;

int sauvegarder_une_partie(){
  FILE* maSauvegarde=fopen("game.txt", "w");
  if(maSauvegarde == NULL) {
        printf("Ne peux pas etre ouvert\n");
        return 1;}
    Joueur j1={
    .nom=p1.nom;
    .position=acposition1;
    .monnaie=p1.argent;
    .propriete=p1.achat;
    .carte=p1.carte;}
        Joueur j2={
    .nom=acjoueur2;
    .position=acposition2;
    .monnaie=acmonnaie2;
    .propriete=acpropriete2;}
        Joueur j3={
    .nom=acjoueur3;
    .position=acposition3;
    .monnaie=acmonnaie3;
    .propriete=acpropriete3;}
        Joueur j4={
    .nom=acjoueur1;
    .position=acposition14;
    .monnaie=acmonnaie4;
    .propriete=acpropriete4;}
      
  char buffer_in[256], buffer_out[256];
  sprintf(buffer_out,256,"%s,%d,%d,%f\n");
  fwrite(buffer_out, sizeof(char),strlen(buffer_out),maSauvegarde);
  fprintf(maSauvegarde, "%d,", data);
  fclose(maSauvegarde);
  maSauvegarde=NULL;
}

int charger_une_partie(){
  FILE* maSauvegarde
  maSauvegarde=fopen("sauvegarde","r");
  fscanf(maSauvegarde, "%d", data);
  p1.nom=nomjoueurj1;
  p2.nom=nomjoueurj2;
  p3.nom=nomjoueurj3;
  p4.nom=nomjoueurj4;
  acposition1=positionj1;
  acposition2=positionj2;
  acposition3=positionj3;
  acposition4=positionj4;
  p1.argent=monnaiej1;
  p2.argent=monnaiej2;
  p3.argent=monnaiej3;
  p4.argent=monnaiej4;
  p1.achat=proprietej1;
  p2.achat=proprietej2;
  p3.achat=proprietej3;
  p4.achat=proprietej4;
  fclose(maSauvegarde);
  maSauvegarde=NULL;
}
