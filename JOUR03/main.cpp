#include "Duree.h"
#include <iostream>

int main() {
    Duree duree1(0, 10, 28), duree2(0, 11, 28);

    if (duree1 >= duree2)
        std::cout << "La premiere duree est plus grande ou egale" << std::endl;
    else
        std::cout << "La premiere duree est plus petite" << std::endl;

    return 0;
}