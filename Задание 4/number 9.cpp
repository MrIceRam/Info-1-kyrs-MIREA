#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>

int char_to_int(char symbol) {
    switch (symbol) {
    case '0':return 0;
    case '1':return 1;
    case '2':return 2;
    case '3':return 3;
    case '4':return 4;
    case '5':return 5;
    case '6':return 6; 
    case '7':return 7;
    case '8':return 8;
    case '9':return 9;
    case 'A':return 10;
    case 'B':return 11;
    case 'C':return 12;
    case 'D':return 13;
    case 'E':return 14;
    case 'F':return 15;
    }
    return -1;
}

std::string int_to_char(int symbol) {
    switch (symbol) {
    case 0:return "0";
    case 1:return "1";
    case 2:return "2";
    case 3:return "3";
    case 4:return "4";
    case 5:return "5";
    case 6:return "6";
    case 7:return "7";
    case 8:return "8";
    case 9:return "9";
    case 10:return "A";
    case 11:return "B";
    case 12:return "C";
    case 13:return "D";
    case 14:return "E";
    case 15:return "F";
    }
    return "";
}

double funTenCC(std::string line, int base) { // перевод в 10 сс
    double new_x = 0;                      // полученное число в 10 сс

    for (int i = 0; i < line.size(); i++) { // пробегание по всем цифрам
        int symbol = char_to_int(line[i]); // конвертированный символ в цифру
        new_x += symbol * pow(base, line.size() - i - 1); // запись в число цифры line[i]
    }

    return new_x;
}

std::string funNewCC(int num, int base) {
    std::string new_x = "";
    while (num > 0) {
        new_x += int_to_char(num % base);
        num /= base;
    }
    std::reverse(new_x.begin(), new_x.end());//revers-это разворот строки
    return new_x;
}

int main() {
    std::string x;
    int old_ss, new_ss;
    std::cout << "--Start--\n";
    std::cout << "Number: ";
    std::cin >> x;
    std::cout << "Old CC: ";
    std::cin >> old_ss;
    std::cout << "New CC: ";
    std::cin >> new_ss;

    int num = funTenCC(x, old_ss);
    std::cout << "Number: " << funNewCC(num, new_ss) << std::endl;
    main();
}