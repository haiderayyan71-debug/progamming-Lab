#include <iostream>
using namespace std;

int main() {
    float amount, discount, finalAmount;

    
    cout << "Enter total amount: ";
    cin >> amount;

     
    if (amount <= 5000) {
        discount = amount * 0.05;   // 5% discount
    } else {
        discount = amount * 0.10;   // 10% discount
    }

    
    finalAmount = amount - discount;

    
    cout << "Discount: Rs " << discount << endl;
    cout << "Final Amount: Rs " << finalAmount << endl;

    return 0;
}