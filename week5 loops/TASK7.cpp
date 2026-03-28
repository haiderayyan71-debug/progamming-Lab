#include <iostream>
using namespace std;

int main()
 {
    int n;
    
    if (!(cin >> n)) return 0;

    
    double p1_count = 0; // Under 200
    double p2_count = 0; // 200 to 399
    double p3_count = 0; // 400 to 599
    double p4_count = 0; // 600 to 799
    double p5_count = 0; // 800 upwards

    for (int i = 0; i < n; i++) {
        int currentNum;
        cin >> currentNum;

        // Categorize the number into the correct bucket
        if (currentNum < 200) {
            p1_count++;
        } else if (currentNum >= 200 && currentNum <= 399) {
            p2_count++;
        } else if (currentNum >= 400 && currentNum <= 599) {
            p3_count++;
        } else if (currentNum >= 600 && currentNum <= 799) {
            p4_count++;
        } else if (currentNum >= 800) {
            p5_count++;
        }
    }

    
    cout << fixed << setprecision(2);

    // Calculate and print percentages
    cout << (p1_count / n) * 100.0 << "%" << endl;
    cout << (p2_count / n) * 100.0 << "%" << endl;
    cout << (p3_count / n) * 100.0 << "%" << endl;
    cout << (p4_count / n) * 100.0 << "%" << endl;
    cout << (p5_count / n) * 100.0 << "%" << endl;

    }
