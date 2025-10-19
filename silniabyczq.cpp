#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int i, n, silnia;
	silnia = 1;
	

	cout << "Podaj silnie:";
	cin >> n;
	for (int i = 2; i <= n; i++) {
		silnia = silnia * i;
		/*cout << silnia << endl;*/
	}
	cout << silnia << endl;
}
