#include <iostream>
#include <cmath>
using namespace std;

string projectTimeCalculation(int hours, int days, int workers);

int main() 
{
    int hours, days, workers;
    cout << "Enter the needed hours: ";
    cin >> hours;
    cout << "Enter the days that the firm has: ";
    cin >> days;
    cout << "Enter the number of all workers: ";
    cin >> workers;
    string result = projectTimeCalculation(hours, days, workers);
   
    return 0;
}

string projectTimeCalculation(int hours, int days, int workers)
 {
    string result;
    int effectiveDays = days * 9 / 10;
    int totalHours = effectiveDays * workers * 10;

    int hoursLeft = totalHours - hours;
    int additionalHours = hours - totalHours;
    if (totalHours >= hours)
 {
        cout << "Yes! " << hoursLeft << " hours left." << endl;
    }
    if (totalHours < hours) {
        cout << "Not enough time! " << additionalHours << " hours needed." << endl;
    }
    return result;
}
