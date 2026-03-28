#include <iostream>
using namespace std;

int main() 
{
    int choice;
    string bookName;

    do {
        cout << "--- Library System ---" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. View Book" << endl;
        cout << "3. Borrow Book" << endl;
        cout << "4. Issue Book" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter book name: ";
                cin.ignore(); // Clears the input buffer
                getline(cin, bookName);
                cout << "You added a book: " << bookName << endl;
                break;
            case 2:
                cout << "Displaying all books..." << endl;
                break;
            case 3:
                cout << "Enter book to borrow..." << endl;
                break;
            case 4:
                cout << "Issuing book to member..." << endl;
                break;
            case 5:
                cout << "Exiting Library System. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
        cout << endl;
    }
 while (choice != 5);

   
}
