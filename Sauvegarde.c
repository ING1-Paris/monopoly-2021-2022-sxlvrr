

int sauvegarder_une_partie(fichier_sauvegarde){
  maSauvegarde=fopen("game.txt", "a+");
 
  if(maSauvegarde == NULL) {
        printf("Ne peux pas etre ouvert\n");
        exit(1);
  } 
  fprintf(maSauvegarde, "%d,", data);
  int positionj1,positionj2,positionj3,positionj4;
  int monnaiej1,monnaiej2,monnaiej3,monnaiej4;
  int proprietej1,proprietej2,proprietej3,proprietej4;
  
  for player in Joueur:
    currentmoney.append(Monnaie[player]
  fclose(maSauvegarde);
}


int charger_une_partie(){
  maSauvegarde=fopen("sauvegarde","a+");
  fprintf(maSauvegarde, "%d,", data);
  fclose(maSauvegarde);
}
