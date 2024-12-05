#include <iostream>
#include <cmath>
int main()
{
    setlocale(LC_ALL, "Russian"); //Включает Русский язык в С++
    int n;
    std::cout << "n = ";
    double snizy,y;
    std::cin >> n;
    for (int i = 1; i < n + 1; i++){
        snizy += sin(i);
        y += (i)/snizy;
    }
    std::cout << y;
}