#include <iostream>

int rim(char x) { // римские числа в арабские
	switch(x) {
		case 'I': return 1;
		case 'V': return 5;
		case 'X': return 10;
		case 'L': return 50;
		case 'C': return 100;
		case 'D': return 500;
		case 'M': return 1000;
	}
	return 0;
}

int match(std::string num){
    int x,a;
    int i = num.length() - 1;
    for (i; i >= 0; i--){
        if(rim(num[i]) >= 1)
            x = x + rim(x[i])
        else{
            x = x - rim(x[i])
        }

    }


}

int main(){
    std::string num;
    std::cout << "Number = "; std::cin >> num; std::cout << "\n";
    std::cout << match(num) <<"\n"
}