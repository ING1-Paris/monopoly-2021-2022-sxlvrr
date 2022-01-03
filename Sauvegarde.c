#include <stdlib.h>
#include <stdio.h>
#include 

  typedef struct{
    char nom;
    int position, monnaie;
    int propriete, hypothequere;
  }Joueur;


}

int sauvegarder_une_partie(){
  FILE* maSauvegarde
  maSauvegarde=fopen("game.txt", "a+");
  if(maSauvegarde == NULL) {
        printf("Ne peux pas etre ouvert\n");
        exit(1);
  int main(){
    Joueur j1={
    .nom=acjoueur1
    .position=acposition1
    .monnaie=acmonnaie1
    .propriete=acpropriete1}
        Joueur j2={
    .nom=acjoueur2
    .position=acposition2
    .monnaie=acmonnaie2
    .propriete=acpropriete2}
        Joueur j3={
    .nom=acjoueur3
    .position=acposition3
    .monnaie=acmonnaie3
    .propriete=acpropriete3}
        Joueur j4={
    .nom=acjoueur1
    .position=acposition14
    .monnaie=acmonnaie4
    .propriete=acpropriete4}
  char buffer_in[256], buffer_out[256];
  sprintf(buffer_out,256,"%s,%d,%d,%f\n")
  fwrite(buffer_out, sizeof(char),strlen(buffer_out),maSauvegarde);
  fprintf(maSauvegarde, "%d,", data);
  
  }
  fclose(maSauvegarde);
}

int charger_une_partie(){
  FILE* maSauvegarde
  maSauvegarde=fopen("sauvegarde","a+");
  fscanf(maSauvegarde, "%d", data);
  acjoueur1=nomjoueurj1;
  acjoueur2=nomjoueurj2;
  acjoueur3=nomjoueurj3;
  acjoueur4=nomjoueurj4;
  acposition1=positionj1;
  acposition2=positionj2;
  acposition3=positionj3;
  acposition4=positionj4;
  acmonnaie1=monnaiej1;
  acmonnaie2=monnaiej2;
  acmonnaie3=monnaiej3;
  acmonnaie4=monnaiej4;
  acpropriete1=proprietej1;
  acpropriete2=proprietej2;
  acpropriete3=proprietej3;
  acproriete4=proprietej4;
  fclose(maSauvegarde);
}
