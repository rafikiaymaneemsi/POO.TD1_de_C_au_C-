
#include <iostream>
using namespace std;

// --------------------------------------------------
// Question 1 : Recherche d'un element dans le tableau
// --------------------------------------------------

// Retourne true si l'element existe dans le tableau,
// sinon retourne false.
bool rechercher(const double *tableau, int taille, double elementRecherche)
{
    // Parcours de tous les elements du tableau
    for (int indice = 0; indice < taille; indice++)
    {
        // Verification de l'egalite avec l'element recherche
        if (tableau[indice] == elementRecherche)
        {
            return true; // Element trouve
        }
    }

    return false; // Element non trouve apres le parcours
}


// --------------------------------------------------
// Question 3 : Recherche d'un element par sa position
// --------------------------------------------------

// Retourne la valeur de l'element situe a l'indice indique.
double rechercher(const double *tableau, int taille, int position)
{
    // Retourner l'element correspondant a la position
    return tableau[position];
}


// --------------------------------------------------
// Fonction principale
// --------------------------------------------------

int main()
{
    // Declaration et initialisation du tableau
    double tableau[] = {10.5, 20.5, 30.5, 40.5};

    // Determination du nombre d'elements du tableau
    int taille = 4;

    // Question 1 : Recherche d'une valeur dans le tableau
    cout << "Recherche de 30.5 : ";

    if (rechercher(tableau, taille, 30.5))
        cout << "Element trouve." << endl;
    else
        cout << "Element non trouve." << endl;


    // Question 3 : Recuperation d'un element par son indice
    int position = 3;

    cout << "Element a la position " << position << " : "
         << rechercher(tableau, taille, position) << endl;

    return 0;
}
