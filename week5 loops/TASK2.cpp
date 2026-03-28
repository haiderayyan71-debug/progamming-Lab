#include <iostream>
using namespace std;
int main()
 {
    long long first = 0, second = 1, next;
    for (int i = 0; i < length; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << (i == length - 1 ? "" : ", ");
    }
    cout << endl;
}

 
  
    cout << "Enter the length of Fibonacci series: ";
    cin >> len;
    generateFibonacci(len);
    
}
