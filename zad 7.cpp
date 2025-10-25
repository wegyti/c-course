//7. Napisz funkcję double pole_kola, która zwraca pole koła.
double pole_kola(double a) {
	double pole_kola = 2 * 3.14 * a;
	return pole_kola;
}
int main() {
	cout << pole_kola(13);
	return 0;
}
