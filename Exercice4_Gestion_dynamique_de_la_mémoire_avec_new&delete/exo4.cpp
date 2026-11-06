
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // 1. Declaration et initialisation des variables
    int nombreEleves;
    double sommeNotes = 0;
    double moyenneNotes;

    // 2. Saisie du nombre d'eleves
    do
    {
        cout << "Bonjour, saisissez le nombre d'eleves : ";
        cin >> nombreEleves;
    }
    while (nombreEleves <= 0);

    // 3. Allocation dynamique du tableau des notes
    double* tableauNotes = new double[nombreEleves];

    // 4. Saisie des notes des eleves
    for (int indice = 0; indice < nombreEleves; indice++)
    {
        cout << "Donnez la note de l'eleve numero "
             << indice + 1 << " : ";
        cin >> tableauNotes[indice];
    }

    // 5. Initialisation du minimum et du maximum
    double valeurMinimale = tableauNotes[0];
    double valeurMaximale = tableauNotes[0];

    // 6. Calcul de la somme, du minimum et du maximum
    for (int indice = 0; indice < nombreEleves; indice++)
    {
        // Calcul de la somme des notes
        sommeNotes += tableauNotes[indice];

        // Recherche de la note minimale
        if (tableauNotes[indice] < valeurMinimale)
        {
            valeurMinimale = tableauNotes[indice];
        }

        // Recherche de la note maximale
        if (tableauNotes[indice] > valeurMaximale)
        {
            valeurMaximale = tableauNotes[indice];
        }
    }

    // 7. Calcul de la moyenne generale
    moyenneNotes = sommeNotes / nombreEleves;

    // 8. Affichage des resultats
    cout << "\n========== RESULTATS ==========" << endl;

    cout << fixed << setprecision(2);

    cout << "Nombre d'eleves : " << nombreEleves << endl;
    cout << "Somme des notes : " << sommeNotes << endl;
    cout << "Moyenne generale : " << moyenneNotes << endl;
    cout << "Note minimale : " << valeurMinimale << endl;
    cout << "Note maximale : " << valeurMaximale << endl;

    cout << "================================" << endl;

    // 9. Liberation de la memoire dynamique
    delete[] tableauNotes;

    return 0;
}
