"""create new file"""

int sauvegarder_une_partie(fichier_sauvegarde){
  maSauvegarde=fopen("game.txt", "a+");
 
  if(maSauvegarde == NULL) {
        printf("file can't be opened\n");
        exit(1);
  } 
  fprintf(maSauvegarde, "%d,", data);
  fclose(maSauvegarde);
}


int charger_une_partie(){
  maSauvegarde=fopen("sauvegarde","a+");
  fprintf(maSauvegarde, "%d,", data);
  fclose(maSauvegarde);
}
