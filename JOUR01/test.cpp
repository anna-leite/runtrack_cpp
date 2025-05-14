// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     cout << "Quel est votre prenom ?" << endl;
//     string prenom("Sans nom");
//     cin >> prenom;

//     cout << "Quel est votre nom ?" <<endl;
//     string nom("Sans nom");
//     cin >> nom;

//     cout << "Bonjour " << prenom << " " << nom << endl;

//     cin.ignore(); // Ignore the newline character left in the buffer

//     cout << "Donne moi deux mots" << endl;
//     string deuxMots("Rien");
//     getline(cin, deuxMots); // Read the entire line including spaces
//     cout << "Les deux mots sont : " << deuxMots << endl;

//     return 0;
// }

///////////////////////////////////////////////
#include <iostream>
using namespace std;

int main() {
    double a(0), b(0);

    cout << "Entrez deux nombres" << endl;
    cin >> a >> b;

    const double sum = a + b;

    cout << a << " + " << b << " = " << sum << endl;
}