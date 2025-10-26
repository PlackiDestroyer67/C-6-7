#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>
#include<iomanip>

        using namespace std;


        int main() {
            int liczby[10];
            int szukana = 0;
            int  b = 0;
            cout << "podaj  liczbe:" << endl;
            for (int a = 0; a < 10; a++) {
                cin >> liczby[a];
            }
            
            cout << "podaj szukana:" << endl;
            cin >> szukana;

            for (int i = 0; i < 10; i++) {
                if (szukana == liczby[i]) {
                    b = b + 1;
                }
            }

            cout << "liczba wystepuje:" << b << "razy, " << endl;
            



            return 0;
        }
