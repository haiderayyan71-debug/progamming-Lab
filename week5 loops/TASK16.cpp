#include <iostream>
using namespace std;

int main() 
{
    // Outer loop manages how far down the countdown goes
    for (int i = 5; i >= 1; i--) {
        // Inner loop always starts at 5 and counts down to 'i'
        for (int j = 5; j >= i; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    
}
