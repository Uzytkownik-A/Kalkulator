#include <iostream>

/* Funkcja przyjmuje parametry a i b -> a^b */
double potega(double a, unsigned int b) {
	double zwracany = 1.0;
	for (unsigned int i = 0; i < b; ++i) {
		zwracany *= a;
	}
	return zwracany;
}

/* Funkcja zwraca delte z parametrow funkcji kwadratowej */
double delta(double a, double b, double c) {
	return - (4 * a * c) + (b * b) ;
}

/* Funkcja pierwiastkowania */
double pierwiastek(double a, double b) {
	if (!b) return 0;
	return pow(a, 1.0 / b);
}
