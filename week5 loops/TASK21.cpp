#include <iostream>
using namespace std;

 main()
 {
    string username, password;
    string studentName, courseName;
    int studentAge;
    bool loggedIn = false;

    // 1. Login System (3 attempts)
    for (int i = 1; i <= 3; i++) {
        cout << "--- Login (Attempt " << i << "/3) ---" << endl;
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        // 2 & 3. Credential check using logical operator &&
        if (username == "admin" && password == "1234") {
            cout << "Login Successful!" << endl << endl;
            loggedIn = true;
            break; // Exit the login loop
        } else {
            cout << "Invalid credentials." << endl;
            if (i == 3) cout << "Account Locked!" << endl;
        }
    }

    // 4. Main Menu (only if login was successful)
    if (loggedIn) {
        int choice;
        do {
            cout << "--- University Management System ---" << endl;
            cout << "1 -> Add Student" << endl;
            cout << "2 -> View Student" << endl;
            cout << "3 -> Add Course" << endl;
            cout << "4 -> Exit" << endl;
            cout << "Choice: ";
            cin >> choice;

            if (choice == 1) {
                cout << "Enter student name: ";
                cin.ignore(); // Clear buffer
                getline(cin, studentName);
                cout << "Enter student age: ";
                cin >> studentAge;
                cout << "Student added successfully!" << endl;
            } 
            else if (choice == 2) {
                // Checking if data exists before viewing
                if (studentName != "") {
                    cout << "Student Info: " << studentName << " (Age: " << studentAge << ")" << endl;
                } else {
                    cout << "No student record found!" << endl;
                }
            } 
            else if (choice == 3) {
                cout << "Enter course name: ";
                cin.ignore();
                getline(cin, courseName);
                cout << "Course '" << courseName << "' added!" << endl;
            } 
            else if (choice == 4) {
                cout << "Terminating program..." << endl;
            } 
            else {
                cout << "Invalid option!" << endl;
            }
            cout << endl;

        } while (choice != 4);
    }

    
}
