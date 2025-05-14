#include <iostream>
#include <limits>
using namespace std;

int saisirEntier(const string& message) {
    int valeur(0);
    char check;

    while (true) {
        cout << message << endl;
        cin >> valeur;

        if (cin.fail() || (cin.get(check) && check != '\n')) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entree invalide. Veuillez entrer un entier :" << endl;
        } else {
            break;
        }
    }

    return valeur;
}


int main() {
    int a(0), b(0), c(0), plusGrand(0);
    char check;

    a = saisirEntier("Entrer un entier : ");
    b = saisirEntier("Entrer un autre entier : ");
    c = saisirEntier("Entrer un dernier entier : ");

    if (a > b && a > c) {
        plusGrand = a;
    } else if (b > a && b > c) {
        plusGrand = b;
    } else {
        plusGrand = c;
    }

    cout << "Le plus grand nombre est " << plusGrand << endl;
    
    return 0;    
}
