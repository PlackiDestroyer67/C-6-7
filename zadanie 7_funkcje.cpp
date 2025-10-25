#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


float pole_kola(float r, float pi = 3.14) {
    return 2 * pi * r;
}



int main() {
    float r;


    cout << "podaj liczbe:";
    cin >> r;

    cout << pole_kola(r);
    return 0;
}
