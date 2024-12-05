// #include <iostream>

// int main() {
//     setlocale(LC_ALL, "Russian"); // Включает Русский язык в С++

// }

#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("txt.txt"); // открываем файл для чтения

    if (!file.is_open()) {
        std::cerr << "Unable to open file." << std::endl;
        return 1;
    }

    std::string longestWord;
    std::string word;

    while (file >> word) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }

    file.close();

    std::cout << "The longest word in the file is: " << longestWord << std::endl;

    return 0;
}