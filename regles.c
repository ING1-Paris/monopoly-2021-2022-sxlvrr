// bibliotheque des fonctions perso du projet
#include "biblio.h"


void regles(struct t_joueur *p) {  // affichage des règles du jeu on sort avec la touche s (s par rapport à sortie)
    char sortie;
    printf("                 REGLE DU JEU : ");
    printf("\n PRÉPARATION	");
    printf("\n Placer le plateau sur une table\nMettre les cartes Chance et Communaute melangees face cachée sur les espaces qui leur sont alloues sur le plateau\nChaque joueur choisit un jeton pour le representer lors de ses deplacements autour du plateau\nChaque joueur reçoit 1 500 €\nTout le reste de l’argent et autres proprietes vont a la Banque                   ");
    printf("\n DOUBLES");
    printf("\n Si un joueur lance des doubles\n, il deplace son jeton comme d’habitude, la somme des deux des\n, et est assujetti à tous les privilèges ou penalites relatifs a l’espace sur lequel il atterrit.\nIl a alors le droit de relancer les des une deuxieme fois. \nIl relance et deplace son jeton.                 ");
    printf("\n CASE DÉPART ");
    printf("\n  Chaque fois qu’un jeton atterrit ou passe par-dessus depart,\n que ce soit en jetant les des ou en tirant une carte,\n le banquier paie au joueur un salaire de 200 €. \n               ");
    printf("\n ACHETER UNE PROPRIÉTÉ	");
    printf("\n Chaque fois qu’un joueur atterrit sur une propriete non possedee,\n  le joueur peut acheter cette propriete a la Banque à son prix imprime.   	     ");
    printf("\n LOYER	");
    printf("\n Lorsqu’un joueur atterrit sur une propriete appartenant a un autre joueur,\n le proprietaire perçoit le loyer du joueur conformement a la liste imprime sur la carte de titre de propriete\n qui lui est applicable.Si la propriete est hypothéquee, aucun loyer ne peut etre perçu.\n Lorsqu’une propriete est hypothéquee, sa carte de titre de propriete est placee face cachee devant le proprietaire.     ");
    printf("\n CHANCE ET COMMUNAUTÉ	");
    printf("\n Quand un joueur atterrit sur l’un de ces cases, il/elle prend la carte du haut de la pioche indiquée,\n suit les instructions et retourne la carte face cachée au bas de la pioche.\n La carte “Sortir de prison” est conservée jusqu’à ce qu’elle soit utilisée, puis retournée au fond du paquet.\n Si le joueur qui tire au sort ne souhaite pas l’utiliser, il peut le vendre,\n à tout moment, a un autre joueur à un prix acceptable pour les deux.");
    printf("\n IMPOT SUR LE REVENU	");
    printf("\n Lorsqu’un joueur atterrit sur “Impot sur le revenu”, il doit payer l’impot de 200 € à la Banque.");
    printf("\n PRISON");
    printf("\n  Un joueur atterrit en prison quand :\n\tSon jeton atterrit dans l’espace marqué “ALLER EN PRISON”\n\tIl tire une carte marquée “ALLER EN PRISON”\n\tIl lance trois fois de suite des doubles.         ");
    printf("\n  Un joueur sort de prison lorsqu’il :\n\tLance des doubles sur l’un de ses trois tours suivants, s’il réussit à le faire, il avance immediatement le nombre d’espaces indiqués par son double, même s’il a lance des doubles, il ne prend pas un autre tour\n\tUtilise la carte “Sortir de prison gratuitement” s’il en a une\n\tAchete la carte “Sortir de prison gratuitement” d’un autre joueur et la jouer\n\tPayer une amende de 50 € avant de lancer les des lors de l’un ou l’autre de ses deux tours suivants.\n\tSi le joueur ne lance pas le double à son troisième tour, il doit payer l’amende de 50 €. Il/elle sort alors de prison et avance immédiatement le nombre de cases indiquées par son jet.          ");
    printf("\n    STATIONNEMENT GRATUIT         ");
    printf("\n    Un joueur qui atterrit sur cet espace ne reçoit pas d’argent,\n de biens ou de recompenses de quelque nature que ce soit. Ce n’est qu’un lieu de repos “libre”.         ");
    printf("\n    MAISONS        ");
    printf("\n  S’il achète une maison, il peut la mettre sur n’importe laquelle de ces proprietes.\n La prochaine maison que le joueur achete doit etre erigee sur l’une des proprietes non ameliorees de ce groupe de couleurs\n ou de tout autre groupe de couleurs qu’il/elle possede.\n         ");
    printf("\n  Le prix que le joueur doit payer à la Banque pour chaque maison est indiquer sur sa carte de titre de propriete pour la propriete sur laquelle il erige la maison.\n");
    printf("\n    HOTEL       ");
    printf("\n    Meme principe que pour les maison mais vaut plus chere et rapporte plus il faut avant mettre 4 maisons pour pouvoir mettre un hotel        ");
    printf("\n   HYPOTHEQUE      ");
    printf("\n    Les proprietes non ameliorees peuvent être hypothequees par l’entremise de la Banque en tout temps.\nAvant qu’une propriete amelioree puisse etre hypothequee, tous les batiments sur toutes les proprietes\n de son groupe de couleur doivent etre revendus a la Banque a moitie prix. La valeur de l’hypotheque est imprimer sur chaque carte de titre de propriete.\nAucun loyer ne peut etre perçu sur les proprietes hypothequees ou les services publics,\n mais le loyer peut être perçu sur les proprietes non hypothequees du meme groupe de couleur.\n Afin de lever l’hypotheque, le proprietaire doit payer a la Banque le montant de l’hypotheque majore d’un interet de 10 %.");
    printf("\n    Lorsque toutes les proprietes d’un groupe de couleur ne sont plus hypothequer,\n  le proprietaire peut commencer a racheter les maisons à leur plein prix. Le joueur qui hypotheque la propriete en conserve la possession\n  et aucun autre joueur ne peut la garantir en levant l’hypotheque de la Banque.\n Toutefois, le proprietaire peut vendre ou echanger cette propriete hypothequee\n  a un autre joueur a n’importe quel prix convenu. Le nouveau proprietaire peut lever l’hypotheque immediatement,\n  s’il le désire, en remboursant l’hypotheque plus 10 % d’intérets a la Banque.\n  S’il ne resilie pas l’hypotheque immediatement, il doit payer a la banque un interet de 10% lorsqu’il achete/reçoit la propriete hypothequer,\n  et s’il leve l’hypotheque plus tard, il doit payer a la Banque un intérêt additionnel de 10% ainsi que le montant de l’hypotheque.       ");
    printf("\n    FAILLITE      ");
    printf("\n    Un joueur est en faillite lorsqu’il doit plus qu’il ne peut payer à un autre joueur ou à la Banque. \n Si sa dette est envers un autre joueur, il doit remettre a ce joueur tout ce qu’il a de valeur et se retirer du jeu.\n Dans le cadre de ce reglement, s’il est proprietaire de maisons ou d’hotels, il doit les restituer à la Banque en échange d’argent\n  a hauteur de la moitie du montant payer et cet argent est remis au creancier.      ");
    printf("\n    S’il a hypotheque un bien, il remet également son bien a ce créancier,\n  mais le nouveau proprietaire doit payer immediatement a la Banque le montant des interets sur le pret,\n  soit 10 % de la valeur du bien.\n Une fois que le nouveau proprietaire l’a fait, il peut, a son gre, payer le capital ou detenir la propriete jusqu’a une date ulterieure\n  a laquelle il peut resilier l’hypotheque. S’il détient des biens de cette façon jusqu’a un tour ultérieur\n  il/elle doit payer les interets a nouveau lorsqu’il/elle leve l’hypotheque.     ");
    printf("\n    Si un joueur doit a la Banque, au lieu d’un autre joueur,\n plus que ce qu’il peut payer (en raison de taxes ou de penaliter),\n meme en vendant ses batiments, en hypothequant sa proprieter ou en vendant ou en echangeant avec d’autres joueurs,\n il doit remettre tous ses biens a la Banque.\nDans ce cas, la Banque vend immediatement aux enchères tous les biens ainsi pris,\n a l’exception des batiments. Un joueur en faillite doit immediatement se retirer du jeu. Le dernier joueur qui reste dans le jeu gagne.\n      ");
    printf(" CE JEU A ETE CONÇUE PAR :");
    printf("\n  Alex Danoffre chef du projet ");
    printf("\n  Oscar  Hernandez toujours gagnant au Monopoly ");
    printf("\n Mathis Bodelot Toujours perdant...");
    printf("\n Loup ...  💤 ");
    while (sortie != 's') {
        printf("\n Pour revenir au menu principal, appuyez sur la touche 's' ");
        scanf("%c", &sortie);
    }
    if(sortie=='s'){
        menu(p);
    }

}

