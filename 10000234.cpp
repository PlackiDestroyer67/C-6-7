#include <iostream>
#include <cstring>
#include <cmath>
#include <cctype>

using namespace std;
	
int main() {
	int liczby[5];
	cout << "podaj 5 licz";
	for (int i = 0; i < 5; i++) {
		cin >> liczby[i];
	}

	cout << "wczytane liczby: ";
	for (int i = 0; i < 5; i++) {
		cout << liczby[i] << " ";
	}
	cout << endl;
		
	return 0;
}
