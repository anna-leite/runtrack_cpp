#include <iostream>
#include <limits>
using namespace std;

int main() {
    int a(0);
    char check;

    while (true) {
        cout << "Entrer une annee : " << endl;
        cin >> a;

        if(cin.fail() || (cin.get(check) && check != '\n')) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entree invalide. Veuillez entrer un entier :" << endl;
            a = 0;
        } else {
            break;
        }
    }

    if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)) {
        cout << "Cette annee est bissextille." << endl;
    } else {
        cout << "Cette annee n'est pas bissextille." << endl;
    }

    return 0;    
}