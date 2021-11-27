#ifndef DEF_Personnage
#define DEF_Personnage

typedef struct Joueur Joueur;
struct Joueur
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

// Fonction pour initialiser les stats de base
unsigned char initialisationStats(Joueur* Tableau_personnage, unsigned char nombreJoueur);

// Fonction pour initialiser les rôles des joueurs
void initialisationRole(Joueur* Tableau_personnage, unsigned char numero, unsigned char hasard);

// Fonction pour initialiser les comportements des joueurs
void initialisationComportement(Joueur* Tableau_personnage, unsigned char numero, unsigned char hasard);

#endif