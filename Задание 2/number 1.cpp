#include <iostream> 
#include <cmath> 
 
int main() 
{ 
    setlocale(LC_ALL, "Russian"); // Включает Русский язык в С++
    double pi = 2 * acos(0.0); // Создаем пи

    double R, h, l, r; 
    double V, S; 
    std::cout << "R = "; 
    std::cin >> R; 
    std::cout << "r = "; 
    std::cin >> r; 
    std::cout << "h = "; 
    std::cin >> h; 
    std::cout << "l = "; 
    std::cin >> l; 
 
    if (r <= 0 or R <= 0 or h <= 0 or l <= 0) { // Проверка переменных, чтобы небыло 0
        std::cout << "Ошибка"; 
    } 
    else { //иначе
        V = pi * h *(R * R + R * r + r * r)/3; 
        std::cout << "V = "; 
        std::cout << V; 
        std::cout << "\n"; 
        S = pi * (R * R + (R+r)*l + r*r); 
        std::cout << "S = "; 
        std::cout << S; 
    }
}