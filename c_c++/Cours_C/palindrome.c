#include <stdio.h>
#include <stdlib.h> // Les directives de prépocesseur   
#include <math.h>
#include <time.h>
#include <string.h>

int main()
{
    char text[20], reverse_text[20];
    int i,n, length = 0;

    printf("Entrez un mot : ");
    scanf ("%s",text);

    for (i = 0; text[i] != '\0'; i++)
    {
        length++; //Calcul de la taille du texte
    }
    
    //Inverser le mot et le stocker dans reverse8text
    for (i = length - 1; i >= 0; i--)
    {
        reverse_text[length - i - 1] = text[i];
    }

    // compare les deux tableaux.
    for (n = 1, i = 0; i < length; i++)
    {
        if (reverse_text[i] != text[i])
        n = 0;
    }

    if (n == 1)
        printf("%s est un palindrome bg !!.", text);
    else
        printf("%s est pas un palindrome mdr", text);

    return 0;
}