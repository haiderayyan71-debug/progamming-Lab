#include <iostream>
using namespace std;
 main()
 {
    int red, white, tulips;
    double total, discount = 0, finalAmount;

    // Prices
    double redPrice = 2.00;
    double whitePrice = 4.10;
    double tulipPrice = 2.50;

    cout << "Enter number of Red Roses: ";
    cin >> red;

    cout << "Enter number of White Roses: ";
    cin >> white;

    cout << "Enter number of Tulips: ";
    cin >> tulips;

    
    total = (red * redPrice) + (white * whitePrice) + (tulips * tulipPrice);

    // Apply discount if total > 200
    if (total > 200) {
        discount = total * 0.20;
    }

    finalAmount = total - discount;

    cout << "Original Price: " << total << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final Payable Amount: " << finalAmount << endl;

    
}