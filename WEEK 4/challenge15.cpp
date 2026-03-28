#include <iostream>


using namespace std;
main()

 {
    if (n == 0) return "zero";
    if (n == 100) return "one hundred";

    string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", 
                     "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", 
                     "seventeen", "eighteen", "nineteen"};
    
    string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if (n < 20) {
        return ones;
    } else {
        int tensDigit = n / 10;
        int onesDigit = n % 10;
        
        if (onesDigit == 0) {
            return tens[tensDigit];
        } else {
            return tens[tensDigit] + " " + ones[onesDigit];
        }
    }
}

int main() {
    int number;
    cout << "Enter a number (0-100): ";
    cin >> number;

    if (number >= 0 && number <= 100) {
        cout << convertToText(number) << endl;
    } else {
        cout << "Error: Number must be between 0 and 100." << endl;
    }

    
}
