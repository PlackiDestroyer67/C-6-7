//6. Napisz funkcję pole_prostokata, która zwraca pole prostokąta.
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void kwadrat(int a, int b) {
    cout << a * b << endl;



}

int main() {

    int a, b;
    cout << "Napisz  liczbe" << endl;
    cin >> a;
    cout << "Napisz  liczbe" << endl;
    cin >> b;

    kwadrat(a , b);

    return 0;
}

