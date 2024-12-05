#include <iostream>
#include <fstream>
#include <string>

int main() {
    setlocale(LC_ALL, "Russian"); // Включает Русский язык в С++
    std::ifstream file("txt.txt"); // открываем файл для чтения
    std::string longestWord;
    std::string word;
    int x = 99;
    
    while (file >> word) {
        if (word.length() < x) {
            x = word.length();
            longestWord = word;
        }
    }
    file.close();
    std::cout << "самое длинное слово: " << longestWord << std::endl;
    return 0;
}