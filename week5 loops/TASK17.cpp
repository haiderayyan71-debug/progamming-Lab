#include <iostream>
using namespace std;

int main()
 {
    int nums[] = {24, 50, 29};

    // Outer loop picks each number from the list
    for (int i = 0; i < 3; i++) {
        cout << "Multiplication Table of " << nums[i] << ":" << endl;
        
        // Inner loop calculates 1 through 10
        for (int j = 1; j <= 10; j++) {
            cout << nums[i] << " * " << j << " = " << nums[i] * j << endl;
        }
        cout << endl; // Blank line between tables for clarity
    }

    
}
