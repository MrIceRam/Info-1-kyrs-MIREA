#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian"); //Включает Русский язык в С++
    double matrix_a[3][4] = {
        {5, 2, 0, 10},
        {3, 5, 2, 5},
        {20, 0, 0, 0} };
    double matrix_b[4][2] = {
        {1.20, 0.50},
        {2.80, 0.40},
        {5.00, 1.00},
        {2.00, 1.50} };
    double matrix_c[3][2];
    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 2; x++) {
            matrix_c[y][x] = 0;
            for (int i = 0; i < 4; i++) {
                matrix_c[y][x] += matrix_a[y][i] * matrix_b[i][x];
            }
        }
    }

    // Вывод полученной матрицы
    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 2; x++) {
            std::cout << matrix_c[y][x] << "   ";
        }
        std::cout << std::endl;
    }
    // Задание 1
    std::cout << "----------------------";
    std::cout << std::endl << "Задание 1: " << std::endl;
    int max_seller, min_seller;
    double maxim = 0, minim = 10000000;
    for (int i = 0; i < 3; i++) {
        if (maxim < matrix_c[i][0]) { max_seller = i + 1; maxim = matrix_c[i][0]; }
        if (minim > matrix_c[i][0]) { min_seller = i + 1; minim = matrix_c[i][0]; }
    }
    std::cout << "Продавец " << max_seller << " выручил больше всего денег. Их сумма равна " << maxim << std::endl;
    std::cout << "Продавец " << min_seller << " выручил меньше всего денег. Их сумма равна " << minim << std::endl;

    // Задание 2
    std::cout << "----------------------";
    std::cout << std::endl << "Задание 2: " << std::endl;
    max_seller = 0; min_seller = 0;
    maxim = 0, minim = 10000000;
    for (int i = 0; i < 3; i++) {
        if (maxim < matrix_c[i][1]) { max_seller = i + 1; maxim = matrix_c[i][1]; }
        if (minim > matrix_c[i][1]) { min_seller = i + 1; minim = matrix_c[i][1]; }
    }
    std::cout << "Продавец " << max_seller << " получил больше всего комиссионных, они равны " << maxim << std::endl;
    std::cout << "Продавец " << min_seller << " получил меньше всего комиссионных, они равны " << minim << std::endl;

    // Задание 3
    std::cout << "----------------------";
    std::cout << std::endl << "Задание 3: " << std::endl;
    double sum = 0;
    for (int i = 0; i < 3; i++) sum += matrix_c[i][0] - matrix_c[i][1];
    std::cout << "Сумма денег вырученных за товары " << sum << std::endl;

    // Задание 4
    std::cout << "----------------------";
    std::cout << std::endl << "Задание 4: " << std::endl;
    sum = 0;
    for (int i = 0; i < 3; i++) sum += matrix_c[i][1];
    std::cout << "Сумма коммисионных " << sum << std::endl;

    // Задание 5
    std::cout << "----------------------";
    std::cout << std::endl << "Задание 4: " << std::endl;
    sum = 0;
    for (int i = 0; i < 3; i++) sum += matrix_c[i][0] + matrix_c[i][1];
    std::cout << "Сумма прошедших через руки денег " << sum << std::endl;

}