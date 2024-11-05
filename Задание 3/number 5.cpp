

#include <iostream>
#include <fstream>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    setlocale(0, "");
    std::string x;
    int i = 0;
    std::cout << "строка = ";
    std::cin >> x;
    for (int i = 0; i < x.length() - 1; i++) {
       for (int j = i; j < x.length() - 1; j++) {
           if (x[i] > x[j + 1]) {
              std::swap(x[i], x[j + 1]);
           }
       }
    }
   std::cout << x;

    return 0;
}
