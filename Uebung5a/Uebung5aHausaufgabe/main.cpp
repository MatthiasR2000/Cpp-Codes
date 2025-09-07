#include <iostream>
using namespace std;


double firstcontact(double x, double y);
int arraySmoothie(int numberArray[], int size);
double func(int x);
int summe(int n);
void caller(bool wahr, int m);
int quersumme(int y);

int main() {
	const int size = 5;
	int numberArray[size] = {3, 9, 5, 1, 7};
	cout << "Funktion firstcontact: " << firstcontact(3.3, 7.7) << endl;//x>y
	cout << "Funktion ArraySmoothie: " << arraySmoothie(numberArray, size) << endl;
	cout << "Funktion func: " << func(5) << endl;
	cout << "Funktion Summe: " << summe(9) << endl;
	caller(true, 15);
	caller(false, 15);
	cout << "\nFunktion Quersumme: " << quersumme(678) << endl;
	return 0;
}

double firstcontact(double x, double y) {
	cout << "Summe der zahlen x: " << x << " und y: " << y << " Beträgt: " << x+y << endl;
	if (x > y) {
		cout << "Differenz der zahlen x: " << x << " und y: " << y << " Beträgt: " << x - y << endl;
	}
	else {
		cout << "Differenz der zahlen y: " << y << " und x: " << x << " Beträgt: " << y - x << endl;
	}
	return x * y;
}

int arraySmoothie(int numberArray[], int size) {
	int summe = 0;
	for (int i = 0; i < size; i++) {
		summe += numberArray[i];
	}
	return summe;
}

double func(int x) {
	return x * 5.7 + (x / 3);
}

int summe(int n) {
	int summe = 0;
	for (int i = 0; i < n; i++) {
		summe += i;
	}
	return summe;
}

void caller(bool wahr, int m) {
	if (wahr == true) {
		cout << func(m) << endl;
	}
	else {
		cout << summe(m) << endl;
	}
}

int quersumme(int y) {
	int summe = 0;
	while (y != 0) {
		summe += y % 10;  // die letzte Ziffer zu summe hinzufügen
		y /= 10;           // die letzte Ziffer von y entfernen
	}
	return summe;
}
