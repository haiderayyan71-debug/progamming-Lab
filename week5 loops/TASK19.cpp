#include <iostream>
using namespace std;

main()
 {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Method 2: Using a For Loop (Brute Force)
int findGCD_Loop(int a, int b) {
    int hcf = 1;
    // We only need to check up to the smaller of the two numbers
    int limit = (a < b) ? a : b; 
    
    for (int i = 1; i <= limit; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }
    return hcf;
}

// Function to find LCM using the hint formula
int findLCM(int a, int b, int gcdValue) {
    // Formula: LCM(a, b) = (a * b) / GCD(a, b)
    return (a * b) / gcdValue;
}

int main() {
    int num1, num2;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    // Using the first GCD function
    int gcd = findGCD_Euclidean(num1, num2);
    int lcm = findLCM(num1, num2, gcd);

    cout << "\nResults:" << endl;
    cout << "GCD (Euclidean): " << gcd << endl;
    cout << "GCD (For Loop):  " << findGCD_Loop(num1, num2) << endl;
    cout << "LCM:             " << lcm << endl;

    
}
