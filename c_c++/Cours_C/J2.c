#include <stdio.h>
#include <stdlib.h> // Les directives de prépocesseur   
#include <math.h>
#include <time.h>

    int puissanceDunNombre (int a, int b)
    {
        int c = 1;
            for (int i = 0; i < b; i++)
            {
              c *= a ;
            }

        return c;
    }

     int factoriel (int a) {
         int resultat;
     }

int main() {
  
    printf("%d", puissanceDunNombre(10, 6));
    printf("\n");

    return 0;
}