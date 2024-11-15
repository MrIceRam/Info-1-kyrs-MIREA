
#include <iostream>
#include <cmath>
double pi = 2 * acos(0.0); // Создаем пи
using namespace std;

double a, b, h, r;
double rect(double a, double b) { // прямоугольник
	if (a <= 0 || b <= 0) {
		return -1;
	}
	return a * b;
}

double trin(double a, double h) { // треугольник
	if (a <= 0 || h <= 0) {
		return -1;
	}
	return 0.5 * a * h;
}


double circle(double r) { // круг
	if (r <= 0) {
		return -1;
	}
	return pi * pow(r, 2);
}

int main() {
	setlocale(LC_ALL, "Russian"); //Включает Русский язык в С++
	int select;
	cout << "1 прямоугольник" << "\n" << "2 треугольник" << "\n" << "3 круг" << "\n" << "Выбор = ";
	cin >> select;
	switch (select) {
	case 1: // прямоугольник
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		cout << "S = " << rect(a, b) << endl;
		main();
	case 2: // треугольник
		cout << "a = ";
		cin >> a;
		cout << "h = ";
		cin >> h;
		cout << "S = " << trin(a, h) << endl;
		main();
	case 3: // круг
		cout << "r = ";
		cin >> r;
		cout << "S = " << circle(r) << endl;
		main();
	}
}