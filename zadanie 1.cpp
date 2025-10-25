#include <iostream>
#include <cstring>
#include <cmath>
#include <cctype>

using namespace std;

//1. Napisz funkcję roznica, która zwraca różnicę dwóch liczb całkowitych.
int roznica(int a, int b) {
	int roznica = a - b;
	return roznica;

}
int main() {
	cout << roznica(10, 5);
	return 0;	
}
