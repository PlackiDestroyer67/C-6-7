#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a, b,c;

	cout << "Wpisz pierwsza liczbe:" << endl;
	cin >> a;
	cout << "Wpisz druga liczbe:" << endl;
	cin >> b;
	cout << "Wpisz trzecia liczbe:" << endl;
	cin >> c;

	if (a > b && c < b) {
		cout << " Kolejnosc liczb:" << a<<","<< b<<","<< c;
	}
	else if (a > c && b > c) {
		cout << "Kolejnosc liczb:" << a<< "," << c << "," << b;
	}
	else if (b > a && c < a) {
		cout << "Kolejnosc liczb:" << b << "," << a << "," << c;
	}
	else if (b > c && a < c) {
		cout << "Kolejnosc liczb:" << b << "," << c << "," << a;
	}
	else if (c > b && a < b) {
		cout << "Kolejnosc liczb:" << c << "," << b << "," << a;
	}
	else if (c > a && b < a) {
		cout << "Kolejnosc liczb:" << c << ","<<  a << ","<< b;
	}


	

	return 0;

}
