#include <iostream>
#include <cstring>
#include <cmath>
#include <cctype>

using namespace std;

long long silnia (int a) {
    long long m = 1;
    for (int n = 1; n <= a; n++) {
        m *= n;
    }
    return m;
    
    
 
    
}

int main(){
    int a;
    cout << "podaj liczbe" << endl;

    cin >> a;

    cout << "silnia to" << silnia(a);




    return 0;
}
