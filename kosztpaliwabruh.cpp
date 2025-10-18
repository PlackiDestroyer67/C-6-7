#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double benzyna, koszt, dystans, spalanie;
	cout << "Podaj koszt benzyny:" << endl;
	cin >> benzyna;
	cout << "Podaj długość trasy:" << endl;
	cin >> dystans;
	cout << "Podaj wartość spalania:" << endl;
	cin >> spalanie;
	koszt = spalanie * dystans / 100 * benzyna;
	
	cout << "koszt podrozy=" << koszt;
	

	

		return 0;
