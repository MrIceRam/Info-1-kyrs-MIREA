
#include <iostream>
#include <fstream>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    char readline[30];
    std::ifstream File("Oskin.txt");
    while (File.getline(readline, 30)) {
       for (int i = 0; i < strlen(readline); i++) {
           if (isdigit(readline[i])) {
               std::cout << readline[i];
           }
       }
    }
    File.close();
}