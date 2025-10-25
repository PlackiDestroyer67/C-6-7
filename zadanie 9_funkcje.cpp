//9. Napisz funkcję minimum, która zwraca mniejszą z dwóch liczb.
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


int minimum(int a, int b) {
    if (a > b) {
        return b;
    }
    else {
        return a;
    }

}





int main() {
    int a, b;

    cout << "podaj liczbe:";
    cin >> a;
    cout << "podaj liczbe:";
    cin >> b;

    cout << "mniejsza:" << minimum(a, b);
    return 0;
}
