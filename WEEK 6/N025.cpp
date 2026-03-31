#include <iostream>
using namespace std;

// Function to find largest and smallest
void findMinMax(int arr[], int n) {
    int min = arr[0];
    int max = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Smallest number: " << min << endl;
    cout << "Largest number: " << max << endl;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " numbers:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    findMinMax(arr, n);

    return 0;
}