#include "test.hpp"
#include <iostream>
using namespace std;

int main() {
    int largeur, hauteur;
    char motif; 

    cout << "Largeur du rectangle : ";
    cin >> largeur;
    cout << "Hauteur du rectangle : ";
    cin >> hauteur;
    cout << "Motif (un  caractère) : ";
    cin >> motif;

    dessineRectangle(largeur, hauteur, motif);
    return 0;
}