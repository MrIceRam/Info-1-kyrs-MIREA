#include <iostream>
#include <fstream>
#include <string>

int main() 
{ 
    setlocale(LC_ALL, "Russian"); // Включает Русский язык в С++
    srand(time(NULL));
	std::ofstream file;
	file.open("num4-1.txt");

	for (int i = 0; i < 10; i++) // Запись в файл 10 чисел
	{
		file << i << std::endl;
	}
	file.close();

	std::ifstream reader("num4-1.txt", std::ios::out);

	double sum = 0;
	if (reader.is_open())
	{
		double data;
		while (reader >> data)
		{
			std::cout << data << std::endl;
			sum += data;
		}
	}
	std::cout << "Результат: " << sum;
}