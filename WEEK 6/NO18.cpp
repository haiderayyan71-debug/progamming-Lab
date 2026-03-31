#include <iostream>
using namespace std;

int main() {
    int quarters, dimes, nickels, pennies;
    double total_due;

    cout << "Enter quarters: ";
    cin >> quarters;
    cout << "Enter dimes: ";
    cin >> dimes;
    cout << "Enter nickels: ";
    cin >> nickels;
    cout << "Enter pennies: ";
    cin >> pennies;

    cout << "Enter the total amount due: ";
    cin >> total_due;

    double total_money = quarters * 0.25 +
                         dimes * 0.10 +
                         nickels * 0.05 +
                         pennies * 0.01;

    if (total_money >= total_due)
        cout << "Can you pay the amount? Yes" << endl;
    else
        cout << "Can you pay the amount? No" << endl;

    return 0;
}