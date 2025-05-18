//
// Created by gravy on 17/05/2025.
//

#include "Duree.h"


Duree::Duree(int heures, int minutes, int secondes) {
    if (secondes >= 60) {
        minutes += secondes/60;
        secondes = secondes%60;
    }

    if (minutes >= 60) {
        heures += minutes/60;
        minutes = minutes%60;
    }

    m_heures = heures;
    m_minutes = minutes;
    m_secondes = secondes;
}

bool Duree::estEgal(Duree const& b) const {
    return (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes);
}

bool Duree::estPlusPetitQue(Duree const& b) const {
    if (m_heures < b.m_heures) {
        return true;
    } else if (m_heures == b.m_heures && m_minutes < b.m_minutes) {
        return true;
    } else if (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes < b.m_secondes) {
        return true;
    } else {
        return false;
    }
}

bool Duree::estPlusGrandQue(Duree const& b) const {
    if (m_heures > b.m_heures) {
        return true;
    } else if (m_heures == b.m_heures && m_minutes > b.m_minutes) {
        return true;
    } else if (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes > b.m_secondes) {
        return true;
    } else {
        return false;
    }
}

bool operator==(Duree const& a, Duree const& b) {
    return a.estEgal(b);
}

bool operator!=(Duree const& a, Duree const& b) {
    return not (a == b);
}

bool operator<(Duree const& a, Duree const& b) {
    return a.estPlusPetitQue(b);
}

bool operator>(Duree const& a, Duree const& b) {
    return a.estPlusGrandQue(b);
}

bool operator<=(Duree const& a, Duree const& b) {
    if (a.estPlusPetitQue(b)) {
        return true;
    } else if (a.estEgal(b)) {
        return true;
    } else {
        return false;
    }
}

bool operator>=(Duree const& a, Duree const& b) {
    if (a.estPlusGrandQue(b)) {
        return true;
    } else if (a.estEgal(b)) {
        return true;
    } else {
        return false;
    }
}