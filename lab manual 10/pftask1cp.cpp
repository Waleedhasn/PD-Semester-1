#include <iostream>
using namespace std;
int countProgressDays(int miles[], int size);

int main() 
{
    int n;

    cout << "Enter the number of Saturdays: ";
    cin >> n;
    
    int miles[n];

    cout << "Enter the miles run each Saturday: "<<endl;

    for (int i = 0; i < n; ++i) 
    {
        cout << "Saturday " << i + 1 << ": ";
        cin >> miles[i];
    }

    int progressDays = countProgressDays(miles, n);

    cout << "Total number of progress days: " << progressDays << endl;
    return 0;
}

int countProgressDays(int miles[], int size) 
{
    int progressCount = 0;
    for (int i = 1; i < size; ++i) 
    {
        if (miles[i] > miles[i - 1]) 
        {
            progressCount++;
        }
    }

    return progressCount;
}