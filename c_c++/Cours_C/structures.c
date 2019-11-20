#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char genreEleveESI[50];
enum Genre 
{
    FEMININ, MASCULIN, AUTRE
};

typedef enum Genre Genre;

struct eleveESI 
{
    int moyenne;
    char nom[50];
    char prenom[50];
    Genre genreEleve;
};

void montrerInfos(struct eleveESI *eleveESI);
void changerInfos(struct eleveESI *eleveESI);
void displayGender (enum Genre c);


void montrerInfos(struct eleveESI *eleveESI) 
{

    printf("\nPrénom : %s\n", eleveESI->prenom);
    printf("Nom : %s\n", eleveESI->nom);
    printf("Moyenne : %d\n", eleveESI->moyenne);
    displayGender(eleveESI->genreEleve);
}

void displayGender (enum Genre c)
{
    switch (c)
    {
    case FEMININ:
        printf("FEMININ");
        break;
    case MASCULIN:
        printf("MASCULIN");
        break;
    case AUTRE:
        printf("AUTRE");
        break;
    }
}

void changerInfos(struct eleveESI *eleveESI) 
{
    montrerInfos(eleveESI);

    printf("\n Nouveau prenom : ");
    scanf(" %s", eleveESI->prenom);
    printf("\n Nouveau nom : ");
    scanf(" %s", eleveESI->nom);
    printf("\n Nouvelle moyenne: ");
    scanf(" %d", &eleveESI->moyenne);
    printf("\n Nouveau genre: ");
    scanf(" %d", &eleveESI->genreEleve);

    montrerInfos(eleveESI);

}

int main()
{
    struct eleveESI Lucas = {15,"Mantoani","Lucas",0};

    changerInfos(&Lucas);
    


    return 0;
}