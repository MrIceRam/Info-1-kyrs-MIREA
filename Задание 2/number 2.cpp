#include <iostream> 
#include <cmath>
int main(){
    
    double a, x; 
    std::cout << "a = "; 
    std::cin >> a; 
    std::cout << "x = "; 
    std::cin >> x; 
    if (x == 0) { 
        std::cout << "ошибка x == 0"; 
    } 
    else if (abs(x) < 1) { 
        std::cout << a * log(abs(x)); 
    } 
    else if (a - pow(x, 2) < 0) { 
        std::cout << "ошибка отрицательное число"; 
    } 
    else { 
        std::cout << sqrt(a - pow(x, 2)); 
    }
}