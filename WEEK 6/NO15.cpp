#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of resistors: ";
    cin >> n;

    double resistance, total = 0;

    cout << "Enter resistance values:\n";
    for (int i = 0; i < n; i++) {
        cin >> resistance;
        total += resistance;
    }

    cout << "Total resistance = " << total << " ohms" << endl;

    return 0;
} 