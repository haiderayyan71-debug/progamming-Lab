#include <iostream>
using namespace std;

int main()
 {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

{
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int gcd = findGCD(num1, num2);
    // Formula: LCM(a, b) = (a * b) / GCD(a, b)
    int lcm = (num1 * num2) / gcd;

    cout << "GCD: " << gcd << endl;
    cout << "LCM: " << lcm << endl;

    }
}
