#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    double nombreA,nombreB;

    cout << "Entrez la valeur numéro 1 : ";
    cin >> nombreA;

    cout << "Entrez la valeur numéro 2 : ";
    cin >> nombreB;

    while (nombreB == 0)
    {
        cout << "Entrez la valeur numéro 2 : ";
        cin >> nombreB;
    }

    cout << nombreA << " + " << nombreB << " = " << nombreA + nombreB << endl;
    cout << nombreA << " * " << nombreB << " = " << nombreA * nombreB << endl;
    cout << nombreA << " - " << nombreB << " = " << nombreA - nombreB << endl;
    cout << nombreA << " / " << nombreB << " = " << nombreA / nombreB << endl;

    int nouvelleNombreA = static_cast<int> (nombreA);
    int nouvelleNombreB = static_cast<int> (nombreB);

    cout << nombreA << " modulo " << nombreB << " = " << nouvelleNombreA % nouvelleNombreB << endl;

    cout << "La racine carré de " << nouvelleNombreA << " est " << sqrt(abs(nouvelleNombreA)) << endl;
    cout << "La racine carré de " << nouvelleNombreB << " est " << sqrt(abs(nouvelleNombreB)) << endl;

    cout << "Le maximum entre " << nombreA << " et " << nombreB << " c'est " << max(nombreA,nombreB) << endl;
    cout << "Le minimum entre " << nombreA << " et " << nombreB << " c'est " << min(nombreA,nombreB) << endl;

    int choix;

    cout << "Bonjour Monsieur, veuillez saisir votre choix s'il vout plaît.";
    cin >> choix ;

    



}