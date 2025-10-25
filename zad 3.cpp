#include <iostream>
#include <cstring>
#include <cmath>
#include <cctype>

using namespace std;
	

//3. Napisz funkcję srednia, która zwraca średnią dwóch liczb zmiennoprzecinkowych.
float srednia(float a, float b) {
	float srednia = (a + b)/2;
	return srednia;
}
int main() {
	cout << srednia(30, 2);
	return 0;
}
