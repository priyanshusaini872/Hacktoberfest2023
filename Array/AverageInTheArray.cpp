// C++ program to calculate average of array elements
#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid input. Number of elements should be greater than 0." << std::endl;
        return 1;
    }

    double sum = 0;
    int arr[n];

    std::cout << "Enter the elements of the array, separated by spaces:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
        sum += arr[i];
    }

    double average = sum / n;
    std::cout << "The average of the elements in the array is: " << average << std::endl;

    return 0;
}
