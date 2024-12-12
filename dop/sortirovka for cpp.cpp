#include <iostream>

void sortirovka(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    std::cout << "Колличество элементов: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Теперь сами элементы:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    sortirovka(arr, n);

    std::cout << "Sorted array:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

}
