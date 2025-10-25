//8. Napisz funkcję double obwod_kwadratu, która zwraca obwód kwadratu.
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


double obwod_kwadratu(double a) {
    return a* 4;
}



int main() {
    double a;


    cout << "podaj liczbe:";
    cin >> a;

    cout << obwod_kwadratu(a);
    return 0;
}
