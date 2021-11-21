#ifndef DEF_Personnage
#define DEF_Personnage

typedef struct Joueur
{
    char nom[41];
    unsigned char role;
    unsigned char comportement;
    unsigned char vie;
    unsigned char eau;
    unsigned char nourriture;
    unsigned char sommeil;
    unsigned char evenement_ile;
}joueur;

#endif