#include <iostream>

using namespace std;

int main()
 {
    int choice;

    do {
        // Displaying the Menu
        cout << "--- Restaurant Management System ---" << endl;
        cout << "1. View Food Menu" << endl;
        cout << "2. Place Order" << endl;
        cout << "3. View Order Status" << endl;
        cout << "4. Generate Bill" << endl;
        cout << "5. Contact Staff" << endl;
        cout << "6. Exit" << endl;
        
        // Prompt for User Input
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        // Processing the choice using a switch statement
        switch (choice) {
            case 1:
                cout << "You selected: View Food Menu." << endl;
                break;
            case 2:
                cout << "You selected: Place Order." << endl;
                break;
            case 3:
                cout << "You selected: View Order Status." << endl;
                break;
            case 4:
                cout << "You selected: Generate Bill." << endl;
                break;
            case 5:
                cout << "You selected: Contact Staff." << endl;
                break;
            case 6:
                cout << "Exiting Restaurant Management System. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }
        
        cout << endl; // Adding a blank line for better readability between repetitions

    } 
while (choice != 6); // The loop continues until option 6 is selected

  
}
