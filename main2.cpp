
#include <iostream>
using namespace std;

class Date {
private:
    int jour;
    int mois;
    int annee;

public:
    // Constructeur par defaut
    Date() {
        jour = 1;
        mois = 1;
        annee = 2000;
    }

    // Constructeur parametre
    Date(int j, int m, int a) {
        jour = j;
        mois = m;
        annee = a;
    }

    // Surcharge de l'operateur ==
    bool operator==(Date d) {
        return (jour == d.jour &&
                mois == d.mois &&
                annee == d.annee);
    }

    // Surcharge de l'operateur !=
    bool operator!=(Date d) {
        return !(*this == d);
    }

    // Methode d'affichage
    void afficher() {
        cout << jour << "/" << mois << "/" << annee << endl;
    }
};

int main() {
    Date d1(14, 11, 2026);
    Date d2(14, 11, 2026);
    Date d3(20, 5, 2025);

    cout << "Date 1 : ";
    d1.afficher();

    cout << "Date 2 : ";
    d2.afficher();

    cout << "Date 3 : ";
    d3.afficher();

    cout << "\nComparaison de Date 1 et Date 2 :" << endl;

    if (d1 == d2) {
        cout << "Les deux dates sont identiques." << endl;
    } else {
        cout << "Les deux dates sont differentes." << endl;
    }

    cout << "\nComparaison de Date 1 et Date 3 :" << endl;

    if (d1 != d3) {
        cout << "Les deux dates sont differentes." << endl;
    } else {
        cout << "Les deux dates sont identiques." << endl;
    }

    return 0;
}
