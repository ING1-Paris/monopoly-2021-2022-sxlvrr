// bibliotheque des fonctions perso du projet
#include "biblio.h"


void regles(struct t_joueur *p) {  // affichage des règles du jeu on sort avec la touche s (s par rapport à sortie)
    char sortie;
    printf("                 REGLE DU JEU : ");
    printf("\n PRÉPARATION	");
    printf("\n Placer le plateau sur une table\nMettre les cartes Chance et Communauté mélangées face cachée sur les espaces qui leur sont alloués sur le plateau\nChaque joueur choisit un jeton pour le représenter lors de ses déplacements autour du plateau\nChaque joueur reçoit 1 500 €\nTout le reste de l’argent et autres propriétés vont à la Banque                   ");
    printf("\n DOUBLES");
    printf("\n Si un joueur lance des doubles\n, il déplace son jeton comme d’habitude, la somme des deux dés\n, et est assujetti à tous les privilèges ou pénalités relatifs à l’espace sur lequel il atterrit.\nIl a alors le droit de relancer les dés une deuxième fois. \nIl relance et déplace son jeton.                 ");
    printf("\n CASE DÉPART ");
    printf("\n  Chaque fois qu’un jeton atterrit ou passe par-dessus départ,\n que ce soit en jetant les dés ou en tirant une carte,\n le banquier paie au joueur un salaire de 200 €. \n               ");
    printf("\n ACHETER UNE PROPRIÉTÉ	");
    printf("\n Chaque fois qu’un joueur atterrit sur une propriété non possédée,\n  le joueur peut acheter cette propriété à la Banque à son prix imprimé.   	     ");
    printf("\n LOYER	");
    printf("\n Lorsqu’un joueur atterrit sur une propriété appartenant à un autre joueur,\n le propriétaire perçoit le loyer du joueur conformément à la liste imprimée sur la carte de titre de propriété\n qui lui est applicable.Si la propriété est hypothéquée, aucun loyer ne peut être perçu.\n Lorsqu’une propriété est hypothéquée, sa carte de titre de propriété est placée face cachée devant le propriétaire.     ");
    printf("\n CHANCE ET COMMUNAUTÉ	");
    printf("\n Quand un joueur atterrit sur l’un de ces cases, il/elle prend la carte du haut de la pioche indiquée,\n suit les instructions et retourne la carte face cachée au bas de la pioche.\n La carte “Sortir de prison” est conservée jusqu’à ce qu’elle soit utilisée, puis retournée au fond du paquet.\n Si le joueur qui tire au sort ne souhaite pas l’utiliser, il peut le vendre,\n à tout moment, à un autre joueur à un prix acceptable pour les deux.");
    printf("\n IMPOT SUR LE REVENU	");
    printf("\n Lorsqu’un joueur atterrit sur “Impôt sur le revenu”, il doit payer l’impôt de 200 € à la Banque.");
    printf("\n PRISON");
    printf("\n  Un joueur atterrit en prison quand :\n\tSon jeton atterrit dans l’espace marqué “ALLER EN PRISON”\n\tIl tire une carte marquée “ALLER EN PRISON”\n\tIl lance trois fois de suite des doubles.         ");
    printf("\n  Un joueur sort de prison lorsqu’il :\n\tLance des doubles sur l’un de ses trois tours suivants, s’il réussit à le faire, il avance immédiatement le nombre d’espaces indiqués par son double, même s’il a lancé des doubles, il ne prend pas un autre tour\n\tUtilise la carte “Sortir de prison gratuitement” s’il en a une\n\tAchete la carte “Sortir de prison gratuitement” d’un autre joueur et la jouer\n\tPayer une amende de 50 € avant de lancer les dés lors de l’un ou l’autre de ses deux tours suivants.\n\tSi le joueur ne lance pas le double à son troisième tour, il doit payer l’amende de 50 €. Il/elle sort alors de prison et avance immédiatement le nombre de cases indiquées par son jet.          ");
    printf("\n    STATIONNEMENT GRATUIT         ");
    printf("\n    Un joueur qui atterrit sur cet espace ne reçoit pas d’argent,\n de biens ou de récompenses de quelque nature que ce soit. Ce n’est qu’un lieu de repos “libre”.         ");
    printf("\n    MAISONS        ");
    printf("\n  S’il achète une maison, il peut la mettre sur n’importe laquelle de ces propriétés.\n La prochaine maison que le joueur achète doit être érigée sur l’une des propriétés non améliorées de ce groupe de couleurs\n ou de tout autre groupe de couleurs qu’il/elle possède.\n         ");
    printf("\n  Le prix que le joueur doit payer à la Banque pour chaque maison est indiqué sur sa carte de titre de propriété pour la propriété sur laquelle il érige la maison.\n");
    printf("\n    HOTEL       ");
    printf("\n    Meme principe que pour les maison mais vaut plus chere et rapporte plus il faut avant mettre 4 maisons pour pouvoir mettre un hotel        ");
    printf("\n   HYPOTHEQUE      ");
    printf("\n    Les propriétés non améliorées peuvent être hypothéquées par l’entremise de la Banque en tout temps.\nAvant qu’une propriété améliorée puisse être hypothéquée, tous les bâtiments sur toutes les propriétés\n de son groupe de couleur doivent être revendus à la Banque à moitié prix. La valeur de l’hypothèque est imprimée sur chaque carte de titre de propriété.\nAucun loyer ne peut être perçu sur les propriétés hypothéquées ou les services publics,\n mais le loyer peut être perçu sur les propriétés non hypothéquées du même groupe de couleur.\n Afin de lever l’hypothèque, le propriétaire doit payer à la Banque le montant de l’hypothèque majoré d’un intérêt de 10 %.");
    printf("\n    Lorsque toutes les propriétés d’un groupe de couleur ne sont plus hypothéquées,\n  le propriétaire peut commencer à racheter les maisons à leur plein prix. Le joueur qui hypothèque la propriété en conserve la possession\n  et aucun autre joueur ne peut la garantir en levant l’hypothèque de la Banque.\n Toutefois, le propriétaire peut vendre ou échanger cette propriété hypothéquée\n  à un autre joueur à n’importe quel prix convenu. Le nouveau propriétaire peut lever l’hypothèque immédiatement,\n  s’il le désire, en remboursant l’hypothèque plus 10 % d’intérêts à la Banque.\n  S’il ne résilie pas l’hypothèque immédiatement, il doit payer à la banque un intérêt de 10% lorsqu’il achète/reçoit la propriété hypothéquée,\n  et s’il lève l’hypothèque plus tard, il doit payer à la Banque un intérêt additionnel de 10% ainsi que le montant de l’hypothèque.       ");
    printf("\n    FAILLITE      ");
    printf("\n    Un joueur est en faillite lorsqu’il doit plus qu’il ne peut payer à un autre joueur ou à la Banque. \n Si sa dette est envers un autre joueur, il doit remettre à ce joueur tout ce qu’il a de valeur et se retirer du jeu.\n Dans le cadre de ce règlement, s’il est propriétaire de maisons ou d’hôtels, il doit les restituer à la Banque en échange d’argent\n  à hauteur de la moitié du montant payé et cet argent est remis au créancier.      ");
    printf("\n    S’il a hypothéqué un bien, il remet également son bien à ce créancier,\n  mais le nouveau propriétaire doit payer immédiatement à la Banque le montant des intérêts sur le prêt,\n  soit 10 % de la valeur du bien.\n Une fois que le nouveau propriétaire l’a fait, il peut, à son gré, payer le capital ou détenir la propriété jusqu’à une date ultérieure\n  à laquelle il peut résilier l’hypothèque. S’il détient des biens de cette façon jusqu’à un tour ultérieur\n  il/elle doit payer les intérêts à nouveau lorsqu’il/elle lève l’hypothèque.     ");
    printf("\n    Si un joueur doit à la Banque, au lieu d’un autre joueur,\n plus que ce qu’il peut payer (en raison de taxes ou de pénalités),\n même en vendant ses bâtiments, en hypothéquant sa propriété ou en vendant ou en échangeant avec d’autres joueurs,\n il doit remettre tous ses biens à la Banque.\nDans ce cas, la Banque vend immédiatement aux enchères tous les biens ainsi pris,\n à l’exception des bâtiments. Un joueur en faillite doit immédiatement se retirer du jeu. Le dernier joueur qui reste dans le jeu gagne.\n      ");
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

