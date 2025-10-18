#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double π, r, Obwod, Pole;
	π = 3, 1415;
	cout << "podaj r:";
	cin >> r;
	Pole = π * pow(r, 2);
	Obwod = 2 * π * r;
	cout << "Obwod=" << Obwod << endl;
	cout << "Pole=" <<Pole ;

		return 0;
}
