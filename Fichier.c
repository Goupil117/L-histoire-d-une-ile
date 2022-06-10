#include "Fichier.h"

char Chargement_Noms_Joueur(char nom[], unsigned char tailleTableau, unsigned char numeroJoueur)
{
    FILE *fichier = NULL;

    fichier = fopen("data/nom.txt", "r");

    if(fichier != NULL)
    {
        unsigned char i = 0;
        unsigned char x = 0;

        do
        {
            nom[i] = fgetc(fichier);

            if(nom[i] == '\n')
            {
                x++;
                if(x == numeroJoueur)
                {
                    nom[i] = '\0';
                }
            }
        } while (x == numeroJoueur);

        fclose(fichier);
    }
    else
    {
        return 0;
    }

    return ;
}