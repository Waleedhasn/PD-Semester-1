#include <iostream>
#include <vector>
#include <string>
using namespace std;
int calculateColoringTime(vector<string> cols);
int main() 
{
    int n;
    cout << "Enter the number of colors: ";
    cin >> n;

    vector<string> cols(n);
    cout << "Enter the colors: ";
    for (int i = 0; i < n; i++) {
        cin >> cols[i];
    }

    int totalTime = calculateColoringTime(cols);

    cout << "Total time to color the pattern: " << totalTime << " seconds" << endl;

    return 0;
}
int calculateColoringTime(vector<string> cols) 
{
    int time = 0;
    int numOfSwitches = 0;

    for (int i = 0; i < cols.size(); i++) 
    {
        time=time+2;

        if (i > 0 && cols[i] != cols[i - 1]) 
        {
            numOfSwitches++;
        }
    }

    time=time+numOfSwitches;

    return time;
}
