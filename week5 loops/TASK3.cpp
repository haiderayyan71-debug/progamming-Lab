#include <iostream>
using namespace std;

int main()
 {
    if (number == 0) return 1;
    int count = 0;
    number = abs(number); // Handle negative numbers
    while (number > 0) {
        number /= 10;
        count++;
    }
    return count;
}

int totalDigits(long long number)    long long num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Total number of digits: " << totalDigits(num) << endl;
    return 0;
}
