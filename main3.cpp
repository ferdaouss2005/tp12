
#include <iostream>
#include <stdexcept>
using namespace std;

class Tableau {
private:
    int* data;
    int taille;

public:
    // Constructeur
    Tableau(int n) {
        if (n <= 0) {
            throw invalid_argument("Taille invalide !");
        }

        taille = n;
        data = new int[taille];

        for (int i = 0; i < taille; i++) {
            data[i] = 0;
        }
    }

    // Surcharge de l'operateur []
    int& operator[](int index) {
        if (index < 0 || index >= taille) {
            throw out_of_range("Indice hors limites !");
        }

        return data[index];
    }

    // Destructeur
    ~Tableau() {
        delete[] data;
        cout << "\nMemoire liberee !" << endl;
    }
};

int main() {
    try {
        int n;

        cout << "Donner la taille du tableau : ";
        cin >> n;

        Tableau t(n);

        // Remplissage du tableau
        cout << "\nSaisir les elements du tableau :" << endl;

        for (int i = 0; i < n; i++) {
            cout << "Element " << i << " : ";
            cin >> t[i];
        }

        // Affichage du tableau
        cout << "\nContenu du tableau :" << endl;

        for (int i = 0; i < n; i++) {
            cout << t[i] << " ";
        }

        cout << endl;

        // Test d'un indice invalide
        cout << "\nAcces a l'indice " << n << " :" << endl;
        cout << t[n] << endl;

    } catch (const exception& e) {
        cout << "Erreur : " << e.what() << endl;
    }

    return 0;
}



