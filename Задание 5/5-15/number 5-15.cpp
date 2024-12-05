#include <iostream>
#include <fstream>
#include <vector>

// Функция для перевода числа из десятичной системы счисления в любую другую
std::string convertCC(int num, int cc) {
    std::string converted = "";
    while (num > 0) {
        int i = num % cc;
        if (i < 10) {
            converted = char(i + '0') + converted;
        } else {
            converted = char(i + 'A' - 10) + converted;
        }
        num /= cc;
    }
    return converted;
}

int main() {
    int N;
    std::cout << "Введите количество чисел: ";
    std::cin >> N;

    // Считываем вещественные числа и записываем их в файл
    std::ofstream File("input.txt");
    for (int i = 0; i < N; i++) {
        double num;
        std::cout << "Введите число: ";
        std::cin >> num;
        File << num << std::endl;
    }
    File.close();

    // Читаем вещественные числа из файла и переводим их в другую систему счисления
    std::ifstream File2("input.txt");
    std::ofstream x("converted.txt");
    double num;
    while (File2 >> num) {
        int cc;
        std::cout << "Введите сс (от 2 до 9) для числа " << num << ": ";
        std::cin >> cc;
        std::string ccNum = convertCC(num, cc);
        x << ccNum << std::endl;
    }
    File2.close();
    x.close();

    std::cout << "Числа сконвертированые числа в файл converted.txt\n";

    return 0;
}