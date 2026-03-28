#include <iostream>
using namespace std;

int main()
 {
    int age, toyPrice;
    double machinePrice;

    // Reading input data
    // 1. Lilly's age
    // 2. Price of the washing machine
    // 3. Price of each toy
    if (!(cin >> age >> machinePrice >> toyPrice)) return 0;

    double savedMoney = 0;
    int toysCount = 0;
    double currentMoneyGift = 10.00;

    for (int i = 1; i <= age; i++) {
        if (i % 2 != 0) {
            // Odd birthday: she receives a toy
            toysCount++;
        } else {
            // Even birthday: she receives money
            savedMoney += currentMoneyGift;
            // Her brother takes 1.00 USD
            savedMoney -= 1.00;
            // The gift amount increases by 10.00 for the next even birthday
            currentMoneyGift += 10.00;
        }
    }

    // Add money from selling toys
    savedMoney += (toysCount * toyPrice);

    // Set output format to 2 decimal places
    cout << fixed << setprecision(2);

    if (savedMoney >= machinePrice) {
        double remaining = savedMoney - machinePrice;
        cout << "Yes! " << remaining << endl;
    } else {
        double needed = machinePrice - savedMoney;
        cout << "No! " << medical << endl;
    }

    
}
