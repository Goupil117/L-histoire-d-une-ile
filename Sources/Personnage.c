#include "Personnage.h"

/*
     Fonction pour initialiser les stats de base
*/

unsigned char initialisationStats(Joueur* Tableau_personnage, unsigned char nombreJoueur)
{
    unsigned char verif = 0;

    // initialisation des stats de base
    for(int i=0; i<nombreJoueur; i++)
    {
        Tableau_personnage[i].vie = 100;
        Tableau_personnage[i].eau = 100;
        Tableau_personnage[i].nourriture = 100;
        Tableau_personnage[i].sommeil = 100;

        // vérification de la bonne initialisation des stats
        if(Tableau_personnage[i].vie == 100 && Tableau_personnage[i].eau == 100 && Tableau_personnage[i].nourriture == 100 && Tableau_personnage[i].sommeil == 100)
        {
            verif++;
        }
    }

    // Si verif est égal à nombreJoueur alors tout les stats on étaient initialiser
    if(verif == nombreJoueur)
    {
        return 1;
    }

    // Échec dans l'initialisation des stats de base
    return 0;
}


/* 
    Fonction pour initialiser les rôles des joueurs
*/

unsigned char initialisationRole(Joueur* Tableau_personnage, unsigned char numero, unsigned char hasard)
{
    unsigned char verif = 0;

    switch(hasard)
    {
        case Leader:
            Tableau_personnage[numero].role = Leader;

            if(Tableau_personnage[numero].role == Leader)
            {
                verif = 1;
            }
            break;

        case Chasseur:
            Tableau_personnage[numero].role = Chasseur;

            if(Tableau_personnage[numero].role == Chasseur)
            {
                verif = 1;
            }
            break;

        case Ingenieure:
            Tableau_personnage[numero].role = Ingenieure;

            if(Tableau_personnage[numero].role == Ingenieure)
            {
                verif = 1;
            }
            break;

        case Collecteur:
            Tableau_personnage[numero].role = Collecteur;

            if(Tableau_personnage[numero].role == Collecteur)
            {
                verif = 1;
            }
            break;

        case Explorateur:
            Tableau_personnage[numero].role = Explorateur;

            if(Tableau_personnage[numero].role == Explorateur)
            {
                verif = 1;
            }
            break;

        case Cuisinier:
            Tableau_personnage[numero].role = Cuisinier;

            if(Tableau_personnage[numero].role == Cuisinier)
            {
                verif = 1;
            }
            break;

        default:
            Tableau_personnage[numero].role = 0;

            if(Tableau_personnage[numero].role == 0)
            {
                verif = 1;
            }
            break;
    }

    if(verif == 1)
    {
        return 1;
    }

    return 0;
}

/*
     Fonction pour initialiser les comportements des joueurs
*/

unsigned char initialisationComportement(Joueur* Tableau_personnage, unsigned char numero, unsigned char hasard)
{
    unsigned char verif = 0;

    switch(hasard)
    {
        case Enthousiasme:
            Tableau_personnage[numero].comportement = Enthousiasme;

            if(Tableau_personnage[numero].comportement == Enthousiasme)
            {
                verif = 1;
            }
            break;

        case Melancolique:
            Tableau_personnage[numero].comportement = Melancolique;

            if(Tableau_personnage[numero].comportement == Melancolique)
            {
                verif = 1;
            }
            break;

        case Colerique:
            Tableau_personnage[numero].comportement = Colerique;

            if(Tableau_personnage[numero].comportement == Colerique)
            {
                verif = 1;
            }
            break;

        case Arrogant:
            Tableau_personnage[numero].comportement = Arrogant;

            if(Tableau_personnage[numero].comportement == Arrogant)
            {
                verif = 1;
            }
            break;

        case Paresseux:
            Tableau_personnage[numero].comportement = Paresseux;

            if(Tableau_personnage[numero].comportement == Paresseux)
            {
                verif = 1;
            }
            break;

        case Calme:
            Tableau_personnage[numero].comportement = Calme;

            if(Tableau_personnage[numero].comportement == Calme)
            {
                verif = 1;
            }
            break;

        case Brave:
            Tableau_personnage[numero].comportement = Brave;

            if(Tableau_personnage[numero].comportement)
            {
                verif = 1;
            }
            break;

        default:
            Tableau_personnage[numero].comportement = 0;

            if(Tableau_personnage[numero].comportement == 0)
            {
                verif = 1;
            }
            break;
    }

    if(verif == 1) 
    {
        return 1;
    }

    return 0;
}

/*
     Fonction pour initialiser les comportements des joueurs 
*/
unsigned char initialisationNom(Joueur* Tableau_personnage, unsigned char numero, unsigned char hasard)
{
    
}

/*
     Fonction pour attribué un événement
*/
unsigned char AttributionEvenement(Joueur* Tableau_personnage, unsigned char numero, unsigned char hasard)
{
    unsigned char verif = 0;

    switch (hasard)
    {
    case Blesse:
        Tableau_personnage[numero].etat = Blesse;

        if(Tableau_personnage[numero].etat = Blesse)
        {
            verif = 1;
        }
        break;
    
    case Malade:
        Tableau_personnage[numero].etat = Malade;

        if(Tableau_personnage[numero].etat == Malade)
        {
            verif =1;
        }
        break;

    case Traumatisme:
        Tableau_personnage[numero].etat = Traumatisme;

        if(Tableau_personnage[numero].etat == Traumatisme)
        {
            verif =1;
        }
        break;
    
    default:
        Tableau_personnage[numero].etat = 0;

        if(Tableau_personnage[numero].etat == 0)
        {
            verif = 1;
        }
        break;
    }

    if(verif == 1)
    {
        return 1;
    }

    return 0;
}