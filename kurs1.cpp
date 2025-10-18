/*
1. Oblicz średnią prędkość pojazdu

Wczytaj od użytkownika dystans (w kilometrach) i czas podróży (w godzinach).
Oblicz średnią prędkość i wypisz wynik w km/h.

2. Oblicz pole prostokąta i przekątną

Program wczytuje długość i szerokość prostokąta, a następnie oblicza jego pole i długość przekątnej.

3. Przeliczanie sekund na godziny, minuty i sekundy

Wczytaj liczbę sekund i oblicz, ile to godzin, minut i sekund.

4. Oblicz miesięczne zużycie energii

Program wczytuje moc urządzenia (w watach) oraz liczbę godzin pracy dziennie.
Oblicz koszt miesięcznego zużycia energii, przyjmując cenę 1 kWh od użytkownika.

5. Oblicz należny podatek dochodowy

Wczytaj kwotę dochodu użytkownika i oblicz podatek wg uproszczonego wzoru:

jeśli dochód ≤ 30 000 zł → podatek 12%,

jeśli dochód > 30 000 zł → podatek 12% od 30 000 zł + 32% od nadwyżki.

6. Oblicz ilość farby potrzebnej do pomalowania pokoju

Program wczytuje długość, szerokość i wysokość pokoju (w metrach), oraz informację, ile metrów kwadratowych można pomalować 1 litrem farby.
Oblicz, ile litrów farby trzeba kupić.

*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	/*
	1. Oblicz średnią prędkość pojazdu

Wczytaj od użytkownika dystans (w kilometrach) i czas podróży (w godzinach).
Oblicz średnią prędkość i wypisz wynik w km/h.
	*/

	double dystans, czas, srednia_predkosc, pierwszy_bok, drugi_bok, pole_prostokata, przekatna, moc_urzadzenia, 
		l_g_p, k, c1kw, podatek_doch,zarobek, dl, wys,paint_l,paint;
	int godziny, minuty, sekundy, ilosc_sekund;
	cout << "Podaj dystans:" << endl;
	cin >> dystans;
	cout << "Podaj czas podrozy:" << endl;
	cin >> czas;
	srednia_predkosc = dystans / czas;
	cout << "srednia predkosc" << srednia_predkosc << endl;

	cout << "podaj pierwszy bok prostokąta:" << endl;
	cin >> pierwszy_bok;
	cout << "podaj drugi bok prostokata:" << endl;
	cin >> drugi_bok;
	pole_prostokata = pierwszy_bok * drugi_bok;
	przekatna = sqrt(pierwszy_bok * pierwszy_bok + drugi_bok * drugi_bok);
	cout << "Pole prostokata:" << pole_prostokata << endl;
	cout << "przekatna:" << przekatna << endl;

	cout << "Wpisz liczbe sekund:" << endl;
	cin >> ilosc_sekund;
	godziny = ilosc_sekund / 3600;
	minuty = ilosc_sekund / 60 - godziny * 60;
	sekundy = ilosc_sekund - minuty * 60 - godziny * 3600;
	cout << "Liczba godzin:" << godziny << "godz" << minuty << "min" << sekundy << "sek" << endl;

	cout << "wpisz moc urzadzenia" << endl;
	cin >> moc_urzadzenia;
	cout << "Podaj liczbe godzin pracy" << endl;
	cin >> l_g_p;
	c1kw = 0.001;
	k = c1kw * l_g_p * moc_urzadzenia * 30;
	cout << "miesieczny koszt:" << k << endl;

	cout << "podaj kwote dochodu" << endl;
	cin >> zarobek;
	if (zarobek <= 30000)
		podatek_doch = zarobek * 0.12;
	else zarobek>= 30000;
		podatek_doch= 30000 * 0.12 + (zarobek - 30000) * 0.32; 
		cout << "Twoj podatek wynosi:" << podatek_doch << endl;

		cout << "Podaj ile metrów kwadratowych mozna pomalowac 1 litrem farby" << endl;
		cin >> paint_l;
		cout << "Podaj dlugosc sciany" << endl;
		cin >> dl;
		cout << " Podaj wysokosc sciany" << endl;
		cin >> wys;

		paint = dl * wys / paint_l;
		cout << "ilosc farby potrzebna do pomalowania sciany" << paint << "l" << endl;




	














	return 0;
}
