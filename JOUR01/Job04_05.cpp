#include <iostream>
using namespace std;

int main() {
    double a(0), b(0), resultat(0);
    char sign(0);

    cout << "Entrer deux nombres : " << endl;
    cin >> a >> b;

    do {
        cout << "Entrer + pour les additionner ou * pour les multiplier : " << endl;
        cin >> sign;
    } while (sign != '+' && sign != '*');



    if (sign == '+') {
        resultat = a + b;
        cout << a << " + " << b << " = " << resultat << endl;
    } else if (sign == '*') {
        resultat = a * b;
        cout << a << " * " << b << " = " << resultat << endl;
    }

    return 0;
}