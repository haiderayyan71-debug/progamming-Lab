#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int* numbers = new int; // Dynamically allocate array

    std::cout << "Enter " << n << " numbers:\n";
    for (int idx = 0; idx < n; idx++) {
        std::cin >> numbers[idx];
    }

    std::cout << "The numbers you entered are:\n";
    for (int idx = 0; idx < n; idx++) {
        std::cout << numbers[idx] << std::endl;
    }

     delete[]numbers;//Free memory 
    return 0;
}