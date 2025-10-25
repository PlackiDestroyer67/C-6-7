#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char name[100];
    char name2[100];

    cout << "Wpisz wyraz lub zdanie: ";
    cin.getline(name, 100);

    int len = strlen(name);
    int j = 0;

    
    for (int i = len - 1; i >= 0; --i) {
        name2[j++] = name[i];
    }
    name2[j] = '\0';

    
    if (strcmp(name, name2) == 0) {
        cout << "Wyraz jest palindromem." << endl;
    }
    else {
        cout << "Wyraz nie jest palindromem." << endl;
    }

    return 0;
}
