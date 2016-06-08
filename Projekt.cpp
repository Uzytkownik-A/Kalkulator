#include <iostream>

// Prototypy
double potega(double a, unsigned int b);


int main() {

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

			double a; unsigned int b;

			std::cout << "Podaj podstawe: ";
			std::cin >> a;
			std::cout << "\nPodaj potege: ";
			std::cin >> b;

			std::cout << a << "^" << b << " = " << potega(a, b) << "\n";

			break;
		case 'm': // potega

			break;
		case 's': // potega

			break;
		case 'k': // potega
			return 0;
			break;
		}
	} while (wybor != 'k');

	system("PAUSE");
	return 0;
}

/* Funkcja przyjmuje parametry a i b -> a^b */
double potega(double a, unsigned int b) {
	double zwracany = 1.0;
	for (unsigned int i = 0; i < b; ++i) {
		zwracany *= a;
	}
	return zwracany;
}