/*
     Fonction pour initialiser les stats de base
*/

unsigned char initialisationStats(Personnage* Tableau_personnage, nombreJoueur)
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
        if(Tableau_personnage[i].vie = 100 && Tableau_personnage[i].eau == 100 && Tableau_personnage[i].nourriture == 100 && Tableau_personnage[i].sommeil = 100;)
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

void initialisationRole(Personnage* Tableau_personnage, unsigned char numero, unsigned char hasard)
{
    unsigned char verif = 0;

    switch(hasard)
    {
        case 0:
            Tableau_personnage[numero].role = 1;

            if(Tableau_personnage[numero].role == 1)
            {
                verif = 1;
            }
            break;

        case 1:
            Tableau_personnage[numero].role = 2;

            if(Tableau_personnage[numero].role == 2)
            {
                verif = 1;
            }
            break;

        case 2:
            Tableau_personnage[numero].role = 3;

            if(Tableau_personnage[numero].role == 3)
            {
                verif = 1;
            }
            break;

        case 3:
            Tableau_personnage[numero].role = 4;

            if(Tableau_personnage[numero].role == 4)
            {
                verif = 1;
            }
            break;

        case 4:
            Tableau_personnage[numero].role = 5;

            if(Tableau_personnage[numero].role == 5)
            {
                verif = 1;
            }
            break;

        case 6:
            Tableau_personnage[numero].role = 6;

            if(Tableau_personnage[numero].role == 6)
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

void initialisationComportement(Personnage* Tableau_personnage, unsigned char numero, unsigned char hasard)
{
    unsigned char verif = 0;

    switch(hasard)
    {
        case 0:
            Tableau_personnage[numero].comportement = 1;

            if(Tableau_personnage[numero].comportement == 1)
            {
                verif = 1;
            }
            break;

        case 1:
            Tableau_personnage[numero].comportement = 2;

            if(Tableau_personnage[numero].comportement == 2)
            {
                verif = 1;
            }
            break;

        case 2:
            Tableau_personnage[numero].comportement = 3;

            if(Tableau_personnage[numero].comportement == 3)
            {
                verif = 1;
            }
            break;

        case 3:
            Tableau_personnage[numero].comportement = 4;

            if(Tableau_personnage[numero].comportement == 4)
            {
                verif = 1;
            }
            break;

        case 4:
            Tableau_personnage[numero].comportement = 5;

            if(Tableau_personnage[numero].comportement == 5)
            {
                verif = 1;
            }
            break;

        case 6:
            Tableau_personnage[numero].comportement = 6;

            if(Tableau_personnage[numero].comportement == 6)
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
        return 1
    }

    return 0;
}