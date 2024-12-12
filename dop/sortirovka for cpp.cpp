#include <iostream>

void quadraticSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    quadraticSort(arr, n);

    std::cout << "Sorted array:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
