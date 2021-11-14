typedef struct Joueur
{
    char nom[41];
    char role[21];
    char comportement[21];
    unsigned char vie = 100;
    unsigned char eau= 100;
    unsigned char nourriture=100;
    unsigned char sommeil = 100;
    char evenement[21];
}joueur;