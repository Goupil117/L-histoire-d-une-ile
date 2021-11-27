#include <time.h>

void  initialiser_hasard()
{
    srand(time(NULL));
}

unsigned char Tirage(unsigned char min, unsigned char max)
{
    unsigned char nombreTirage = NULL;

    nombreTirage = (rand() % (max - min + 1)) + min;

    return nombreTirage;
}

unsigned char NumeroDejaTire()
{
    
}