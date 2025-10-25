
#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;


//5. Napisz wartosc_bezwzgledna, która zwraca wartość bezwzględną liczby całkowitej.
int wartosc_bezwgledna(int n) {
	if (n > 0) {
		int wart = n * 1;
		return wart;
	}
	else {
		int wart = n * -1;
		return wart;
	}

}
	

	int main(){
		cout << wartosc_bezwgledna(-12);
		return 0;
}
