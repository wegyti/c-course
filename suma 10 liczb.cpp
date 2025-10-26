#include <iostream>
#include <cstring>
#include <cmath>
#include <cctype>

using namespace std;

int main() {
	int suma = 0 ;
	int liczby[10];
	cout << "podaj 10 licz";
	for (int i = 0; i < 10; i++) {
		cin >> liczby[i];
		suma = suma + liczby[i];
	}

	cout << "suma liczb: " << suma;

	return 0;

}
