#include <iostream>
#include <cstring>
#include <cmath>
#include <cctype>
#include<iomanip>

using namespace std;

int main() {
	double srednia = 0 ;
	double suma = 0;
	double liczby[8];
	cout << "podaj 8 licz";
	for (int i = 0; i < 8; i++) {
		cin >> liczby[i];
		suma = suma + liczby[i];
		srednia = suma / 8;
	}

	cout << fixed << setprecision(2);
	cout << "srednia liczb: " << srednia;

	return 0;

}
