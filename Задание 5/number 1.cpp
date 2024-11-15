#include <iostream>
#include <cmath>

int NumMinus(int a, int b) {
    while (a > 0 and b > 0)
        if (a > b)
            a -= b;
        else
            b -= a;
    return a + b;
}

int NumDevision(int a, int b) {
    while (a > 0 and b > 0)
        if (a > b)
            a %= b;
        else
            b %= a;
    return a + b;
}


int main() {
    setlocale(LC_ALL, "Russian"); // Включает Русский язык в С++
    double a, b;
    std::cout << "Number 1 ";
    std::cin >> a;
    std::cout << "Number 2 ";
    std::cin >> b;
    if (a <= 0 or b <= 0) {
        std::cout << "Error\n";
    }
    else {
	 	std::cout << "Делитель через минус " << NumMinus(abs(a), abs(b)) << "\n";
    	std::cout << "Делитель через деление " << NumDevision(abs(a), abs(b)) << "\n";
	}
}