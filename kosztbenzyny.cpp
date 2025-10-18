#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double benzyna, koszt, dystans, spalanie;
	benzyna = 5.67;
	dystans = 335;
	spalanie = 9;
	
	koszt = spalanie * dystans / 100 * benzyna;
	
	cout << "koszt podrozy="; << koszt;
	

	

		return 0;
}
