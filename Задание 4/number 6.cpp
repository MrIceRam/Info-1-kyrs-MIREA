#include <iostream>
#include <vector>
using namespace std;

int Number(char ch){
    switch(ch){
        case 'M': return 1000;
        case 'D': return 500;
        case 'C': return 100;
        case 'L': return 50;
        case 'X': return 10;
        case 'V': return 5;
        case 'I': return 1;
    }
    return 0;
}

int Decode(string input){
    int result;
    vector <int> num;

    for(char ch: input){
        num.push_back(Number(ch));
    }

    result = num[num.size()-1];
    
    for(int i = input.length()-2;i>=0;i--){
        if(num[i] >= num[i+1]) result += num[i];
        else result -= num[i];
    }

    return result;
}

int main(){
    string input;
    cout << "Number: ";
    cin >> input;
    
    cout << Decode(input) << endl;
    main();
}