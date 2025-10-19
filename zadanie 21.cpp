#include <iostream>
#include <cstdlib> // dla std::llabs

using namespace std;

int main() {
    int suma = 0;
    int n;
    cout << "Podaj liczbe" << endl;
    cin >> n;
    while (n > 0) {
        suma += n % 10; // dodajemy ostatnią cyfrę
        n /= 10;        // usuwamy ostatnią cyfrę
    }

    cout << "wynik to" << suma;




    return 0;
};
