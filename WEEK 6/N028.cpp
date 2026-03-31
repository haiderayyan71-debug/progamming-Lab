#include <iostream>
#include <string>
using namespace std;

int main() {
    const int size = 4;

    string productNames[size];
    float prices[size];
    int quantity[size];

    cout << "Enter product names:\n";
    for (int i = 0; i < size; i++) {
        cin >> productNames[i];
    }

    cout << "Enter prices:\n";
    for (int i = 0; i < size; i++) {
        cin >> prices[i];
    }

    cout << "Enter quantities:\n";
    for (int i = 0; i < size; i++) {
        cin >> quantity[i];
    }

    cout << "\nProduct Details:\n";
    for (int i = 0; i < size; i++) {
        float totalValue = prices[i] * quantity[i];

        cout << productNames[i] << ": $" << prices[i]
             << ", " << quantity[i] << " in stock"
             << ", Total value: $" << totalValue << endl;
    }

    return 0;
}