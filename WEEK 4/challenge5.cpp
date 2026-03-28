#include <iostream>
using namespace std;

int main() {
    double salary = 10000;
    double laptopPrice = 50000;

     Calculate advance salary (50% of next 6 months)
    double advance = 0.5 * (6 * salary);

    cout << "Advance Salary: Rs " << advance << endl;

    if (advance >= laptopPrice) {
        cout << "Ali can buy the laptop with advance salary." << endl;
    } else {
        double remaining = laptopPrice - advance;

         Months required to cover remaining amount
        int months = remaining / salary;

         If there is remainder, add one more month
        if ((int)remaining % (int)salary != 0) {
            months++;
        }

        cout << "Ali cannot buy the laptop with advance salary." << endl;
        cout << "Additional months required: " << months << endl;
    }

    return 0;
}