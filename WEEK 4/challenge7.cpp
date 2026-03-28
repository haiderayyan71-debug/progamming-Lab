#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a single character: ";
    cin >> ch;

    // Check if it's a number
    if (ch >= '0' && ch <= '9') {
        cout << "It is a number." << endl;
    }
    // Check if it's an alphabet
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Check for vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << "It is a vowel." << endl;
        } 
        else {
            cout << "It is a consonant." << endl;
        }
    }
    // If not number or alphabet
    else {
        cout << "It is a special character." << endl;
    }

    return 0;
}