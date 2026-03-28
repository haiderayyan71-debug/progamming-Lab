#include <iostream>
using namespace std;

int main()
 {
    int choice;
    double num1, num2;

    do {
        cout << "--- Simple Calculator ---" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Clear Screen" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero is not allowed." << endl;
                break;
            case 5:
                // Optional: system("cls") for Windows, system("clear") for Linux/Mac
                cout << "Screen cleared." << endl;
                break;
            case 6:
                cout << "Exiting Calculator. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please select 1-6." << endl;
        }
        cout << endl;
    } while (choice != 6);

   
}
