#include<iostream>
#include<cmath>

using namespace std;
/*1. Sprawdzenie wieku i prawo do głosowania.
Wczytaj wiek użytkownika.
Jeśli >= 18 - "Masz prawo do głosowania".
Jeśli < 18 "Nie masz prawa do głosowania”.

	2. Ocena szkolna na podstawie wyniku procentowego
	Wczytaj wynik procentowy z testu(0–100).
	90–100 - „Ocena: celujący”,
	75–89 - „Ocena : bardzo dobry”,
	50–74 - „Ocena : dobry”,
	< 50 - „Ocena : niedostateczny”.

	3. Sprawdzenie liczby dodatniej lub ujemnej
	Wczytaj liczbę całkowitą.
	Jeśli dodatnia - „Liczba dodatnia”,
	jeśli ujemna - „Liczba ujemna”,
	jeśli 0 - „Liczba równa zero”.

	4. Sprawdzenie czy liczba mieści się w zakresie 100–200 lub poza nim
	Wczytaj liczbę.
	Jeśli >= 100 i <= 200 - "Liczba w przedziale 100–200"
	w przeciwnym razie - "Liczba poza przedziałem"

	5. Sprawdzenie największej liczby z trzech wprowadzonych
	Wczytaj trzy liczby.
	Program wypisze, która jest największa.*/

int main()
{
	double wiek, procent,liczba, liczbab, a, b ,c;

	cout << "podaj wiek" << endl;
	cin >> wiek;
	if (wiek >= 18)
	{
		cout << "Masz prawo do glosowania" << endl;
	}

	else
		cout << "Nie masz prawa do głosowania" << endl;

	cout << "Podaj liczbe procent:" << endl;
	cin >> procent;

	if (procent >= 90 && procent <= 100) {
		cout << "Ocena celujacy" << endl;
	}
	else if (procent >= 75 && procent <= 89) {
		cout << "Ocena bardzo dobry" << endl;
	}
	else if (procent >= 50 && procent <= 74) {
		cout << "Ocena dobry" << endl;
	}
	else if (procent <= 50 && procent >= 0) {
		cout << "Ocena niedostateczna" << endl;
	}
	else if (procent > 100) {
		cout << "Blad" << endl;
	}

	cout << "Podaj dowolna liczbe" << endl;
	cin >> liczba;
	if (liczba > 0) {
		cout << "Liczba dodatnia" << endl;
	}
	else if (liczba < 0) {
		cout << "liczba ujemna" << endl;
	}
	else if (liczba == 0) {
		cout << "Liczba wynosi 0" << endl;
	}

	cout << "Podaj liczbe" << endl;
	cin >> liczbab;

	if (liczbab >= 100 && liczbab <= 200)
		cout << "Liczba w przedziale od 100 - 200" << endl;
	else
		cout << "Liczba poza przedzialem" << endl;

	cout << "Podaj pierwsza liczbe" << endl;
	cin >> a;
	cout << "Podaj druga liczbe:" << endl;
	cin >> b;
	cout << "Podaj trzecia liczbe:" << endl;
	cin >> c;
	
	if (a > b && c < b) {
		cout << " Najwieksza liczba:" << a;
	}
	else if (a > c && b > c) {
		cout << "Najwieksza liczba:" << a;
	}
	else if (b > a && c < a) {
		cout << "Najwieksza liczba:" << b;
	}
	else if (b > c && a < c) {
		cout << "Najwieksza liczba:" << b;
	}
	else if (c > b && a < b) {
		cout << "najwieksza liczba:" << c;
	}
	else if (c > a && b < a) {
		cout << "Najwieksza liczba:" << c;
	}

	return 0;

}
