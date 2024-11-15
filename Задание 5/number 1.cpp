#include <iostream>
#include <fstream>
#include <string>

int main() 
{ 
    setlocale(LC_ALL, "Russian"); // Включает Русский язык в С++
    int a = 24;
    int b = 5;
    b = a/b;
    int c = a % (b + 1);
    std::cout << c;
}