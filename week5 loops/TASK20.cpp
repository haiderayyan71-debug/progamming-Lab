#include <iostream>
using namespace std;

 main()
 {
    int maxStars = 5;

    // Part 1: Growing the pattern
    for (int i = 1; i <= maxStars; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Part 2: Shrinking the pattern
    for (int i = maxStars - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    
}
