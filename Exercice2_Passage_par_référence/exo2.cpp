#include <iostream>
#include <cmath>
using namespace std;

// Structure représentant un polynôme du second degré : ax² + bx + c
struct Polynome2D
{
    double coefficientA;
    double coefficientB;
    double coefficientC;
};

// Fonction permettant de saisir les coefficients du polynôme
void saisiePolynome(Polynome2D &polynome)
{
    // Le coefficient A doit être différent de zéro
    do
    {
        cout << "Entrez le coefficient A : ";
        cin >> polynome.coefficientA;
    }
    while (polynome.coefficientA == 0);

    cout << "Entrez le coefficient B : ";
    cin >> polynome.coefficientB;

    cout << "Entrez le coefficient C : ";
    cin >> polynome.coefficientC;
}

// Fonction permettant de calculer et d'afficher les racines réelles
void racinesPolynome2D(const Polynome2D &polynome)
{
    // Affichage du polynôme saisi
    cout << "\nP(x) = "
         << polynome.coefficientA << "x² + "
         << polynome.coefficientB << "x + "
         << polynome.coefficientC << endl;

    // Calcul du discriminant : Delta = b² - 4ac
    double discriminant =
        (polynome.coefficientB * polynome.coefficientB)
        - (4 * polynome.coefficientA * polynome.coefficientC);

    // Cas 1 : Le discriminant est nul, une seule racine réelle
    if (discriminant == 0)
    {
        double racineUnique =
            -polynome.coefficientB / (2 * polynome.coefficientA);

        cout << "Le polynome admet une seule racine reelle." << endl;
        cout << "Racine : " << racineUnique << endl;
    }

    // Cas 2 : Le discriminant est positif, deux racines réelles distinctes
    else if (discriminant > 0)
    {
        double racine1 =
            (-polynome.coefficientB + sqrt(discriminant))
            / (2 * polynome.coefficientA);

        double racine2 =
            (-polynome.coefficientB - sqrt(discriminant))
            / (2 * polynome.coefficientA);

        cout << "Le polynome admet deux racines reelles distinctes." << endl;
        cout << "Racine 1 : " << racine1 << endl;
        cout << "Racine 2 : " << racine2 << endl;
    }

    // Cas 3 : Le discriminant est négatif, aucune racine réelle
    else
    {
        cout << "Le polynome n'admet aucune racine reelle." << endl;
    }
}

// Fonction principale du programme
int main()
{
    // Déclaration d'un polynôme
    Polynome2D polynome;

    // Saisie des coefficients
    saisiePolynome(polynome);

    // Calcul et affichage des racines
    racinesPolynome2D(polynome);

    return 0;
}
