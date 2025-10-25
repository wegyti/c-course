//9. Napisz funkcję minimum, która zwraca mniejszą z dwóch liczb.
int minimum(int a, int b){
	if (a > b) {
		return b;

	}
	else {
		return a;
	}

}
int main() {
	cout << minimum(2, 6);
	return 0;
}
