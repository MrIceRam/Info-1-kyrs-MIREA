#include <iostream>
#include <string>
#include <cmath>


int char_to_int(char symbol) {
	switch (symbol){
	case '0': return 0; break;
	case '1': return 1; break;
	case '2': return 2; break;
	case '3': return 3; break;
	case '4': return 4; break;
	case '5': return 5; break;
	case '6': return 6; break;
	case '7': return 7; break;
	case '8': return 8; break;
	case '9': return 9; break;
	case 'A': return 10; break;
	case 'B': return 11; break;
	case 'C': return 12; break;
	case 'D': return 13; break;
	case 'E': return 14; break;
	case 'F': return 15; break;
	}
	return -1;
}


std::string int_to_char(int symbol) {
	switch (symbol) {
	case 0: return "0"; break;
	case 1: return "1"; break;
	case 2: return "2"; break;
	case 3: return "3"; break;
	case 4: return "4"; break;
	case 5: return "5"; break;
	case 6: return "6"; break;
	case 7: return "7"; break;
	case 8: return "8"; break;
	case 9: return "9"; break;
	case 10: return "A"; break;
	case 11: return "B"; break;
	case 12: return "C"; break;
	case 13: return "D"; break;
	case 14: return "E"; break;
	case 15: return "F"; break;
	}
	return "";
}


double funTenCC(std::string line, int base_num = 2) { // перевод в 10 с.с.
	double new_x = 0; // полученное число в 10 с.с.
	
	for (int i = 0; i < line.size(); i++) { // пробегание по всем цифрам
		int symbol = char_to_int(line[i]); // конвертированный символ в цифру
		new_x += symbol * pow(base_num, line.size() - i - 1); // запись в число цифры line[i]
	}
	
	return new_x;
}


std::string funNewCC(int num, int base_num = 2) { // перевод в нужную с.с.
	std::string new_x = int_to_char(num % base_num);
	
	if (num > 0) {
		return funNewCC(num / base_num) + new_x; 
	}
	
	new_x = "";
	return new_x;
}


int main()
{
	std::string x;
	int old_ss, new_ss;
	std::cout << "Number: ";
	std::cin >> x;
	std::cout << "Old CC: ";
	std::cin >> old_ss;
	std::cout << "New CC: ";
	std::cin >> new_ss;
	
	int num = funTenCC(x, old_ss);
	std::cout << "Number: " << num << std::endl;
	std::cout << "Number: " << funNewCC(num, new_ss) << std::endl;
    return 0;
}