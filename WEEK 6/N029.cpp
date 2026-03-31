#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of flights: ";
    cin >> n;

    int flightNumber[n];
    string destination[n];
    int seatsAvailable[n];

    // Input
    for (int i = 0; i < n; i++) {
        cout << "\nEnter flight number for flight " << i + 1 << ": ";
        cin >> flightNumber[i];

        cout << "Enter destination for flight " << flightNumber[i] << ": ";
        cin >> destination[i];

        cout << "Enter seats available for flight " << flightNumber[i] << ": ";
        cin >> seatsAvailable[i];
    }

    // Display all flights
    cout << "\nFlight Information:\n";
    cout << "-------------------\n";
    for (int i = 0; i < n; i++) {
        cout << "Flight " << flightNumber[i] << " to " << destination[i]
             << " has " << seatsAvailable[i] << " seats available.\n";
    }

    // Flights with less than 5 seats
    cout << "\nFlights with less than 5 seats available:\n";
    cout << "----------------------------------------\n";

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (seatsAvailable[i] < 5) {
            cout << "Flight " << flightNumber[i] << " to " << destination[i]
                 << " has only " << seatsAvailable[i] << " seats left!\n";
            found = true;
        }
    }

    if (!found) {
        cout << "No flights with less than 5 seats available.\n";
    }

    return 0;
}