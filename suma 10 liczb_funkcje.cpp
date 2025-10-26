#include <iostream>
#include <cstring>
#include <cmath>
#include <cctype>

using namespace std;

int main() {
	int liczby[10];
	int suma = 0;
	
	cout << "podaj 10 liczb";
	for (int i = 0; i < 10; i++) {
		cin >> liczby[i];
		suma += liczby[i];
	}
	cout << "suma liczb wynosi:" << suma << endl;

	

	return 0;
}
