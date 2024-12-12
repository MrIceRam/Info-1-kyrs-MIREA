#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "Russian"); //Включает Русский язык в С++
    int a, b, c;
    std::cout << "Стоимость основного спинера "; std::cin >> a;
    std::cout << "Стоимость одной лопасти "; std::cin >> b;
    std::cout << "Максимальная стоимость основного спинера "; std::cin >> c;

        while (a > c) // стоимость основания спинера < стоимость спинера
    {
        std::cout << "a !< c" << "\n";
        std::cout << "Стоимость основного спинера "; std::cin >> a;
        std::cout << "Максимальная стоимость основного спинера "; std::cin >> c;

    }

    std::cout << ((c - a) / b) << "\n";

    main();
}