//4. Napisz funkcję czy_parzysta, która zwraca true, jeśli liczba jest parzysta, a false w przeciwnym wypadku.

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;




  
    int czy_parzysta(int x){
        if (x % 2 == 0)
            return true;
        else
            return false;
}




int main() {

    int a;
    cout << "Napisz  liczbe" << endl;
    cin >> a;
    
    if (czy_parzysta(a)) {
        cout << "liczba parzysta " << endl;
    }
    else {
        cout << "liczba nieparzysta" << endl;
    }

    czy_parzysta(a);

    return 0;
}

