#include <iostream>
#include <cstring>
#include <cmath>
#include <cctype>
#include<iomanip>

using namespace std;

int main() {
	int liczby[8];
	double srednia = 0;
	int suma = 0;
	
	cout << "podaj 10 liczb";
	for (int i = 0; i < 8; i++) {
		
		cin >> liczby[i];
		suma += liczby[i];
		srednia = suma / 8;
	}
	cout << fixed << setprecision(2) << endl;
	cout << "srednia liczb wynosi:" << srednia << endl;

	

	return 0;
}
