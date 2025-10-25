//10. Napisz funkcję maximum, która zwraca wiekszosc z dwóch liczb.*
#include<iostream> 
#include<cmath>


using namespace std;

int maksimum(int a, int b) {
    if (a < b) {
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

    cout << "wieksza:" << maksimum(a, b);
    return 0;
}
