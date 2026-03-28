#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

main()
 {
    string figureType;
    
    double side, length, width, radius, base, height;
    const double PI = 3.14159;

    cout << "Enter the figure type (Square, Rectangle, Circle, Triangle): ";
    cin >> figureType;

    if (figureType == "Square" || figureType == "square") {
        cin >> side;
        cout << side * side << endl;
    } 
    else if (figureType == "Rectangle" || figureType == "rectangle") {
        cin >> length >> width;
        cout << length * width << endl;
    } 
    else if (figureType == "Circle" || figureType == "circle") {
        cin >> radius;
        // Calculation: PI * r^2
        cout << PI * radius * radius << endl;
    } 
    else if (figureType == "Triangle" || figureType == "triangle") {
        cin >> base >> height;
        // Calculation: 0.5 * b * h
        cout << 0.5 * base * height << endl;
    } 
    else {
        cout << "Invalid figure type." << endl;
    }

    
