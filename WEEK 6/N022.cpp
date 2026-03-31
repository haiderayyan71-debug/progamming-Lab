#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of chords: ";
    cin >> n;

    string chords[n];

    cout << "Enter " << n << " chords, one per line:\n";
    for (int i = 0; i < n; i++) {
        cin >> chords[i];
    }

    cout << "Jazzified chords: [";
    for (int i = 0; i < n; i++) {
        if (chords[i].back() != '7') {
            chords[i] += "7";
        }

        cout << chords[i];
        if (i != n - 1) cout << ", ";
    }
    cout << "]\n";

    return 0;
}