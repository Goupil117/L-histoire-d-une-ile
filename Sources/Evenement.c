#include <time.h>
#include "Evenement.h"
#include "Personnage.h"
#include "Constantes.h"

void  initialiser_hasard()
{
    srand(time(NULL));
}

int Tirage(int min, int max)
{
    int nombreTirage = 0;

    nombreTirage = (rand() % (max - min + 1)) + min;

    return nombreTirage;
}

int AttributionRole(unsigned char nombreDeJoueur, Joueur TableauJoueur[])
{
    for (int u = 0; u <= nombreDeJoueur; u++)
    {
        TableauJoueur[u].role = Tirage(1, nombreDeJoueur);

        for ( int i = 0; i <= u-1; i++)
        {
            if(TableauJoueur[u].role == TableauJoueur[i].role)
            {
                TableauJoueur[u].role = 0;

                i = u-1;
                u--;
            }
        }
    }
}

void Dormir(Joueur *joueurActuelle)
{

    float result = NULL;

    switch (joueurActuelle->emotion)
    {
    case Joie:
        int T = Tirage(0, 100);
        T + (T * (10 + ) / )
        break;
    
    default:
        break;
    }
}

