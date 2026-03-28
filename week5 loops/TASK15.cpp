#include <iostream>
using namespace std;

int main() 
{
    // Outer loop for 3 rows
    for (int i = 1; i <= 3; i++) {
        // Inner loop prints numbers 1 to 3
        for (int j = 1; j <= 3; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
}
