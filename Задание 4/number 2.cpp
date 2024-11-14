#include <iostream>

int sign(int x) {
    if (x > 0) {
        return 1;
    }
    if (x == 0) {
        return 0;
    }
    if (x < 0) {
        return -2;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian"); //Включает Русский язык в С++
    double a;
    
    std::cout << "Введите любое число "; 
    if (std::cin >> a) {
        std::cout << sign(a) << "\n";
        main();
    }
    else {
        std::cout << "Error";
        return 0;
    }
}