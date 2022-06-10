#ifndef DEF_Personnage
#define DEF_Personnage

#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    char nom[41];
    unsigned char role;
    unsigned char emotion;
    unsigned char vie;
    unsigned char eau;
    unsigned char nourriture;
    unsigned char sommeil;
    unsigned char trait_de_sante;
}Joueur;

// Fonction pour initialiser les stats de base
unsigned char initialisationStats(Joueur* Tableau_personnage, unsigned char nombreJoueur);

// Fonction pour initialiser les rôles des joueurs
unsigned char initialisationRole(Joueur* Tableau_personnage, unsigned char numero, unsigned char hasard);

// Fonction pour initialiser les comportements des joueurs
unsigned char initialisationComportement(Joueur* Tableau_personnage, unsigned char numero, unsigned char hasard);

// Fonction pour initialiser les noms des joueurs

unsigned char initialisationNom(Joueur* Tableau_personnage, unsigned char numero, unsigned char hasard);

// Fonction pour attribué un événement

unsigned char AttributionEvenement(Joueur* Tableau_personnage, unsigned char numero, unsigned char hasard);

#endif