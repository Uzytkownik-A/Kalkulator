#include <iostream>



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