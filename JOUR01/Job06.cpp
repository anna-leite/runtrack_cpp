#include <iostream>
#include <limits>
using namespace std;

int main() {
    int a(0);
    char check;

    do {
        cout << "Entrer un entier positif : " << endl;
        cin >> a;

        if(cin.fail() || (cin.get(check) && check != '\n')) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entree invalide. Veuillez entrer un entier positif :" << endl;
            a = -1;
        }
    } while (a < 0);

    cout << "Table de multiplication de " <<  a << " :" << endl;

    for(int i = 0; i <= 10; i++) {
        cout << a << " * " << i << " = " << a*i << endl;
    }

    return 0;
}