#include <iostream> 
#include <cmath> 

int main(){
    double N, s; 
    std::cout << "N = \n"; 
    std::cin >> N; 
    if (N > 0) { 
        for (s = 0; s <= 9; s += 1) { 
            std::cout << N + s << "\n"; 
        } 
    } 
    else { 
        for (s = 1; s <= 10; s += 1) 
        { 
            std::cout << s << "\n"; 
        } 
    }
}

