#include <stdio.h>
#include <string.h>

int main() {

  // Le mot à deviner
  char motTopSecret[100];
  printf("Entrez un mot a deviner: ");
  fflush(stdout);
  scanf(" %s", motTopSecret);

  // Création du tableau mask - mask[i] est vrai si
  // la lettre s[i] a été trouvée.  Le masque 
  // doit être initialisé à faux.

  int N = strlen(motTopSecret); // N = longueur du mot top secret !
  int essaisTotal = 0;
  int essaiEchecs = 0;

  int mask[N]; // mask[5] par exemple

  for (int i=0; i < N; ++i) 
  {
    mask[i] = 0;
  }

  // Boucle à chaque essai

  int gameover = 0;

  while (! gameover) // Tant que le jeu n'est pas fini
  {
    // Affiche une * pour chaque lettre non devinée 
    printf("Le mot secret de la mort est : ");

    for(int j=0; j < N; ++j) 
    {
      if (mask[j]) 
      {
        printf("%c", motTopSecret[j]);
      }
      else 
      {
        printf("*");
      }
    }
    
    printf("\n");

    // Prochain essai
    
    char prochainEssai;
    printf("Lettre ? ");
    fflush(stdout);
    scanf(" %c", &prochainEssai);

    // Marque comme vrai toutes les positions devinées.
    for(int k=0; k < N; ++k) 
    {
      if (motTopSecret[k] == prochainEssai) 
      {
	    mask[k] = 1;
      }
    }

    // Determine si le joueur à gagné ou pas ;) 
    gameover = 1;

    for(int l = 0; l < N; ++l) 
    {
      if (!mask[l]) 
      {
        essaisTotal += 1;
        gameover = 0;
        break;
      }
    }
  }

  // Message de victoire
  printf("BG !! Le mot était \"%s\".\n \n", motTopSecret);
  printf("Nombre d'essais :  %d \n \n",essaisTotal);

  char choixFinPartie = "";
  printf("Voulez vous rejouer une partie ? (Y|N) ");
  scanf(" %c", &choixFinPartie);

  if(choixFinPartie == "Y") {
      system("cls");
  } else if (choixFinPartie == "N") {
      system("cls");
  }
  return 0;
}