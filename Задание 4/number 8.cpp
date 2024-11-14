#include <iostream>
using namespace std;

int main()
{
    double matrix_a[3][4] = { // 3x4
        {5, 2, 0, 10},
        {3, 5, 2, 5},
        {20, 0, 0, 0}};
                
    double matrix_b[4][2] = { // 4x2
        {1.20, 0.50},
        {2.80, 0.40},
        {5.00, 1.00},
        {2.00, 1.50}};
        
    double matrix_c[3][2]; // 3x2

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 2; y++) {
            for (int i = 0; i < 4; i++) {
                matrix_c[x][y] += matrix_a[x][i] * matrix_b[i][y];
            }
        }
    }

    // Вывод матрицы C
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 2; y++) {
            cout << matrix_c[x][y] << "               ";
        }
        cout << endl;
    }
    cout << "------------------------------\n";
    
	//////////////////////////////////////////////////////// Деньги
    int maxSeller = 0;
	int minSeller = 0;
    double maxMoney = 0;
	double minMoney = 10000000;
    for (int x = 0; x < 3; x++) {
        if (matrix_c[x][0] > maxMoney) {
			maxSeller = x + 1;
			maxMoney = matrix_c[x][0];
		}
        if (matrix_c[x][0] < minMoney) {
			minSeller = x + 1;
			minMoney = matrix_c[x][0]; 
		}
    }
    cout << "Seller " << maxSeller << " MaxMoney: " << maxMoney << endl;
    cout << "Seller " << minSeller << " MinMoney: " << minMoney << endl;
    
	//////////////////////////////////////////////////////// Комиссионные
    maxSeller = 0;
	minSeller = 0;
    double maxComss = 0;
	double minComss = 10000000;
    for (int x = 0; x < 3; x++) {
        if (matrix_c[x][1] > maxComss) {
			maxSeller = x + 1;
			maxComss = matrix_c[x][1]; 
		}
        if (matrix_c[x][1] < minComss) {
			minSeller = x + 1;
			minComss = matrix_c[x][1]; 
		}
    }
    cout << "Seller " << maxSeller << " MaxComss " << maxComss << endl;
    cout << "Seller " << minSeller << " MinComss " << minComss << endl;

	//////////////////////////////////////////////////////// Общая сумма денег
    double sumMoney = 0;
    for (int x = 0; x < 3; x++) {
    	sumMoney += matrix_c[x][0];
	}
    cout << "SumMoney = " << sumMoney << endl;
    
	/////////////////////////////////////////////////////// Общая сумма комиссионных
    double sumComss = 0;
    for (int x = 0; x < 3; x++) {
    	sumComss += matrix_c[x][1];
	}
    cout << "SumComss = " << sumComss << endl;

	/////////////////////////////////////////////////////// Общая сумма денег (+ комиссионные)
    double SumMoneyResult = 0;
    for (int x = 0; x < 3; x++) {
    	SumMoneyResult += matrix_c[x][0] + matrix_c[x][1];
	}
    cout << "SumMoneyResult = " << SumMoneyResult << endl;
}