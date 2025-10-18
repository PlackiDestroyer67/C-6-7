#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int liczba;

	cout << "Podaj dowolna liczbe calkowita" << endl;
	cin >> liczba;
	if (liczba > 0){ 
		cout << "liczba dodatnia" << endl;
	}
	else (liczba < 0){
		cout << "liczba ujemna" << endl;
	}
	
	if (liczba % 2){ 
		cout << "liczba parzysta" << endl;
	}
	
	else (liczba == 0){
		cout << "liczba jest zerem" << endl;
	}
	


	return 0;

}
