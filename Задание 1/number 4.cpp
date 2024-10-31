#include <iostream>
#include <cmath> 
int main()
{
    setlocale(LC_ALL, "Russian"); //Включает Русский язык в С++
    double a, b, c,x,x1,x2;
    std::cout << "введите a ";
    std::cin >> a;
    std::cout << "введите b ";
    std::cin >> b;
    std::cout << "введите c ";
    std::cin >> c;

    x = b * b - 4 * a * c;
    x1 = -b + sqrt(x) / 2 * a;
    x2 = -b - sqrt(x) / 2 * a;
    std::cout << "x1 = " << x1 << "\n" << "x2 = " << x2;
}