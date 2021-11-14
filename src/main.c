#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    unsigned char tours = 0;
    unsigned char choix = 0;

    printf("> Bienvenue sur le jeu de l ile deserte\n");
    printf("> Menu :\n 1. Solo\n");
    printf("user : ");
    scanf("%d", &choix);

    if(choix==1)
    {
        printf("> Partie solo en cours de lancement");
    }
    else
    {
        printf("> Je n ai pas compris votre demande !");
    }
    return EXIT_SUCCESS;
}

//exit(EXIT_FAILURE);