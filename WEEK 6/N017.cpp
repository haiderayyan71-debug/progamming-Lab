#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of coins: ";
    cin >> n;

    double coin, total = 0;

    cout << "Enter coin values (0.25, 0.10, 0.05, 0.01):\n";
    for (int i = 0; i < n; i++) {
        cin >> coin;
        total += coin;
    }

    double bill;
    cout << "Enter bill amount: ";
    cin >> bill;

    if (total >= bill) {
        cout << "YES, you can pay the bill." << endl;
    } else {
        cout << "NO, not enough money." << endl;
    }

    return 0;
}