#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// CREATION D UN FICHIER AVEC ECRITURE 
// int main() {
//     string const nomFichier("C:\\Users\\gravy\\Desktop\\PROJETS\\runtrack_cpp\\runtrack_cpp\\JOUR02\\texte.txt");

//     ofstream monFlux(nomFichier.c_str());

//     if(monFlux) {
//         monFlux << "Hello World!" << endl;
//         monFlux << 1312 << endl;
//         int age(35);
//         monFlux << "J'ai " << age << " ans." << endl;

//     } else {
//         cout << "[ERREUR] Impossible d'ouvrir le fichier." << endl;
//     }

//     return 0;
// }

// LECTURE D UN FICHIER
int main() {
    ifstream fichier("C:\\Users\\gravy\\Desktop\\PROJETS\\runtrack_cpp\\runtrack_cpp\\JOUR02\\texte.txt");

    if(fichier) {
        string ligne;

        while(getline(fichier, ligne)) {
            cout << ligne << endl;
        }
    } else {
        cout << "[ERREUR] Impossible d'ouvrir le fichier en lecture." << endl;
    }

    return 0;
}