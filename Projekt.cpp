#include <iostream>
#include "Funkcje.h"

using namespace std;

int main() {
	double o; unsigned int p;
	double a; double b; double c;
	double d;
	double pd;

	char wybor;

	cout << "Glowny program\n";

	do {
		cout << "\tKalkulator naukowy\n";
		cout << "p - potega\n";
		cout << "m - miejsce zerowe\n";
		cout << "s - pierwiastek\n";
		cout << "k - koniec\n";

		cin >> wybor;

		switch (wybor) {

		case 'p': // potega


			cout << "Podaj podstawe: ";
			cin >> o;
			cout << "\nPodaj potege: ";
			cin >> p;

			cout << o << "^" << p << " = " << potega(o, p) << "\n";

			break;
		case 'm': // miejsca zerowe


			cout << "Podaj parametr a: ";
			cin >> a;
			cout << "\nPodaj parametr b: ";
			cin >> b;
			cout << "\nPodaj parametr c: ";
			cin >> c;

			d = delta(a, b, c);

			if (d == 0) {
				cout << "\nMiejsce zerowe: " << (double)((-b) / (2 * a)) << "\n";
			}
			else if (d > 0) {
				pd = sqrt(d);
				cout << "\nMiejsca zerowe: " << (double)((-b + pd) / (2 * a)) << ", " << (double)((-b - pd) / (2 * a)) << "\n";
			}
			else {
				cout << "\nBrak rzeczywistych miejsc zerowych\n";
			}



			break;
		case 's': // pierwiastek


			cout << "Podaj podstawe: ";
			cin >> o;
			cout << "\nPodaj stopien pierwiastka: ";
			cin >> p;

			cout << p << "/" << o << " = " << pierwiastek(o, p) << "\n";

			break;
		case 'k': // koniec
			return 0;
			break;
		}
	} while (wybor != 'k');

	system("PAUSE");
	return 0;
}
