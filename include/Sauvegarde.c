#include "biblio.h"
/*const char* PERSON_FORMAT_IN="{\n\t \" nom \" : \" %[^\"] \" , \n\t \" hypothequere \" : %d,\n\t \" position \" : \" %d \" \n\t \" argent \" : \" %d \" ,\n\t \" carte \" : \"}";
const char* PERSON_FORMAT_OUT="{\n\t \" nom \" : \" %s \" , \n\t \" age \" : %d,\n\t \" position \" : \" %d \" \n}";

int sauvegarder_une_partie(){
    FILE* maSauvegarde=fopen("game.txt", "w+");
    if(maSauvegarde == NULL) {
        printf("Le fichier de sauvegarde ne peut pas etre ouvert.\n");
        return 1;
    }
    fprintf(maSauvegarde, PERSON_FORMAT_OUT, p1.nom, 20, p1.position, p1.argent, p1.propriete, p1.carte1, p1.hypothequere);
    fprintf(maSauvegarde, PERSON_FORMAT_OUT, p2.nom, 20, p2.position, p2.argent, p2.propriete, p2.carte1, p2.hypothequere);
    fprintf(maSauvegarde, PERSON_FORMAT_OUT, p3.nom, 20, p3.position, p3.argent, p3.propriete, p3.carte1, p3.hypothequere);
    fprintf(maSauvegarde, PERSON_FORMAT_OUT, p4.nom, 20, p4.position, p4.argent, p4.propriete, p4.carte1, p4.hypothequere);
    fclose(maSauvegarde);
    maSauvegarde=NULL;
}

int charger_une_partie(){
    FILE* maSauvegarde
    maSauvegarde=fopen("sauvegarde","r");
    if(maSauvegarde == NULL) {
    printf("Le fichier de sauvegarde ne peut pas etre ouvert.\n");
        return 1;
    }
    fseek(file, 0, SEEK_SET);
    fscanf(maSauvegarde, PERSON_FORMAT_IN, p1.nom, 20, p1.position, p1.argent, p1.propriete, p1.carte, p1.hypothequere);
    fscanf(maSauvegarde, PERSON_FORMAT_IN, p2.nom, 20, p2.position, p2.argent, p2.propriete, p2.carte, p2.hypothequere);
    fscanf(maSauvegarde, PERSON_FORMAT_IN, p3.nom, 20, p3.position, p3.argent, p3.propriete, p3.carte, p3.hypothequere);
    fscanf(maSauvegarde, PERSON_FORMAT_IN, p4.nom, 20, p4.position, p4.argent, p4.propriete, p4.carte, p4.hypothequere);
    fclose(maSauvegarde);
    maSauvegarde=NULL;
}*/
