#include <stdlib.h>
#include <stdio.h>

  typedef struct{
    char nom;
    int position, monnaie;
    float propriete;
  }Joueur1;
  typedef struct{
    char nom;
    int position, monnaie;
    float propriete;
  }Joueur2;
    typedef struct{
    char nom;
    int position, monnaie;
    float propriete;
  }Joueur3;
    typedef struct{
    char nom;
    int position, monnaie;
    float propriete;
  }Joueur4;
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
}

  char nomjoueurj1=acjoueur1;
  char nomjoueurj2=acjoueur2;
  char nomjoueurj3=acjoueur3;
  char nomjoueurj4=acjoueur4;
  int positionj1=acposition1;
  int positionj2=acposition2;
  int positionj3=acposition3;
  int positionj4=acposition4;
  int monnaiej1=acmonnaie1;
  int monnaiej2=acmonnaie2;
  int monnaiej3=acmonnaie3;
  int monnaiej4=acmonnaie4;
  int proprietej1=acpropriete1;
  int proprietej2=acpropriete2;
  int proprietej3=acpropriete3;
  int proprietej4=acpropriete4;

int sauvegarder_une_partie(fichier_sauvegarde){
  FILE* maSauvegarde
  maSauvegarde=fopen("game.txt", "a+");
  char buffer_in[256], buffer_out[256];
  sprintf(buffer_out,256,"%s,%d,%d,%f\n")
  fwrite(buffer_out, sizeof(char),strlen(buffer_out),maSauvegarde);
  fprintf(maSauvegarde, "%d,", data);
  if(maSauvegarde == NULL) {
        printf("Ne peux pas etre ouvert\n");
        exit(1);
  }




  fclose(maSauvegarde);
}

int charger_une_partie(fichier_sauvegarde){
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
