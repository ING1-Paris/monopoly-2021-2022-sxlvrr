#include "biblio.h"


/////////////JOUEUR///////////////


int main()
{
    int i = 1, de1 = 0, de2 = 0, nb = 0, lance = 0, fin = 0, compteurdouble = 0, sortie = 0, cptfaillite=0, mystere = 5;
    int tourFini;
    //TEST ICI, SERA DANS STRUCT DE JOUEUR A LA FIN

    struct t_joueur *p;
    //printf(">>>>>>>><<<<<<<<<<<");
    p=initp();
    //printf(">>>>>>>><<<<<<<<<<<");
    struct carte1 *c = initc();

    //printf(">>>>>>>><<<<<<<<<<<"); // MARCHE PAS sur POWERSHELL
    // variable
    menu(p);
    do
    {
        gotoligcol(0,92);
        printf("Combien de joueurs ?\t\t");
        scanf("%d",&nb);
    }
    while(nb <=1 || nb > 4);
    //nb-=1;
    gotoligcol(3,89);
    printf("Il y a %d joueurs dans la partie\n",nb);
    for(int k=0; k<nb; k++)
    {
        gotoligcol(6+2*k,91);
        printf("joueur %d quel est votre nom?\t\t ",p[k].numero);
        scanf("%s",&p[k].nom);
        while(mystere > 1){
            printf("Voulez-vous activer le BAW mystere durant cette partie ? (1 pour oui, sinon 0)");
            scanf("%d",&mystere);
        }
    }

    ///////////////PLATEAU////////////////////////////////

    plateau(p,nb);

    for(i=0; i<nb; i++) //Setup position joueurs
    {
        p[i].position = 0;
    }

    i = 0;

    do
    {

        if (lance == 0)
        {

            if(p[i].faillite == 1)
            {
                i+=1;
            }
            if(i>=nb || i<0)
            {
                i=0;
            }
            while(lance!=1)
            {

                if(p[i].enprison == 0)
                {
                    gotoligcol(0, 115);
                    printf("Joueur %s, c'est a toi ! (tape 1 pour lancer les des)\n", p[i].nom);
                }
                else
                {
                    gotoligcol(0, 115);
                    printf("Joueur %s, tu es en prison, fais un double en lancant les des (en tapant 1) pour sortir !\n", p[i].nom);
                }
                gotoligcol(3, 115);
                scanf("%d", &lance);
            }
        }

        if (lance == 1)
        {
            if(p[i].enprison == 1)  //Si le joueur est en prison, un dé de 6 lui permettra de sortir
            {

                if(p[i].carteprison == 0)
                {
                    for(int k=0; k<=nb; k++)
                    {
                        if(p[k].carteprison == 1)
                        {
                            int kc = 0, ic = 0, prixcarte = 0;
                            gotoligcol(0, 115);
                            printf("Joueur %s, %s est en prison et il se trouve que tu as en ta possession une carte sortie de prison",p[k].nom,p[i].nom);
                            gotoligcol(3, 115);
                            printf("\nSouhaites-tu lui vendre ta carte ? (1 pour oui, 0 pour non)\t");
                            scanf("%d",&kc);

                            if(kc == 1)
                            {
                                gotoligcol(6, 115);
                                printf("A quel prix souhaites-tu vendre ta carte ?\t");
                                scanf("%d",&prixcarte);
                                gotoligcol(9, 115);
                                printf("Joueur %s, %s accepte de te vendre sa carte prison pour %d€,\nAcceptes-tu l'offre ? (0 pour non, 1 pour oui) :\t ",p[i].nom,p[k].nom,prixcarte);
                                scanf("%d",&ic);
                                if(ic == 1)
                                {
                                    p[k].carteprison = 0;
                                    p[k].argent += prixcarte;
                                    p[i].carteprison = 1;
                                    p[i].argent -= prixcarte;
                                    k=4;
                                }
                                else
                                {
                                    gotoligcol(12, 115);
                                    printf("%s refuse l'offre\n",p[i].nom);
                                }
                            }
                        }
                    }
                }

                if(p[i].carteprison == 1)
                {
                    gotoligcol(0, 115);
                    printf("\nTu as une carte sortie de prison, veux-tu l'utiliser ?\n1 pour oui, 0 pour non : \t");
                    scanf("%d", &sortie);
                    if(sortie == 1)
                    {
                        p[i].position += 1;
                        p[i].carteprison = 0;
                        p[i].enprison = 0;
                    }
                    else
                    {
                        plateau(p,nb);
                        movePion(p,nb,c);
                        gotoligcol(0, 115);
                        printf("Tu gardes ta carte sortie de prison\n");
                    }

                }

                if(p[i].enprison == 1)
                {
                    int ic;

                    do
                    {

                        printf("Tape 1 pour tenter de faire un double et sortir de prison",p[i].nom);
                        printf("sinon, tu peux sortir de prison pour 150€ en tapant 2");
                        scanf("%d",&ic);
                    }
                    while(ic != 1 || ic !=2);

                    if(ic == 2)
                    {
                        if (p[i].argent >=150)
                        {
                            printf("150€ ont etes debites de votre compte pour sortir de prison, bon vent !");
                            p[i].argent -= 150;
                            p[i].toursprison = 0;
                            p[i].enprison = 0;
                        }
                        else
                        {
                            printf("Vous n'avez pas assez d'argent pour sortir, vous allez automatiquement lancer les des");
                            ic = 1;
                        }
                    }
                    if(ic == 1)
                    {
                        srand(time(NULL));
                        de1 = rand() %6+1;
                        de2 = rand() %6+1;
                        gotoligcol(3, 115);
                        printf("De 1 : %4d\t\tDe 2 : %4d\n",de1,de2);
                        lance = 0;
                        if(de1 == de2)
                        {
                            gotoligcol(6, 115);
                            printf("Bravo pour ce double ! Tu sors de prison\n");
                            p[i].enprison = 0;
                        }
                        else
                        {
                            p[i].toursprison += 1;
                            if(p[i].toursprison == 3)
                            {
                                p[i].enprison = 0;
                                p[i].toursprison = 0;
                            }
                        }
                    }
                }
            }

            else
            {

                if(mystere == 1){
                    srand(time(NULL));
                    int BAW = rand() %100+1;
                    if (BAW == 83){
                        printf("La benediction de Gazo s'est abattue sur vous, le BAW mystere vous recouvre de kichtas, +300 euros BAW");
                        p[i].argent += 300;
                    }
                }

                srand(time(NULL));
                de1 = rand() %6+1;
                de2 = rand() %6+1;
                p[i].position += de1+de2;

                if(p[i].position >= 31)
                {
                    p[i].position -= 31;
                    p[i].argent +=200;
                }
                gotoligcol(3, 115);
                printf("De 1 : %d\t\tDe 2 : %d\n\n",de1,de2);
                gotoligcol(6, 115);
                printf("Position du joueur %s : %4d\n\n",p[i].nom, p[i].position); //Idem, indiquer nom joueur au lieu du numero

                if (de1==de2 && compteurdouble<3)
                {
                    gotoligcol(9, 115);
                    printf("Tu as fais un double ! Rejoue\n\n");
                    compteurdouble +=1;
                }
                else
                {
                    compteurdouble = 0;
                }
                if(compteurdouble == 3)
                {
                    p[i].position = 25;
                    p[i].enprison = 1;
                    gotoligcol(12, 115);
                    printf("Quel chanceux !");
                    gotoligcol(15, 115);
                    printf("Tu viens de faire 3 doubles a la suite");
                    gotoligcol(18, 115);
                    printf("Cependant tu vas en prison\n\n");
                    compteurdouble = 0;
                }
                //printf("nique casse\n");
                movePion(p,nb,c);

                p = achatCarte(p, c,nb,i);

                if(p[i].position == 3 || p[i].position == 17)
                {
                    p=cartecommu(p,nb,i);
                }
                if(p[i].position == 8 || p[i].position == 31)
                {
                    p=cartechance(p,nb,i);
                }
                if(p[i].argent <= 0)
                {
                    p[i].faillite = 1;
                    gotoligcol(12, 115);
                    printf("Oh non ! %s tu as fait faillite...",p[i].nom);
                    gotoligcol(15, 115);
                    printf("Dommage mais c'est fini pour toi !\n");
                    cptfaillite +=1;
                    if(cptfaillite == nb-1)
                    {
                        fin = 1;
                        for(int k=0; k<nb; k++)
                        {
                            if (p[k].faillite == 0)
                            {
                                gotoligcol(18, 115);
                                printf("Fin de la partie !Bravo a toi, &s", p[k].nom);
                            }
                        }
                    }
                }
                if(compteurdouble == 1 || compteurdouble == 2)
                {
                    i-=1;
                }
            }
            gotoligcol(30, 115);
            do
            {

                printf("Votre tour est termine rentrez 1 pour passez au tour suivant");
                scanf("%d",&tourFini);
            }
            while(tourFini!=1);
            plateau(p,nb);
            movePion(p,nb,c);
            i+=1;
            lance = 0;
        }

    }
    while(fin!=1);
    free(p);
    free(c);
    return 0;
}

/*if(c[j].numero==26){
        gotoligcol(12, 115);
        printf("Bienvenue sur la case Impot, Comme bon citoyen francais vous payez 100e d'impot  ");
       (p)[i].argent -= 100;


        int ic = 0;


        if(ic == 2){
            printf("Ok...vous ne voulez pas jouer");
        }

        if(ic == 1)
        {
            srand(time(NULL));
            int s=0;
            int prop = 0;
            s=rand() % 4+1;


                        if (s==1){
                            do{
                            printf("A qui appartient ce slogan? I'm Lovin' it (Rentrer 1 2 3 4) ");
                            printf("1.Burger King");
                            printf("2.Mc do ");
                            printf("3.Nike");
                            printf("4.Slogan de Platon");
                            scanf("%d",&prop)
                            }while(prop<1 && prop>4)
                            if(prop ==2){
                                (p)[i].argent += 25;
                            }
                            else{
                                printf("Dommage mauvaise reponse \n");
                            }
                        }
                        if (s==2){
                            gotoligcol(15, 115);
                                do{
                                    printf("A qui appartient ce slogan? Just do it (Rentrer 1 2 3 4) ");
                                    printf("1.Adidas");
                                    printf("2.Coca ");
                                    printf("3.Nike");
                                    printf("4.Apple");
                                    scanf("%d",&prop)
                                    }while(prop<1 && prop>4)
                                    if(prop ==3){
                                        (p)[i].argent += 25;
                                    }
                                    else{
                                        printf("Dommage mauvaise reponse \n");
                                    }
                                }

                        if (s==3){
                            gotoligcol(15, 115);
                                do{
                                    printf("A qui appartient ce slogan? Think different (Rentrer 1 2 3 4) ");
                                    printf("1.kinder bueno");
                                    printf("2.Danette ");
                                    printf("3.Lacoste");
                                    printf("4.Apple");
                                    scanf("%d",&prop)
                                    }while(prop<1 && prop>4)
                                    if(prop ==4){
                                        (p)[i].argent += 25;
                                    }
                                    else{
                                        printf("Dommage mauvaise reponse \n");
                                    }
                                }
                        if (s==4){
                            gotoligcol(15, 115);
                            gotoligcol(15, 115);
                                do{
                                    printf("A qui appartient ce slogan? Parceque le monde bouge (Rentrer 1 2 3 4) ");
                                    printf("1.CIC");
                                    printf("2.Twix ");
                                    printf("3.Yves Rocher");
                                    printf("4.Caprice des Dieux");
                                    scanf("%d",&prop)
                                    }while(prop<1 && prop>4)
                                    if(prop ==1){
                                        (p)[i].argent += 25;
                                    }
                                    else{
                                        printf("Dommage mauvaise reponse \n");
                                    }
                                }
                        }
*/
