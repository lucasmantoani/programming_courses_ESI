#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int tableau[6] = {2,4,6,8,10,4};

float moyenne(float tableau) 
{
    for (int i = 0; i < 6; i++) 
    {  
        float moyenne;
        moyenne +=i;
        printf("%f", moyenne);
    }
}

int plusGrandNombre()
{
    int plusGrandNombre = tableau[0];

    for (int i = 0; i < 6; i++) 
    {
        if (plusGrandNombre < tableau[i]) 
            {
                plusGrandNombre = tableau[i];
            }
        i++;
    }

    printf("\n Le plus grand nombre est : %d", plusGrandNombre);
}


int main() {
    
   int Tableau[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int nbBoucle;

   for(nbBoucle = 9; nbBoucle >= 0; nbBoucle--)
      printf("%d ", Tableau[nbBoucle]);
      
   return 0;
}