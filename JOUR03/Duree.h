//
// Created by gravy on 17/05/2025.
//

#ifndef DUREE_H
#define DUREE_H



class Duree {
public:

    Duree(int heures, int minutes, int secondes);
    bool estEgal(Duree const& b) const;
    bool estPlusPetitQue(Duree const& b) const;
    bool estPlusGrandQue(Duree const& b) const;

private:
    int m_heures;
    int m_minutes;
    int m_secondes;
};

bool operator==(Duree const& a, Duree const& b);
bool operator!=(Duree const& a, Duree const& b);
bool operator<(Duree const& a, Duree const& b);
bool operator>(Duree const& a, Duree const& b);
bool operator<=(Duree const& a, Duree const& b);
bool operator>=(Duree const& a, Duree const& b);


#endif //DUREE_H
