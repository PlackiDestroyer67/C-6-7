#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>


        using namespace std;


        int main() {
            int tab[10];

            cout << "Podaj 10 liczb:" << endl;
            for (int i = 0; i < 10; i++) {
                cin >> tab[i];
            }

            cout << "Liczby parzyste:" << endl;
            for (int i = 0; i < 10; i++) {
                if (tab[i] % 2 == 0) {
                    cout << tab[i] << " ";
                }
            }

            cout << endl << "Liczby nieparzyste:" << endl;
            for (int i = 0; i < 10; i++) {
                if (tab[i] % 2 != 0) {
                    cout << tab[i] << " ";
                }
            }

            cout << endl;
            return 0;
        }
