
#include <iostream>
#include <cmath>


using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double m, S, n, p;
    std::cout << "S = ";
    std::cin >> S;
    std::cout << "n = ";
    std::cin >> n;
    std::cout << "p = ";
    std::cin >> p;

    if (S != 0 or n != 0 or p != 0) {
        m = (S * (p / 100) * pow(1 + (p / 100), n)) / (12 * (pow(1 + (p / 100), n) - 1));
        std::cout << "m = ";
        std::cout << m;
    }
    else {
        std::cout << "Ошибка";
    }
}