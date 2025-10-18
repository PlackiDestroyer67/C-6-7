#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double temperatura_C, temperatura_F;
	cout << "podaj temperatura_C:";
	cin >> temperatura_C;
	temperatura_F = temperatura_C * 1.8 + 32;
	cout << "temperatura_F" << temperatura_F;
	

		return 0;
}
