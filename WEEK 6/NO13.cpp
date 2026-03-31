#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100], count = 0;

    cout << "Enter " << n << " numbers, one per line:" << endl;

    while (count < n) {
        int num;
        cin >> num;

        bool duplicate = false;

        for (int i = 0; i < count; i++) {
            if (arr[i] == num) {
                duplicate = true;
                break;
            }
        }

        if (duplicate) {
            cout << "Already entered: " << num << endl;
        } else {
            arr[count] = num;
            count++;
        }
    }

    cout << "Unique numbers entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}