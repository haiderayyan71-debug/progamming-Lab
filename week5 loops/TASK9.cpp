#include <iostream>
using namespace std;

int main()
 {
    double inheritance;
    int targetYear;

    // Reading input: 
    // 1. Inherited money (X)
    // 2. The year he lives until (inclusive)
    if (!(cin >> inheritance >> targetYear)) return 0;

    int currentAge = 18; // Ivan is 18 in the year 1800

    for (int year = 1800; year <= targetYear; year++) {
        if (year % 2 == 0) {
            // Even years: spends 12,000
            inheritance -= 12000;
        } else {
            // Odd years: spends 12,000 + (50 * current age)
            inheritance -= (12000 + 50 * currentAge);
        }
        
        // Ivan gets one year older every year
        currentAge++;
    }

    // Set formatting to 2 decimal places
    cout << fixed << setprecision(2);

    if (inheritance >= 0) {
        cout << "Yes! He will live a carefree life and will have " 
             << inheritance << " dollars left." << endl;
    } else {
        // Use abs() to show the debt as a positive "needed" amount
        cout << "He will need " << abs(inheritance) << " dollars to survive." << endl;
    }

    
}
