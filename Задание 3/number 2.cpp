
#include <iostream>
#include <cmath>


using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double m, S, n, p;
    std::cout << "m = ";
    std::cin >> m;
    std::cout << "S = ";
    std::cin >> S;
    std::cout << "n = ";
    std::cin >> n;
    double r = 0.5, old = 0, epsilon = 1e-8;

    for (; abs(r - old) > epsilon;)
    {
        old = r;
        r = 12 * m / S * (1 - 1 / pow(1 + old, n));
    }

    std::cout << "p = " << r * 100 << endl;

}