#include <iostream>
#include<cmath>
#include<cstring>
#include<cctype>
#include<Windows.h>
using namespace std;

int main() {
   //2
    char slowo[50], slowo2[50];
    cout << "Podaj slowo;" << endl;
    cin >> slowo;
    cout << "Podaj drugie slowo:" << endl;
    cin >> slowo2;

    int cmp = strcmp(slowo, slowo2);

    if (cmp == 0)
    {
        cout << "Napisy sa rowne" << endl;
    }
    else if (cmp > 0)
        cout << "pierwsze slowo" << endl;
    else if (cmp < 0)
        cout << "drugie slowo" << endl;
   
    
    return 0;
} 
