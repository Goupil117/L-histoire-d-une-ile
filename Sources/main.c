#include <stdlib.h>
#include <stdio.h>
#include "Personnage.h"

#define LimiteDeJoueur 5 // 6 Joueur, le 0 est compté

/*
    Erreur 1 = Pas assez d'espace de mémoire vive
*/

int main(int argc, char *argv[])
{   
    unsigned char nombreDeJoueur = 0;
    Joueur *TableauJoueur = NULL;
    unsigned char Jeu = 1;
    unsigned char menu = 0;

    while (Jeu)
    {
        printf("1. Solo\n2. Multijoueur (non disponible)\n3. Quitter\n");
        printf("User : ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            printf("> Lancement du solo\n");
            printf("> Nombre de joueur IA ?\n");
            printf("User :");
            scanf("%d", &nombreDeJoueur);

            if(nombreDeJoueur != NULL && nombreDeJoueur <= LimiteDeJoueur)
            {
                TableauJoueur = malloc(nombreDeJoueur * sizeof(Joueur));

                if(TableauJoueur == NULL)
                {
                    printf("Erreur 1");
                    exit(EXIT_FAILURE);
                }
                
                initialisationStats(TableauJoueur, nombreDeJoueur);

            }

            break;

        case 2:
            Jeu = 0;
            break;
        default:
            break;
        }
    }

    return EXIT_SUCCESS;
}