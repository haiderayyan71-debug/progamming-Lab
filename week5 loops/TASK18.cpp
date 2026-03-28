#include <iostream>
using namespace std;

int main()
 {
    long long number;
    int digit, count = 0;

    cout << "Enter number: ";
    cin >> number;
    cout << "Enter digit: ";
    cin >> digit;

    // Save original for the final output
    long long temp = number;

    // Use a while loop to check each digit
    while (temp > 0) {
        int lastDigit = temp % 10; // Get the rightmost digit
        if (lastDigit == digit) {
            count++;
        }
        temp /= 10; // Remove the rightmost digit
    }

    cout << "Frequency of " << digit << " in " << number << " is: " << count << endl;

    
}
