#include <iostream>
#include<cstring>
using namespace std;

int main() {
    //1
    char imie[20], nazwisko[20];
    cout << "podaj imie " << endl;
    cin >> imie;
    cout << "podaj nazwisko" << endl;
    cin >> nazwisko;
    char strcat(imie, nazwisko);

    cout << strcat;
    return 0;
}
