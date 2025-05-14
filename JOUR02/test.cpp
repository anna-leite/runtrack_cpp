#include "test.hpp"

void dessineRectangle(int l, int h, char c) {
    for(int ligne(0); ligne < h; ligne++) {
        for(int colonne(0); colonne < l; colonne++) {
            std::cout << c;
        }
        std::cout << std::endl;
    }
}

