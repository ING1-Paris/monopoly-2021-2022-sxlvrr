#include "biblio.h"


/////////////JOUEUR///////////////


int main()
{
    int i = 1, de1 = 0, de2 = 0, nb = 0, lance = 0, fin = 0, compteurdouble = 0, sortie = 0, cptfaillite=0, mystere = 5,tourFini;//Variables

    struct t_joueur *p; // Tableau de structure d'un joueur

    p=initp();

    struct carte1 *c = initc();

    menu(p);
    do
    {
        gotoligcol(0,92);
        printf("Combien de joueurs ?\t\t");                         //Setup nbre de joueurs
        scanf("%d",&nb);
    }
    while(nb <= 1 || nb > 4);    //Blindage (max de joueurs à 4, minimum à 2)

    gotoligcol(3,89);
    printf("Il y a %d joueurs dans la partie\n",nb);
    for(int k=0; k<nb; k++)
    {
        gotoligcol(6+2*k,91);
        printf("joueur %d quel est votre nom?\t\t ",p[k].numero);   //Attribution de noms aux joueurs
        scanf("%s",&p[k].nom);
    }
     while(mystere > 1){    //Mystere...
            printf("Voulez-vous activer le BAW mystere durant cette partie ? (1 pour oui, sinon 0)");
            scanf("%d",&mystere);
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

            if(p[i].faillite == 1)  //Si un joueur a fait faillite, on passe son tour et il n'aura aucune incidence sur la partie
            {
                i+=1;
            }
            if(i>=nb || i<0)    //Si tous les joueurs ont fini leur tour, retour au joueur 1
            {
                i=0;
            }
            while(lance!=1)
            {

                if(p[i].enprison == 0)  //Message pour le joueur s'il n'est pas en prison
                {
                    gotoligcol(0, 115);
                    printf("Joueur %s, c'est a toi ! (tape 1 pour lancer les des)\n", p[i].nom);
                }
                else                    //Message pour le joueur s'il est en prison
                {
                    gotoligcol(0, 115);
                    printf("Joueur %s, tu es en prison\n", p[i].nom);
                }
                gotoligcol(3, 115);
                scanf("%d", &lance);
            }
        }

        if (lance == 1)
        {
            if(p[i].enprison == 1)  //Si le joueur est en prison, un dé de 6 lui permettra de sortir
            {

                if(p[i].carteprison == 0)   //S'il ne possède pas de carte prison, on lui propose d'en acheter à un autre
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
                                printf("A quel prix souhaites-tu vendre ta carte ?\t"); //Setup prix de vente de la carte sortie de prison
                                scanf("%d",&prixcarte);
                                gotoligcol(9, 115);
                                printf("Joueur %s, %s accepte de te vendre sa carte prison pour %d euros,\nAcceptes-tu l'offre ? (0 pour non, 1 pour oui) :\t ",p[i].nom,p[k].nom,prixcarte);
                                scanf("%d",&ic);
                                if(ic == 1)
                                {
                                    if (p[i]. argent >= prixcarte){
                                        p[k].carteprison = 0;
                                        p[k].argent += prixcarte;
                                        p[i].carteprison = 1;
                                        p[i].argent -= prixcarte;
                                        k=4;
                                    }
                                    else{
                                        printf("Tu n'as pas assez d'argent pour acheter cette carte !");
                                        ic=0;
                                    }
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

                if(p[i].carteprison == 1)   //Si le joueur en prison possède une carte sortie de prison, il peut l'utiliser et sortir, ou bien la conserver et tenter de faire un double
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
                        movePion(p,nb,c,i);
                        terrain(i,p,c);
                        displayM(p,c,i,nb);
                        gotoligcol(0, 115);
                        printf("Tu gardes ta carte sortie de prison\n");
                    }

                }

                if(p[i].enprison == 1)  //Tentative de faire un double aux dés pour sortir de prison ou bien payer 150 euros pour sortir tout de suite
                {
                    int ic;

                    do
                    {
                        gotoligcol(3,115);
                        printf("Tape 1 pour tenter de faire un double et sortir de prison");
                        gotoligcol(6,115);
                        printf(" sinon, tu peux sortir de prison pour 150 euros en tapant 2");
                        scanf("%d",&ic);
                    }
                    while(ic != 1 && ic !=2);

                    if(ic == 2)
                    {
                        if (p[i].argent >=150)
                        {
                            gotoligcol(9,115);
                            printf("150 euros ont etes debites de votre compte pour sortir de prison, bon vent !");
                            p[i].argent -= 150;
                            p[i].toursprison = 0;
                            p[i].enprison = 0;
                        }
                        else
                        {
                            gotoligcol(9,115);
                            printf("Vous n'avez pas assez d'argent pour sortir, vous allez automatiquement lancer les des");
                            ic = 1;
                        }
                    }
                    if(ic == 1) //Tentative de double aux dés
                    {
                        srand(time(NULL));
                        de1 = rand() %6+1;
                        de2 = rand() %6+1;
                        gotoligcol(3, 115);
                        printf("De 1 : %4d\t\tDe 2 : %4d\n",de1,de2);
                        lance = 0;
                        if(de1 == de2)
                        {
                            gotoligcol(9, 115);
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

            else    //Lancement du tour "déplacement" pour le joueur
            {

                if(mystere == 1){   //Activation du bonus "mystère" qui confère 300 euros en plus au joueur qui joue actuellement
                    srand(time(NULL));
                    int BAW = rand() %100+1;
                    if (BAW == 83){
                        gotoligcol(27,115);
                        printf("La benediction de Gazo s'est abattue sur vous, le BAW mystere vous recouvre de kichtas, +300 euros BAW");
                        p[i].argent += 300;
                    }
                }

                srand(time(NULL));  //Génération des deux dés
                de1 = rand() %6+1;
                de2 = rand() %6+1;
                p[i].position += de1+de2;   //Setup de la position du joueur en fonction des résultats des dés
                c[20].loyer =4*de1+de2;
                c[20].loyerGr=10*de1+de2;
                c[5].loyer =4*de1+de2;
                c[5].loyerGr=10*de1+de2;
                plateau(p,nb);
                terrain(i,p,c);
                displayM(p,c,i,nb); //Affichage des maisons sur le plateau

                if(p[i].position >= 31) //Passage par la case départ
                {
                    p[i].position -= 31;    //On prend la position du joueur qu'on soustrait par 31 afin qu'il reste dans les cases du tableau
                    p[i].argent +=200;      //On donne 200 euros au joueur puisqu'il passe par la case départ
                }
                gotoligcol(3, 115);
                printf("De 1 : %d\t\tDe 2 : %d\n\n",de1,de2);   //affichage des résultats des dés
                gotoligcol(6, 115);
                printf("Position du joueur %s : %4d\n\n",p[i].nom, p[i].position); //Affichage de la position du joueur

                if (de1==de2 && compteurdouble<3)   //Si le joueur fait un double, il rejoue
                {
                    gotoligcol(9, 115);
                    printf("Tu as fais un double ! Rejoue\n\n");
                    compteurdouble +=1;
                }
                else
                {
                    compteurdouble = 0; //Annulation de la série de doubles
                }
                if(compteurdouble == 3) //Si la série de doubles atteind 3, alors le joueur part en prison pour excès de chance
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

                movePion(p,nb,c,i);

                p = achatCarte(p, c,nb,i);  //Proposition au joueur d'acheter une carte
                c = addMaison(p,c,nb,i);    //Propose au joueur d'ajouter une maison à sa propriété

                if(p[i].position==25){  //Si le joueur s'arrête sur la case 25 (prison), alors il est emprisonné
                    gotoligcol(12,115);
                    printf("Tu es en prison ... :(");
                    p[i].enprison=1;
                }
                if(p[i].position == 3 || p[i].position == 17)   //Si le joueur s'arrête sur une carte communauté, il la lit et obtient son action
                {
                    p=cartecommu(p,nb,i);
                }
                if(p[i].position == 8 || p[i].position == 31)   //Idem mais pour carte chance
                {
                    p=cartechance(p,nb,i);
                }

                if(p[i].argent <= 0)    //Si le joueur n'a plus d'argent, il tombe en faillite et ne jouera plus
                {
                    p[i].faillite = 1;
                    gotoligcol(12, 115);
                    printf("Oh non ! %s tu as fait faillite...",p[i].nom);
                    gotoligcol(15, 115);
                    printf("Dommage mais c'est fini pour toi !\n");
                    cptfaillite +=1;
                    if(cptfaillite == nb-1) //Si tous les joueurs sont en faillite (sauf le gagnant), affichage du gagnant et félicitations
                    {
                        fin = 1;
                        for(int k=0; k<nb; k++)
                        {
                            if (p[k].faillite == 0)
                            {
                                gotoligcol(18, 115);
                                printf("Fin de la partie !Bravo a toi, %s", p[k].nom);
                            }
                        }
                    }
                }

                if(compteurdouble == 1 || compteurdouble == 2)  //Si le joueur fait un double, alors il rejoue
                {
                    i-=1;
                }
            }
            gotoligcol(36, 115);
            do
            {

                printf("Votre tour est termine rentrez 1 pour passer au tour suivant");
                scanf("%d",&tourFini);
            }
            while(tourFini!=1);
            plateau(p,nb);
            movePion(p,nb,c,i);
            terrain(i,p,c);
            displayM(p,c,i,nb);
            i+=1;
            lance = 0;
        }

    }
    while(fin!=1);
    free(p);
    free(c);
    return 0;
}
