#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string const nomFichier("C:\\Users\\gravy\\Desktop\\PROJETS\\runtrack_cpp\\runtrack_cpp\\JOUR02\\texte.txt");

    ofstream monFlux(nomFichier.c_str());

    if(monFlux) {
        monFlux << "Hello World!" << endl;
        monFlux << 1312 << endl;
        int age(35);
        monFlux << "J'ai " << age << " ans." << endl;

    } else {
        cout << "[ERREUR] Impossible d'ouvrir le fichier." << endl;
    }

    return 0;
}