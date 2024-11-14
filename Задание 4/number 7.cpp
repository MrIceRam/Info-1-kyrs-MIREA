#include <iostream>

int var1(int previous)
{
	int m = 37;
	int b = 3;
	int c = 64;
	return (m * previous + b) % c;
}

int var2(int previous)
{
	int m = 25713;
	int b = 13849;
	int c = 65537;
	return (m * previous + b) % c;
}

int main()
{
	setlocale(0, "");
	int x = 0;
	std::cout << "Вариант 1 или 2: ";
	std::cin >> x;
	std::cout << "\n";
	if (x == 1 or x == 2) {
		int amount;
		std::cout << "кол-во чисел: ";
		std::cin >> amount;
		int previous = 0;
		for (int i = 0; i < amount; i++)
		{
			if (x == 1)previous = var1(previous);
			else previous = var2(previous);
			std::cout << i + 1 << "." << previous << std::endl;
		}
		main();
	}
	else {
		std::cout << "ERROR";
		exit;
	}
	
}
