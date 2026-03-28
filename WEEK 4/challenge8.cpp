#include <iostream>
using namespace std;

int main() {
    string country;
    double ticketPrice, discount, finalPrice;

    cout << "Enter country: ";
    cin >> country;

    cout << "Enter ticket price: ";
    cin >> ticketPrice;

    
    if (country == "Ireland") {
        discount = 0.10;
    } else {
        discount = 0.05;
    }

    finalPrice = ticketPrice - (ticketPrice * discount);

    cout << "Discounted Price: " << finalPrice << endl;

    
}