#include <iostream>// cout, cin
#include <algorithm>//next_permutation
#include <string> // Для работы со строками
using namespace std; // Подключение пространства имен

bool pr(int* urna, int n) // Создаем функцию, которая будет возвращать тип bool
{
    for (int i = 0; i < n; ++i) // пробег по 10 шарикам
    {
        if (urna[i] == i) // если условие истинно(номер=позиция)
        {
            return true; // Возвращаем True
        }
    }
    return false; // Иначе False
}
int main()
{
    setlocale(LC_ALL, "rus"); // Подключение русского языка
    int cnt = 0, n = 10, f = 3628800; // счётчик, количество шариков, количество всех перестановок (10!)
    int urna[10] = { 0,1,2,3,4,5,6,7,8,9 }; // Создаем массив
    for (int i = 0; i < f; ++i)
    {
        next_permutation(urna, urna + n); // Находим наибольший индекс i, для которого элементы массива равны
        if (pr(urna, n)) // И применяем нашу функцию
            cnt++; // Прибавляем к счетчику + 1
    }
    cout << "Количество вариантов: " << cnt << endl; // Выводим количество перестановок
}