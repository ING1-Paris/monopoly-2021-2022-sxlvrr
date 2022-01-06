
#include "biblio.h"


/////////////JOUEUR///////////////


int main()
{
    int i = 1, de1 = 0, de2 = 0, nb = 0, lance = 0, fin = 0 , compteurdouble = 0;
    int prison = 0; //TEST ICI, SERA DANS STRUCT DE JOUEUR A LA FIN

    struct t_joueur *p;
    p=initp();
    struct carte1 *c;
    c=initc();
    // variable
    menu();

    ///////////////PLATEAU////////////////////////////////
    system("cls");
    caseNew(0, 0, 0, 15, "Depart");     // Depart
    caseNew(0, 13, 0, 9, "Wish");       // Wish
    caseNew(0, 26, 0, 9, "Epicier");    // Epicier
    caseNew(0, 39, 0, 15, "Commu");     // Commu 3
    caseNew(0, 52, 0, 9, "Action");     // Action
    caseNew(0, 65, 0, 7, "EDF");        // EDF
    caseNew(0, 78, 0, 13, "LIDL");      // LIDL
    caseNew(0, 91, 0, 13, "Franprix");  // Fraprix
    caseNew(5, 0, 0, 15, "Chance");     // CHANCE 31
    caseNew(5, 91, 0, 15, "Chance");    // CHANCE 8
    caseNew(10, 0, 0, 1, "Bugatti");    // Bugatti
    caseNew(10, 91, 0, 13, "Monoprix"); // Monoprix
    caseNew(15, 0, 0, 15, "Impot");     // Impot
    caseNew(15, 91, 0, 7, "Visite");    // Visite Prison
    caseNew(20, 0, 0, 7, "SNCF");       // SNCF
    caseNew(20, 91, 0, 2, "Nike");      // NIkE
    caseNew(25, 0, 0, 1, "Rolex");      // ROLEX
    caseNew(25, 91, 0, 7, "AirFrance"); // AIRFRANCE
    caseNew(30, 0, 0, 4, "Enchere");    // ENCHERE
    caseNew(30, 91, 0, 2, "Adidas");    // ADIDAS
    caseNew(35, 0, 0, 8, "Prison");     // Prison
    caseNew(35, 91, 0, 2, "Rebook");    // Rebook
    caseNew(40, 0, 0, 14, "Gucci");     // GUCCI
    caseNew(40, 91, 0, 15, "Station");  // STATIONNEMENT
    caseNew(45, 0, 0, 7, "Taxes");      // TAXE
    caseNew(45, 13, 0, 14, "L-V");      // LV
    caseNew(45, 26, 0, 7, "RATP");      // RATP
    caseNew(45, 39, 0, 7, "Suez");      // Suez
    caseNew(45, 52, 0, 12, "Xaomi");    // Xaomi
    caseNew(45, 65, 0, 12, "Samsung");  // Samsung
    caseNew(45, 78, 0, 15, "Commu");    // COMMU 17
    caseNew(45, 91, 0, 12, "Apple");    // APPLE
    gotoligcol(0, 115);
    printf("%d", p[0].position);

    printf("%d", p[0].position);

    while(nb <=1 || nb >= 5){
        printf("Combien de joueurs ?\n");
        scanf("%d",&nb);
    }

    //int d[nb];

    for(i=1;i<=nb;i++){ //Setup position joueurs
        p[i].position = 0;
    }

    i = 0;

    do{
        if (lance == 0){
            if(i>=1 || i<=5){
                i+=1;
            }
            if(p[i].faillite == 1){
                    i+=1;
                }
            if(i>nb || i<nb){
                i=1;
            }
            while(lance!=1){
                if(p[i].position!=25){
                    printf("Joueur %c, c'est a toi ! (tape 1 pour lancer les des)\n", p[i].nom);
                }
                else{
                    printf("Joueur %c, tu es en prison, fais un double en lancant les des (en tapant 1) pour sortir !\n", p[i].nom);
                }
                scanf("%d", &lance);
            }
        }

        if (lance == 1){
            if(p[i].position == 25){ //Si le joueur est en prison, un dé de 6 lui permettra de sortir
                p[i].enprison = 1;
                srand(time(NULL));
                de1 = rand() %6+1;
                de2 = rand() %6+1;
                printf("De 1 : %4d\nDe 2 : %4d\n",de1,de2);
                lance = 0;
                if(de1 == de2){
                    p[i].position += 1;
                    printf("Bravo pour ce double ! Tu sors de prison\n");
                }
            }
            else{
                if(prison == 1){
                    p[i].position -= 1;
                    p[i].enprison = 0;
                }
                srand(time(NULL));
                de1 = rand() %6+1;
                de2 = rand() %6+1;
                p[i].position += de1+de2;

                if(p[i].position >= 31){
                    p[i].position -= 31;
                }

                printf("De 1 : %d\nDe 2 : %d\n\n",de1,de2);
                printf("Position du joueur %d : %4d\n\n",i, p[i].position); //Idem, indiquer nom joueur au lieu du numero

                if (de1==de2 && compteurdouble<3){
                    printf("Tu as fais un double !\nRejoue\n\n");
                    compteurdouble +=1;
                }
                else{
                    compteurdouble = 0;
                }
                if(compteurdouble == 3){
                    p[i].position = 25;
                    printf("Quel chanceux ! Tu viens de faire 3 doubles a la suite\nCependant tu vas en prison\n\n");
                    compteurdouble = 0;
                }
                if(compteurdouble == 1 || compteurdouble == 2){
                    i-=1;
                }
                movePion(p);
                achatCarte(p, c);
                lance = 0;
            }
        }
    }while(fin==0);
    free(p);
    cartechance(p, i);

    return 0;
}
