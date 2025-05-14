#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>

#include "Arme.hpp"

class Personnage {
    public:

    Personnage();
    Personnage(std::string nomArme, int degatsArme);
    void afficherEtat() const;
    void recevoirDegats(int ndDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nouvelleArme, int degatsNouvelleArme);
    bool estVivant() const;
    ~Personnage();

    private:

    int m_vie;
    int m_mana;
    Arme m_arme;
};

#endif // DEF_PERSONNAGE