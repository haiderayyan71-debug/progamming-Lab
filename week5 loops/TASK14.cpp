#include <iostream>
using namespace std;

int main()
 {
    // Outer loop for 5 rows
    for (int i = 1; i <= 5; i++) {
        // Inner loop runs 'i' times (1st row = 1 star, 2nd row = 2 stars...)
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
}
