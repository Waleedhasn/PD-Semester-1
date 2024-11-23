#include <iostream>
using namespace std;
void findPeaks(int arr[], int size, int peaks[], int &peakCount);

int main() 
{
    int n;

    cout << "How many Elements you want to Enter: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: "<<endl;
    for (int i = 0; i < n; ++i) 
    {
        cin >> arr[i];
    }

    int peaks[n];  
    int peakCount = 0;

    findPeaks(arr, n, peaks, peakCount);

    if (peakCount == 0) 
    {
        cout << "No Peak found" << endl;
    }
    else 
    {
        cout << "[";
        for (int i = 0; i < peakCount; i++) 
        {
            cout << peaks[i];

            if (i != peakCount - 1) 
            {
                cout << ", ";
            }
        }

        cout << "]" << endl;
    }


}

void findPeaks(int arr[], int size, int peaks[], int &peakCount) 
{
    for (int i = 1; i < size - 1; ++i) 
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) 
        {

            peaks[peakCount++] = arr[i]; 

        }

    }

}
