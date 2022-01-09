#include <time.h>
#include "biblio.h"
/*
ATTENTION 16 cartes chances et communauté imposées
Les actions qui impliquent plusieurs joueurs -> Communauté
Les actions qui impliquent un seul joueur -> Chance
*/

struct t_joueur *cartechance(struct t_joueur *p, int nb,int i) // carte chance
{
    srand(time(NULL));
    int r,chance=0;
    gotoligcol(12, 115);
    printf("Carte Chance ! ");
    r=rand() % 16+1;// genere un nombre aleatoire entre 1 et 16


        if (r==1){
            gotoligcol(15, 115);
            printf("Une amende.  Versez 150 euros a la banque.");
            (p)[i].argent -= 150;// (p)[i].argent permet de retirer de l argent ou d en ajouter les parenthese sont la car c est un tableau de structure
        }
        if (r==2){
            gotoligcol(15, 115);
            printf("Oh Oh Oh C'est Noel! Tous les joeurs recoivent 200 euros");
            for(int k=0;k<nb;k++){// verifie si il y  des joueur e faillite
                if((p)[k].faillite!=1){
                (p)[k].argent +=200;
                }
            }
        }
        if (r==3){
            gotoligcol(15, 115);
            if((p)[i].argent >= 750000){
                printf("Coup dur   Donnez 20 pourcents de votre argent a la banque, pas de chance...");
                (p)[i].argent -= ((p)[i].argent/100)*20;
            }
            else{
                r=rand() % 16+1;
            }
        }
        if (r==4){
            gotoligcol(15, 115);
            printf("Erreur de la banque: Elle vous avait donne que 50 euros au lieu de 300 euros");

        }
        if (r==5){
                gotoligcol(15, 115);
            printf("C'est votre jour de chance vous gagne au bingo, vous gagnez 2  euros !!!!");
            (p)[i].argent += 2;
        }
        if (r==6){
            gotoligcol(15, 115);
            printf("Qui dit chance ne dit pas forcement benefice, vous perdez 120 euros");
            (p)[i].argent -= 120;
        }
        if (r==7){
            gotoligcol(15, 115);
            printf("Bravo, grace a vos actions sur Toyota, vous gagnez 200 euros");
            (p)[i].argent += 200;
        }
        if (r==8){
            gotoligcol(15, 115);
            printf("Vous avez obtenu une carte SORTIE DE PRISON! Preservez la ou vendez la a l'occasion");
            (p)[i].carteprison=1;
        }
        if (r==9){
            gotoligcol(15, 115);
            printf("Winamax: pari combine perdu, vous perdez 70 euros");
            (p)[i].argent -= 70;
        }
        if (r==10){
            gotoligcol(15, 115);
            printf("Credit agricole: Vous recevez votre salaire du mois, recuperez vos 750 euros!");
            (p)[i].argent += 750;
        }
        if (r==11){
            gotoligcol(15, 115);
            printf("Garez mieux votre voiture la prochaine fois! Vous perdez 80 euros...");
            (p)[i].argent -= 80;
        }
        if (r==12){
            gotoligcol(15, 115);
            printf("Surveillez vos enfants, leurs courses vous ont coute 54 euros");
            (p)[i].argent -= 54;
        }
        if (r==13){
            printf("Vous avez gagnez le concours de beaute de sephora, vous recevez 210 euros");
            (p)[i].argent += 210;
        }
        if (r==14){
            gotoligcol(15, 115);
            printf("Le Bon Coin: 2 articles ont ete vendus avec succes, recevez 50 euros");
            (p)[i].argent += 50;
        }
        if (r==15){
            gotoligcol(15, 115);
            printf("Oh non ! La police a mis la main sur votre argent non declare Allez en prison pour 3 tours");
            (p)[i].enprison = 1;
            (p)[i].position = 25;
        }
        if (r==16){
            gotoligcol(15, 115);
            printf("C'est gagneeeee, recevez 90 euros");
            (p)[i].argent += 90;
        }
        do{
        gotoligcol(21, 115);
        printf("Entrez 1 apres avoir pris connaissance de cette carte.\t\t");
        scanf("%d",&chance);
        }while(chance!=1);
    // souvient toi tu dois caster p : (int)p=int j;

    return p;
}


struct t_joueur *cartecommu(struct t_joueur *p, int nb,int i)
{
    srand(time(NULL));
    int r,k,commu=0;
    gotoligcol(12, 115);
    printf("Carte communaute ! ");// carte communaute meme principe que la carte chance
    r=rand() % 16+1;

        if (r==1){
            gotoligcol(15, 115);
            printf("Oeuvre de charite");
            gotoligcol(18, 115);
            printf("La croix rouge recolte des dons et vous etes favorable a leurs actions.");
            gotoligcol(21, 115);
            printf("Versez 100 euros a la banque.");
            (p)[i].argent -=100;
        }
        if (r==2){
                gotoligcol(15, 115);
            printf("C'est votre anniversaire ! Tous les joueurs vous versent 200 euros");
            for(k=0;k<nb;k++){
                if((p)[k].faillite!=1){
                (p)[k].argent-=200;
                (p)[i].argent+=200;
                }
            }
        }
        if (r==3){
            if((p)[i].argent >= 7500){
                gotoligcol(15, 115);
                printf("Impot sur la fortune Votre richesse depassant la moyenne, vous vous devez de verser 10 pourcents de cette dernière a la banque");
                (p)[i].argent -= ((p)[i].argent/100)*10;}
            else{
                r=rand() % 16+1;
            }
        }
        if (r==4){
            gotoligcol(15, 115);
            printf("Erreur de la banque: un bug informatique a vendu une part des actions de l'epicier du coin");
            gotoligcol(18, 115);
            printf("recevez 250 euros");

                (p)[i].argent += 250;

        }
        if (r==5){
                gotoligcol(15, 115);
            printf("Fete commune Chaque joueur verse 400 euros a la banque afin de contribuer a la saint jean guile");
            (p)[i].argent -= 400;
        }
        if (r==6){
            gotoligcol(15, 115);
            printf("Gazo vous racket 130 euros BAW");
            (p)[i].argent -= 130;
        }
        if (r==7){
            gotoligcol(15, 115);
            printf("Mr Perruche vous paye votre annee a l'ECE, gagnez 130 euros");
            (p)[i].argent += 130;
        }
        if (r==8){
            gotoligcol(15, 115);
            printf("OH OH OH c'est noel, Vous avez ete sages, tous les joueurs vous versent 100 euros");
            for(k=0;k<nb;k++){
                if((p)[k].faillite!=1){
                    (p)[k].argent-=100;
                    (p)[i].argent+=100;
                }
            }
        }
        if (r==9){
            gotoligcol(15, 115);
            printf("Winamax: pari combine reussi, recevez 80 euros");
            (p)[i].argent += 80;
        }
        if (r==10){
            gotoligcol(15, 115);
            printf("Shooting photo rate, vous gagnez un lot de consolation, recevez 3 euros");
            (p)[i].argent += 3;
        }
        if (r==11){
            gotoligcol(15, 115);
            printf("Toi la, viens ici, donne moi ton telephone!!! vous perdez 90 euros");
            (p)[i].argent -= 90;
        }
        if (r==12){
            gotoligcol(15, 115);
            printf("Les billets pour la visite du musee sont reserves, payez 20 euros");
            (p)[i].argent -= 20;
        }
        if (r==13){
            gotoligcol(15, 115);
            printf("Vous avez votre bac! Votre Grand-Pere vous donne 150 euros");
            (p)[i].argent += 150;
        }
        if (r==14){
            gotoligcol(15, 115);
            printf("Crash des actions, vous gagnez 200 euros");
            (p)[i].argent += 200;
        }
        if (r==15){
            gotoligcol(15, 115);
            printf("Vous vous etes blesser dans le dernier virage en bobsleigh,");
            gotoligcol(18, 115);
            printf("versez 100 euros à l'assurance");
            (p)[i].argent -= 100;
        }
        if (r==16){
                gotoligcol(15, 115);
            printf("Vous avez gagner votre competition fortnite! Recevez 280 euros");
            (p)[i].argent += 280;
        }
        do{
        gotoligcol(21, 115);
        printf("Entrez 1 apres avoir pris connaissance de cette carte\t\t");
        scanf("%d",&commu);
        }while(commu!=1);

    return p;
}

