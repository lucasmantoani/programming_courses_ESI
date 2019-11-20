#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    void Convertisseur (int entree, int *PointeurNombreJour ,int *PointeurNombreMinutes,int *PointeurNombreHeures )
    {
        *PointeurNombreJour = entree/(24*60); 
        entree = entree-*PointeurNombreJour*1440;
        *PointeurNombreMinutes = entree/(60);
        *PointeurNombreHeures = entree%60;
    }
    
    int main(void)
    {
        int entree;

        printf("Nombres de minutes : ");
        scanf("%d", &entree);
        int nombreHeures = 0;
        int nombreMinutes = 0;
        int nombreJours = 0;

        int *PointeurNombreHeures = &nombreHeures;
        int *PointeurNombreMinutes = &nombreMinutes;
        int *PointeurNombreJour = &nombreJours;

        Convertisseur(entree, PointeurNombreJour, PointeurNombreHeures, PointeurNombreMinutes);
        printf("%d jour %d heure et %d minutes ",nombreJours, nombreHeures, nombreMinutes);

        return 0;
    }