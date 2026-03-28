#include <iostream>
using namespace std;

int main() {
    int temp1, temp2, diff;

    cout << "Enter temperature of City 1: ";
    cin >> temp1;

    cout << "Enter temperature of City 2: ";
    cin >> temp2;

    diff = temp1 - temp2;

    
    if (diff < 0) {
        diff = -diff;
    }

    if (diff > 10) {
        cout << "Difference is too Big" << endl;
    }

    cout << "Program Ends" << endl;

    
}