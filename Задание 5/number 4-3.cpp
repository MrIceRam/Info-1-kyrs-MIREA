#include <iostream>
#include <cmath>
int main()
{
    setlocale(LC_ALL, "Russian"); //Включает Русский язык в С++
    int n;
    std::cout << "n = ";
    double snizy,y,up;
    std::cin >> n;
    y = 1;

    for (int i = 1; i < n + 1; i++){
        int x = 1;
        double snizy = 0;
        for(int i2 = 1; i2 <= i; i2++){
            x = x * i2;
        }
        for(int i2 = 1; i2 <= i; i2++){
            snizy += sin(2*i2);
        }
    y = y * (x/snizy);
std::cout << y << "\n";
    }
    std::cout << y;

main();
}