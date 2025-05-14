#include <iostream>
using namespace std;

int main() {
    int const taille = 6;
    int tableau[taille];

    for(int i = 0; i < taille; i++) {
        cout << "Entrer une valeur entière pour la case " << i << " : ";
        cin >> tableau[i];
    }

    for(int i = 0; i < taille; i++) {
        if(i%2 == 0) {
            tableau[i] = 0;
        }
    }

    for(int i = 0; i < taille; i++) {
        cout << "La valeur de la case " << i << " : " << tableau[i] << endl;
    }
}