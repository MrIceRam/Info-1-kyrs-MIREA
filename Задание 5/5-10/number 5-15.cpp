#include <iostream>
#include <fstream>
#include <vector>

// Функция для перевода числа из десятичной системы счисления в любую другую
std::string convertToBase(int num, int base) {
    std::string converted = "";
    while (num > 0) {
        int remainder = num % base;
        if (remainder < 10) {
            converted = char(remainder + '0') + converted;
        } else {
            converted = char(remainder + 'A' - 10) + converted;
        }
        num /= base;
    }
    return converted;
}

int main() {
    int N;
    std::cout << "Введите количество чисел: ";
    std::cin >> N;

    // Считываем вещественные числа и записываем их в файл
    std::ofstream outputFile("input.txt");
    for (int i = 0; i < N; i++) {
        double num;
        std::cout << "Введите вещественное число: ";
        std::cin >> num;
        outputFile << num << std::endl;
    }
    outputFile.close();

    // Читаем вещественные числа из файла и переводим их в другую систему счисления
    std::ifstream inputFile("input.txt");
    std::ofstream outputConvertedFile("converted.txt");
    double num;
    while (inputFile >> num) {
        int base;
        std::cout << "Введите основание системы счисления (от 2 до 9) для числа "
                  << num << ": ";
        std::cin >> base;
        std::string convertedNum = convertToBase(num, base);
        outputConvertedFile << convertedNum << std::endl;
    }
    inputFile.close();
    outputConvertedFile.close();

    std::cout << "Числа успешно сконвертированы и записаны в файл converted.txt\n";

    return 0;
}