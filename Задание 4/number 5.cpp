#include <iostream>
#include <cmath>


int main() {
  double i = 10;
  for (double y = 1; y >= -1; y -= 0.1) {
    for (double x = 1; x <= i; x += 0.1) {
      if (((y - 0.1) <= sin(x)) and (sin(x) <= (y + 0.1))) {
        std::cout << '0';
      } else {
        std::cout << ' ';
      }
    }
    std::cout << '\n';
  }
  return 0;
}
