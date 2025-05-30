#include "Personnage.hpp"
#include <iostream>
#include <string>

using namespace std;

Personnage::Personnage() 
    : m_vie(100), m_mana(100), m_arme("Epee rouillee", 10) {

}

Personnage::Personnage(string nomArme, int degatsArme) 
    : m_vie(100), m_mana(100), m_arme(nomArme, degatsArme) {

}

void Personnage::afficherEtat() const {
    cout << "vie : " << m_vie << endl;
    cout << "mana : " << m_mana << endl;
    m_arme.afficher();
}

void Personnage::recevoirDegats(int nbDegats) {
    m_vie -= nbDegats;

    if (m_vie < 0) {
        m_vie = 0;
    }
}

void Personnage::attaquer(Personnage &cible) {
    cible.recevoirDegats(m_arme.getDegats());
}

void Personnage::boirePotionDeVie(int quantitePotion) {
    m_vie += quantitePotion;

    if (m_vie > 100) {
        m_vie = 100;
    }
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme) {
    m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant() const {
    return m_vie > 0;
}

Personnage::~Personnage() {

}