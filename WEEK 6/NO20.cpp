#include <iostream>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || 
            c == 'o' || c == 'u');
}

int main() {
    string input, result = "";

    cout << "Enter a string: ";
    getline(cin, input);

    for (char c : input) {
        if (!isVowel(c)) {
            result += c;
        }
    }

    cout << "Output: " << result << endl;

    return 0;
}