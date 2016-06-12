#include <iostream>
#include "Funkcje.h"

int main() {
	double o; unsigned int p;
	double a; double b; double c;
	double d;
	double pd;

	char wybor;

	std::cout << "Glowny program\n";

	do {
		std::cout << "\tKalkulator naukowy\n";
		std::cout << "p - potega\n";
		std::cout << "m - miejsce zerowe\n";
		std::cout << "s - pierwiastek\n";
		std::cout << "k - koniec\n";

		std::cin >> wybor;

		switch (wybor) {

		case 'p': // potega


			std::cout << "Podaj podstawe: ";
			std::cin >> o;
			std::cout << "\nPodaj potege: ";
			std::cin >> p;

			std::cout << o << "^" << p << " = " << potega(o, p) << "\n";

			break;
		case 'm': // miejsca zerowe


			std::cout << "Podaj parametr a: ";
			std::cin >> a;
			std::cout << "\nPodaj parametr b: ";
			std::cin >> b;
			std::cout << "\nPodaj parametr c: ";
			std::cin >> c;

			d = delta(a, b, c);

			if (d == 0) {
				std::cout << "\nMiejsce zerowe: " << (double)((-b) / (2 * a)) << "\n";
			}
			else if (d > 0) {
				pd = sqrt(d);
				std::cout << "\nMiejsca zerowe: " << (double)((-b + pd) / (2 * a)) << ", " << (double)((-b - pd) / (2 * a)) << "\n";
			}
			else {
				std::cout << "\nBrak rzeczywistych miejsc zerowych\n";
			}



			break;
		case 's': // pierwiastek


			std::cout << "Podaj podstawe: ";
			std::cin >> o;
			std::cout << "\nPodaj stopien pierwiastka: ";
			std::cin >> p;

			std::cout << p << "/" << o << " = " << pierwiastek(o, p) << "\n";

			break;
		case 'k': // koniec
			return 0;
			break;
		}
	} while (wybor != 'k');

	system("PAUSE");
	return 0;
}
