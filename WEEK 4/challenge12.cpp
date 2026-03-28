#include <iostream>
using namespace std;

 main() 
{
    int holidays;
    cin >> holidays;

    int workingDays = 365 - holidays;

    
    int playTime = (workingDays * 63) + (holidays * 127);

    int norm = 30000;
    int diff = abs(norm - playTime);

    int hours = diff / 60;
    int minutes = diff % 60;

    if (playTime > norm) {
        cout << "Tom will run away" << endl;
        cout << hours << " hours and " << minutes << " minutes for play" << endl;
    } else {
        cout << "Tom sleeps well" << endl;
        cout << hours << " hours and " << minutes << " minutes less for play" << endl;
    }

    
}