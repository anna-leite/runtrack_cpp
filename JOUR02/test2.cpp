#include <iostream>
using namespace std;

int nombreDeSecondes(int heures, int minutes = 0, int secondes = 0);

int main () {
    cout << nombreDeSecondes(1) << endl;

    return 0;
}

int nombreDeSecondes(int heures, int minutes, int secondes) {
    int total = 0;

    total = heures * 60 *60;
    total += minutes *60;
    total += secondes;

    return total;
}