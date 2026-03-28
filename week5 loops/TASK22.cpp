#include <iostream>

using namespace std;

 main()
 {
    int pin;
    const int CORRECT_PIN = 1234;
    double balance = 1000.00; // Starting balance
    bool loginSuccessful = false;
    int choice;

    // 1. PIN Attempt System using a for loop
    for (int i = 1; i <= 3; i++) {
        cout << "Enter ATM PIN (Attempt " << i << "/3): ";
        cin >> pin;

        // 2 & 3. Check PIN using logical operator (==)
        if (pin == CORRECT_PIN) {
            cout << "Login Successful!" << endl;
            loginSuccessful = true;
            break; // Exit the for loop if login is correct
        } else {
            if (i < 3) {
                cout << "Incorrect PIN. Please try again." << endl;
            } else {
                cout << "Too many incorrect attempts. Card Blocked!" << endl;
            }
        }
    }

    // 4. ATM Menu (only displays if login was successful)
    if (loginSuccessful) {
        do {
            cout << "\n--- ATM Menu ---" << endl;
            cout << "1 -> Check Balance" << endl;
            cout << "2 -> Deposit Money" << endl;
            cout << "3 -> Withdraw Money" << endl;
            cout << "4 -> Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            // 5. Check Balance
            if (choice == 1) {
                cout << "Your current balance is: $" << balance << endl;
            } 
            // 6. Deposit Money
            else if (choice == 2) {
                double deposit;
                cout << "Enter deposit amount: ";
                cin >> deposit;
                if (deposit > 0) {
                    balance += deposit;
                    cout << "Successfully deposited $" << deposit << endl;
                } else {
                    cout << "Invalid deposit amount!" << endl;
                }
            } 
            // 7 & 8. Withdraw Money with sufficiency check
            else if (choice == 3) {
                double withdraw;
                cout << "Enter withdrawal amount: ";
                cin >> withdraw;
                
                // Using logical operators to ensure the amount is valid and available
                if (withdraw > 0 && withdraw <= balance) {
                    balance -= withdraw;
                    cout << "Successfully withdrawn $" << withdraw << endl;
                } else if (withdraw > balance) {
                    cout << "Insufficient Balance" << endl;
                } else {
                    cout << "Invalid withdrawal amount!" << endl;
                }
            }
            // 9. Exit
            else if (choice == 4) {
                cout << "Thank you for using our ATM. Goodbye!" << endl;
            } 
            else {
                cout << "Invalid option! Please try again." << endl;
            }

        } while (choice != 4); // Loop continues until user selects 4 (Exit)
    }

    
}
