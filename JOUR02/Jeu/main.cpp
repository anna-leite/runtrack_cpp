#include "Personnage.hpp"
#include <iostream>


using namespace std;

int main() {
    Personnage david, goliath("Epee aiguisee", 20);
    
    cout << "David" << endl;
    david.afficherEtat();
    cout << "Goliath" << endl;
    goliath.afficherEtat();

    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache", 40);
    goliath.attaquer(david);

    cout << "David" << endl;
    david.afficherEtat();
    cout << "Goliath" << endl;
    goliath.afficherEtat();

    return 0;
}