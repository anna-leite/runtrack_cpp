#include <iostream>
using namespace std;

int main() {
    int *pointeur{nullptr};
    pointeur = new int;

    if (pointeur) {
        cout << "Quel est votre age ? ";
        cin >> *pointeur;

        cout << "Vous avez " << *pointeur << " ans." << endl;

        delete pointeur;
        pointeur = nullptr;
    }
    return 0;
}