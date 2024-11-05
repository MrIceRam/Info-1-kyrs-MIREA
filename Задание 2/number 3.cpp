#include <iostream> 
#include <cmath> 

int main(){
    double x, y, b; 
    std::cout << "x = "; 
    std::cin >> x; 
    std::cout << "y = "; 
    std::cin >> y; 
    std::cout << "b = "; 
    std::cin >> b; 
 
    if (b - y <= 0 or b - x < 0) { 
        std::cout << "ОШИБКА"; 
    } 
    else { 
        std::cout << "z = " << log(b - y) * sqrt(b - x); 
    }
}