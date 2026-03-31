#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 100;
    string books[MAX];
    bool isBorrowed[MAX] = {false};

    int count = 0;
    int choice;

    do {
        cout << "\n===== Library Menu =====\n";
        cout << "1. Add Books\n";
        cout << "2. View Books\n";
        cout << "3. Borrow Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter number of books to add: ";
            int n;
            cin >> n;
            for (int i = 0; i < n; i++) {
                cout << "Enter book name: ";
                cin >> books[count];
                count++;
            }
            break;

        case 2:
            cout << "\nAvailable Books:\n";
            for (int i = 0; i < count; i++) {
                cout << i + 1 << ". " << books[i];
                if (isBorrowed[i])
                    cout << " (Borrowed)";
                cout << endl;
            }
            break;

        case 3: {
            int index;
            cout << "Enter book number to borrow: ";
            cin >> index;

            if (index > 0 && index <= count) {
                if (!isBorrowed[index - 1]) {
                    isBorrowed[index - 1] = true;
                    cout << "Book borrowed successfully.\n";
                } else {
                    cout << "Book already borrowed.\n";
                }
            } else {
                cout << "Invalid book number.\n";
            }
            break;
        }

        case 4: {
            int index;
            cout << "Enter book number to return: ";
            cin >> index;

            if (index > 0 && index <= count) {
                if (isBorrowed[index - 1]) {
                    isBorrowed[index - 1] = false;
                    cout << "Book returned successfully.\n";
                } else {
                    cout << "This book was not borrowed.\n";
                }
            } else {
                cout << "Invalid book number.\n";
            }
            break;
        }

        case 5:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}