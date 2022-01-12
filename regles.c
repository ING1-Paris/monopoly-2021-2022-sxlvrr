// bibliotheque des fonctions perso du projet
#include "biblio.h"


void regles(struct t_joueur *p) {  // affichage des regles du jeu on sort avec la touche s (s par rapport a sortie)
    char sortie,createur;
    gotoligcol(0,70);
    printf("                 REGLE DU JEU : ");
    gotoligcol(6,92);
    printf("\nPREPARATION	");
    gotoligcol(9,70);
    printf("\nPlacer le plateau sur une table\nMettre les cartes Chance et Communaute melangees face cachee sur les espaces qui leur sont alloues sur le plateau\nChaque joueur choisit un jeton pour le representer lors de ses deplacements autour du plateau\nChaque joueur recoit 1 500 euros\nTout le reste de l'argent et autres proprietes vont a la Banque                   ");

    printf("\n\nDOUBLES");

    printf("\nSi un joueur lance des doubles\n, il deplace son jeton comme d'habitude, la somme des deux des\n, et est assujetti a tous les privileges ou penalites relatifs a l'espace sur lequel il atterrit.\nIl a alors le droit de relancer les des une deuxieme fois. \nIl relance et deplace son jeton.                 ");

    printf("\n\nCASE DEPART ");

    printf("\nChaque fois qu'un jeton atterrit ou passe par-dessus depart,\n que ce soit en jetant les des ou en tirant une carte,\n le banquier paie au joueur un salaire de 200 euros. \n               ");

    printf("\n\nACHETER UNE PROPRIETE	");

    printf("\nChaque fois qu'un joueur atterrit sur une propriete non possedee,\n  le joueur peut acheter cette propriete a la Banque a son prix imprime.   	     ");

    printf("\n\nLOYER	");

    printf("\nLorsqu'un joueur atterrit sur une propriete appartenant a un autre joueur,\n le proprietaire percoit le loyer du joueur conformement a la liste imprimee sur la carte de titre de propriete\n qui lui est applicable.Si la propriete est hypothequee, aucun loyer ne peut etre percu.\n Lorsqu'une propriete est hypothequee, sa carte de titre de propriete est placee face cachee devant le proprietaire.     ");

    printf("\n\nCHANCE ET COMMUNAUTE	");

    printf("\nQuand un joueur atterrit sur l'une de ces cases, il/elle prend la carte du haut de la pioche indiquee,\n suit les instructions et retourne la carte face cachee au bas de la pioche.\n La carte 'Sortie de Prison' est conservee jusqu'a ce qu'elle soit utilisee, puis retournee au fond du paquet.\n Si le joueur qui tire au sort ne souhaite pas l'utiliser, il peut la vendre,\n a tout moment, a un autre joueur a un prix acceptable pour les deux.");

    printf("\n\nIMPOT SUR LE REVENU	");

    printf("\nLorsqu'un joueur atterrit sur 'Impot sur le revenu', il doit payer l'impot de 200 euros a la Banque.");

    printf("\n\nPRISON");

    printf("\nUn joueur atterrit en prison quand :\n\tSon pion atterrit dans l'espace marque 'ALLER EN PRISON'\n\tIl tire une carte marquee 'ALLER EN PRISON'\n\tIl lance trois fois de suite des doubles.         ");
    printf("\nUn joueur sort de prison lorsqu'il :\n\tLance des doubles sur l'un de ses trois tours suivants, s'il reussit a le faire, il avance immediatement le nombre d'espaces indiques par son double, meme s'il a lance des doubles, il ne prend pas un autre tour\n\tUtilise la carte 'Sortir de prison gratuitement' s'il en a une\n\tAchete la carte 'Sortir de prison gratuitement' d'un autre joueur et la jouer\n\tPayer une amende de 50 euros avant de lancer les des lors de l'un ou l'autre de ses deux tours suivants.\n\tSi le joueur ne lance pas le double a son troisieme tour, il doit payer l'amende de 50 euros. Il/elle sort alors de prison et avance immediatement le nombre de cases indiquees par son jete.          ");

    printf("\n\nSTATIONNEMENT GRATUIT         ");

    printf("\nUn joueur qui atterrit sur cet espace ne recoit pas d'argent,\n de biens ou de recompenses de quelque nature que ce soit. Ce n'est qu'un lieu de repos 'libre'.         ");

    printf("\n\nMAISONS        ");

    printf("\nS'il achete une maison, il peut la mettre sur n'importe laquelle de ces proprietes.\n La prochaine maison que le joueur achete doit etre erigee sur l'une des proprietes non ameliorees de ce groupe de couleurs\n ou de tout autre groupe de couleurs qu'il/elle possede.\n         ");
    printf("\nLe prix que le joueur doit payer a la Banque pour chaque maison est indique sur sa carte de titre de propriete pour la propriete sur laquelle il erige la maison.\n");

    printf("\n\nHOTEL       ");

    printf("\nMeme principe que pour les maison mais vaut plus chere et rapporte plus il faut avant mettre 4 maisons pour pouvoir mettre un hotel        ");

    printf("\n\nHYPOTHEQUE      ");

    printf("\nLes proprietes non ameliorees peuvent etre hypothequees par l'entremise de la Banque en tout temps.\nAvant qu'une propriete amelioree puisse etre hypothequee, tous les batiments sur toutes les proprietes\n de son groupe de couleur doivent etre revendus a la Banque a moitie prix. La valeur de l'hypotheque est imprimee sur chaque carte de titre de propriete.\nAucun loyer ne peut etre percu sur les proprietes hypothequees ou les services publics,\n mais le loyer peut etre percu sur les proprietes non hypothequees du meme groupe de couleur.\n Afin de lever l'hypotheque, le proprietaire doit payer a la Banque le montant de l'hypotheque majore d'un interet de 10 pourcent .");
    printf("\nLorsque toutes les proprietes d'un groupe de couleur ne sont plus hypothequees,\n  le proprietaire peut commencer a racheter les maisons a leur plein prix. Le joueur qui hypotheque la propriete en conserve la possession\n  et aucun autre joueur ne peut la garantir en levant l'hypotheque de la Banque.\n Toutefois, le proprietaire peut vendre ou echanger cette propriete hypothequee\n  a un autre joueur a n'importe quel prix convenu. Le nouveau proprietaire peut lever l'hypotheque immediatement,\n  s'il le desire, en remboursant l'hypotheque plus 10 pourcent d'interets a la Banque.\n  S'il ne resilie pas l'hypotheque immediatement, il doit payer a la banque un interet de 10 pourcent lorsqu'il achete/recoit la propriete hypothequee,\n  et s'il leve l'hypotheque plus tard, il doit payer a la Banque un interet additionnel de 10 pourcent ainsi que le montant de l'hypotheque.       ");

    printf("\n\nFAILLITE      ");

    printf("\nUn joueur est en faillite lorsqu'il doit plus qu'il ne peut payer a un autre joueur ou a la Banque. \n Si sa dette est envers un autre joueur, il doit remettre a ce joueur tout ce qu'il a de valeur et se retirer du jeu.\n Dans le cadre de ce reglement, s'il est proprietaire de maisons ou d'hotels, il doit les restituer a la Banque en echange d'argent\n  a hauteur de la moitie du montant paye et cet argent est remis au creancier.      ");
    printf("\nS'il a hypotheque un bien, il remet egalement son bien a ce creancier,\n  mais le nouveau proprietaire doit payer immediatement a la Banque le montant des interets sur le pret,\n  soit 10 pourcent de la valeur du bien.\n Une fois que le nouveau proprietaire l'a fait, il peut, a son gre, payer le capital ou detenir la propriete jusqu'a une date ulterieure\n  a laquelle il peut resilier l'hypotheque. S'il detient des biens de cette facon jusqu'a un tour ulterieur\n  il/elle doit payer les interets a nouveau lorsqu'il/elle leve l'hypotheque.     ");
    printf("\nSi un joueur doit a la Banque, au lieu d'un autre joueur,\n plus que ce qu'il peut payer (en raison de taxes ou de penalites),\n meme en vendant ses batiments, en hypothequant sa propriete ou en vendant ou en echangeant avec d'autres joueurs,\n il doit remettre tous ses biens a la Banque.\nDans ce cas, la Banque vend immediatement aux encheres tous les biens ainsi pris,\n a l'exception des batiments. Un joueur en faillite doit immediatement se retirer du jeu. Le dernier joueur qui reste dans le jeu gagne.\n      ");
    printf("\n\n\n\nEntrez c pour voir les createurs et les Mentions Speciales:\t");
    do{
    scanf("%c",&createur);
    }while(createur!='c');
    if(createur=='c'){
        system("cls");
    gotoligcol(0,87);
    printf(" CE JEU A ETE CONÇUE PAR :");
    gotoligcol(6,87);
    printf("\n  Alexandre Danoffre chef du projet ");
    gotoligcol(9,85);
    printf("\n  Oscar  Hernandez toujours gagnant au Monopoly ");
    gotoligcol(12,83);
    printf("\n Mathis Bodelot Toujours perdant...");
    gotoligcol(15,85);
    printf("\n Loup ... ");
    gotoligcol(18,85);
    printf("Mention Special a Monsieur Perruche, Eugenie (Tutorat) et Monsieur Segado pour leur aide precieuse !"); // ;)
    gotoligcol(21,92);

    printf("\n\n\n Pour revenir au menu principal, appuyez sur la touche 's' ");

    while (sortie != 's') {

        scanf("%c", &sortie);
    }
    if(sortie=='s'){
        system("cls");
        menu(p);
    }

    }
}

