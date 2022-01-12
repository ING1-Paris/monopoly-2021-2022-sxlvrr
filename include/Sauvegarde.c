
/*#include "biblio.h"

 struct t_joueur *sauvegarde(struct t_joueur *p,struct carte1 *c, int nbj )
 {
     FILE*opfichier = NULL;
     opfichier = fopen("fichier_sauvegarder.txt","r");
     if (opfichier==NULL){
        printf("erreur de l'ouverture du fichier sauvegarde.txt");
     }
     else{
        for (int i = 0;i<nbj;i++){
            fprintf("%c\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",p[i].nom,p[i].numero,p[i].argent,p[i].position,p[i].enprison,p[i].carteprison,p[i].toursprison,p[i].faillite);
        }
     }
     return p;
 }

struct t_joueur *chargerPartie(struct t_joueur *p,struct carte1 *c, int nbj) {
    FILE* pf = fopen("fichier_sauvegarder.txt", "r");
    fscanf(pf, "%d\n", nbj);
    for (int i = 0; i < *nbj; i++) {
        fscanf(pf, "%c\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",p[i].nom,p[i].numero,p[i].argent,p[i].position,p[i].enprison,p[i].carteprison,p[i].toursprison,p[i].faillite);
    }
    fclose(pf);
    pf = NULL;


    return p;
}
*/
