#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    int tab[8];

    cout << "Podaj 8 liczb:" << endl;

    for (int i = 0; i < 8; i++) {
        cin >> tab[i];
    }

    cout << "Liczby w odwrotnej kolejnosci:" << endl;

    for (int i = 7; i >= 0; i--) {
        cout << tab[i] << " ";
    }

    cout << endl;
    return 0;
}
