#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian"); //Включает Русский язык в С++
    int a, b, c;
    std::cout << "на улице день? 1-да 0-нет ";
    std::cin >> a;
    std::cout << "шторы раздвинуты? 1-да 0-нет ";
    std::cin >> b;
    std::cout << "включена лампа? 1-да 0-нет ";
    std::cin >> c;
    if ((a == 1 and b == 1) or c == 1 ) {
        std::cout << "в комнате светло\n";
    }
    else {
        std::cout << "в комнате темно\n";
    }
}