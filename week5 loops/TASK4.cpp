#include <iostream>
using namespace std;

main()
 {
    int count = 0;
    number = abs(number);
    while (number > 0) {
        if (number % 10 == digit) {
            count++;
        }
        number /= 10;
    }
    return count;
}
 
    long long num;
    int digit;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter the digit to check: ";
    cin >> digit;
    cout << "Frequency: " << frequencyChecker(num, digit) << endl;
    
}
