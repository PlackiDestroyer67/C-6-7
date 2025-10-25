#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int i;
    cout << "Podaj liczbe:" << endl;
    cin >> i;

    for (int n = 1; n <= 10; n++) {
        cout << i * n << ""<< endl;
    }

    
    return 0;
}
