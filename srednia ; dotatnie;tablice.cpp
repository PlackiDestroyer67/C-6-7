#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>
#include<iomanip>


        using namespace std;


       
        int main() {
            double liczby[8];
            double suma = 0;
            double srednia = 0;

            cout << "Podaj 8 liczb:" << endl;

            for (int i = 0; i < 8; i++) {
                cin >> liczby[i];
                suma += liczby[i];
            }


            srednia = suma / 8;


            bool maDodatnie = false;
            for (int i = 0; i < 8; i++) {
                if (liczby[i] > 0) {
                    maDodatnie = true;
                    break;
                }
            }

            cout << fixed << setprecision(2);

            if (maDodatnie) {
                cout << "Średnia liczb: " << srednia << endl;
            }
            else {
                cout << "Nie ma liczb dodatnich" << endl;
            }

            return 0;
        }
