#include <iostream>// cout, cin
#include <algorithm>//next_permutation
#include <string> // Для работы со строками

bool TrueOrFalse(int* x, int n) // Создаем функцию, которая будет возвращать тип bool
{
    for (int i = 0; i < n; ++i) // пробег по 10 шарикам
    {
        if (x[i] == i) // если условие истинно(номер=позиция)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    setlocale(LC_ALL, "Russian"); //Включает Русский язык в С++
    int ih = 0, n = 10, f = 3628800; // счётчик, количество шариков, количество всех перестановок (10!)
    int x[10] = { 0,1,2,3,4,5,6,7,8,9 }; // Создаем массив
    for (int i = 0; i < f; ++i)
    {
        std::next_permutation(x, x + n); // Находим наибольший индекс i, для которого элементы массива равны
        if (TrueOrFalse(x, n)) // И применяем нашу функцию
            ih++; // Прибавляем к счетчику + 1
    }
    std::cout << "Количество вариантов: " << ih << std::endl; // Выводим количество перестановок
}
    