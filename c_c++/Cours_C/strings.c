#include <stdio.h>
#include <stdlib.h> // Les directives de prépocesseur   
#include <math.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    char s[100];

    printf ("Quel est votre prénom ? ");
    scanf ("%s",s);

    printf("Ah, votre prénom est donc : %s ", s);
    printf("\n");
    
    int i;

    for(i = 0; s[i] != '\0'; ++i); 
    {
        printf("Longueur de la chaîne : %d", i);
        printf("\n");
    }

    return 0;
}
