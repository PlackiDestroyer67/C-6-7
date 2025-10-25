#include <iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main() {
   //1
    char imie[20], nazwisko[20];
    cout << "Podaj imie:" << endl;
    cin >> imie;
    cout << "Podaj nazwisko:" << endl;
    cin >> nazwisko;

    cout << strcat(imie , nazwisko);
    

    

   
    return 0;
}
