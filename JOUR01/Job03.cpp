#include <iostream>
using namespace std;

int main() {
    int a(1);
    // cout << "Entrer un nombre entier different de 0" << endl;    
    // cin >> a;

    // while (a < 0) {
    //     cout << "Le nombre doit être différent de 0" << endl;
    //     cin >> a;
    // }

    do {
        cout << "Entrer un nombre entier positif different de 0"<< endl;
        cin >> a;
    } while (a <=0);

    for(int i = 1; i <= a; i++) {
        cout << "Hello World" << endl;
    }

    return 0;

}