#include <stdio.h>
#include <stdlib.h> // Les directives de prépocesseur   
#include <math.h>
#include <time.h>

    float calculerAireRectangle(float longueur,float largeur) 
    {
        float aireTotale = longueur * largeur;

        return aireTotale;
    }

int main() {
    /*

    //////// Exercice : Faire une calculatrice //////////

    char operateur;
    int premierNombre,secondNombre;
    printf("Choisisez un opérateur (+, -, *, %%): ");
    scanf("%c", &operateur);

    printf("entrez deux nombres: ");
    scanf("%d %d",&premierNombre, &secondNombre);

    switch(operateur)
    {
        case '+':
            printf("%d + %d = %d",premierNombre, secondNombre, premierNombre + secondNombre);
            break;
        case '-':
            printf("%d - %d = %d",premierNombre, secondNombre, premierNombre - secondNombre);
            break;
        case '*':
            printf("%d * %d = %d",premierNombre, secondNombre, premierNombre * secondNombre);
            break;
        case '/':
            printf("%d / %d = %d",premierNombre, secondNombre, premierNombre / secondNombre);
            break;
        case '%':
            printf("%d %% %d = %d",premierNombre, secondNombre, premierNombre % secondNombre);
            break;
        
        default:
            printf("l'opérateur choisi ne fait pas parti de ceux listés \n ");
    }
    */

    /* ///// Exercice en PHP /////


    int star1 = 10;
    int star2 = 0;
    int i;
    int j;
    int var = 5;

     

    for (i=0; i <= star1; i++) 
    {
        for(j=0; j < i; j++) 
        {
            printf("*");    
        }
        printf("\n");
    } 
    */


    ///// Exercice pyramide /////


    /*int d,i,j,k; // D = nombre que l'user à rentré ;
    
    printf ("combien de lignes ?");
    scanf ("%d",&d);
    for (i=0; i<d; i++)
    {
        for (j=0; j<d-  i ; j++)
        {
            printf(" ");
        }
        for (k=0; k< i *2; k++)
        {
            printf("*");
        }
        printf("\n");
    }*/


    ///// Exercice juste prix /////

    /*
    char choix;
    int nombreHypotetique = 0, nombreMystere = 0, compteur = 0, choixMenu = 1;
    const int MAX = 100, MIN = 1;
    srand (time(NULL));  
     
        printf("=== Bienvenue dans le jeu du juste prix ===  \n\n\n");
     
            do
            {
                    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
                do
                {
                    printf("\n Trouvez le juste prix entre 1 et 100  :  ");
                    
                    if(scanf(" %d", &nombreHypotetique) == 1) {

                        printf("\n");
                        compteur++;
                    
                        if (nombreMystere < nombreHypotetique)
                            printf("c'est moins\n");
                    
                        else if (nombreMystere > nombreHypotetique)
                            printf("c'est plus\n");
                    
                        else
                            printf("vous avez trouve le juste prix en %d coups\n", compteur);
                    }

                } while (nombreHypotetique != nombreMystere );

                printf("Voulez vous continuer (Y,N)");
                if(scanf(" %c", &choix)==1){
                    compteur =0;
                }
                else printf("Au revoir champion !!");
                       
            } while(choix == 'Y');
    */



    float v1 = 10.5;
    float v2 = 15.5;
    float v3 = 20.5;
    

   printf("%f", calculerAireRectangle(v1,v2));
   


    return 0;
}
