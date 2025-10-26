#include <iostream>
#include <cstring>
#include <cmath>
#include <cctype>
#include<iomanip>

using namespace std;

int main() {
	double srednia = 0;
	double suma = 0;
	double liczby[10];
	cout << "podaj 10 liczby" << endl;;
	for (int i = 0; i < 10; i++) {
		cin >> liczby[i];
		suma = suma + liczby[i];
		
	}
	srednia = suma / 10;
	
	cout << "liczby wieksze od sredniej: " << endl;
	for (int a = 0; a < 10; a++) {
		if (liczby[a] > srednia) {
			cout  << liczby[a] <<", ";
		}
	}

	

	

	return 0;

}
