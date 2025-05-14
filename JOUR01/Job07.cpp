#include <iostream>
#include <limits>
using namespace std;

int main() {
    int a(0);
    char check;

    while (true) {
        cout << "Entrer un entier (different de 0): " << endl;
        cin >> a;

        if(cin.fail() || (cin.get(check) && check != '\n')) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entree invalide. Veuillez entrer un entier :" << endl;
            a = 0;
        } else if (a == 0) {
            cout << "L'entier ne doit pas etre 0." << endl;
        } else {
            break;
        }
    }

    if (a % 2 == 0) {
        cout << "Le nombre est pair." << endl;
    } else {
        cout << "Le nombre est impair." << endl;
    }

    return 0;    
}