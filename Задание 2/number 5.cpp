#include <iostream> 
#include <cmath> 

int main(){
    double x; 
    double y; 
    for (x = -4;  x <= 4; x += 0.5) { 
        y = (x * x - 2 * x + 2) / (x - 1); 
 
        if (x - 1 == 0) { 
            std::cout << "Ошибка, знаминатель 0" << "\n"; 
        } 
        else { 
            std::cout << "x = " << x << " y = " << y << "\n"; 
        } 
    }
    return 0;
}
