#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>
#include<iomanip>


        using namespace std;


      

        int main() {
            const int N = 5;
            int tab1[N];
            int tab2[N];

            cout << "podaj 5 elementow do pierwszej tabeli: " << endl;
            for (int i = 0; i < N; i++) {
                cin >> tab1[N];

            }
            cout << "podaj 5 elementow do drogiej tabeli: " << endl;
            for (int i = 0; i < N; i++) {
                cin >> tab2[N];
            }

            for (int i = 0; i < N; i++) {
                if (tab1[N] != tab2[N]) {
                    cout << "tabilce sa rozne!" << endl;
                }

            }
            cout << "tablice sa takie same";

            return 0;
        }
