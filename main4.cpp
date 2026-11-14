
#include <iostream>
#include <string>
using namespace std;

class Produit {
private:
    string nom;
    float prix;
    int quantite;

public:
    // Constructeur
    Produit(string n, float p, int q) {
        nom = n;
        prix = p;
        quantite = q;
    }

    // Surcharge de l'operateur <<
    friend ostream& operator<<(ostream& os, const Produit& p);
};

// Fonction amie
ostream& operator<<(ostream& os, const Produit& p) {
    os << "Nom : " << p.nom << endl;
    os << "Prix : " << p.prix << " DH" << endl;
    os << "Quantite : " << p.quantite << endl;

    return os;
}

int main() {
    Produit p1("Ordinateur", 5500, 10);
    Produit p2("Clavier", 150, 25);

    cout << "===== Informations des produits =====" << endl;

    cout << "\nProduit 1 :" << endl;
    cout << p1;

    cout << "\nProduit 2 :" << endl;
    cout << p2;

    return 0;
}
