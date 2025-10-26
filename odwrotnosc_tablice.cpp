#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>
#include<iomanip>

        using namespace std;


        int main() {
            int tab[8];
            
            cout << "podaj 8   liczbe:" << endl;
            for (int i = 0; i < 8; i++) {
                cin >> tab[i];
            }
            cout << "Liczby w odwrotnej kolejnosci:" << endl;
            for (int i = 7; i >= 0 ; i--) {
                cout << tab[i] << endl;
            }
            
            return 0;
        }
