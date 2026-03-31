#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'z')
            str[i] = 'a';
        else if (str[i] == 'Z')
            str[i] = 'A';
        else
            str[i] = str[i] + 1;
    }

    cout << "Output: " << str;

    return 0;
}