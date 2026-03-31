#include <iostream>
using namespace std;

int main() {
    int arr1[100], arr2[100];
    int n1 = 2, n2;

    cout << "Enter 2 elements for first array:\n";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter number of elements for second array: ";
    cin >> n2;

    cout << "Enter elements of second array:\n";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int result[200];

    
    result[0] = arr1[0];

   
    for (int i = 0; i < n2; i++) {
        result[i + 1] = arr2[i];
    }

    
    result[n2 + 1] = arr1[1];

    cout << "Resulting array: ";
    for (int i = 0; i < n2 + 2; i++) {
        cout << result[i] << " ";
    }

    return 0;
}