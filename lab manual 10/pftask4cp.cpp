#include <iostream>
using namespace std;
bool isRepeatingCycle(int cycleLength);

int arr[100];
int n; 

int main() 
{
   
    cout << "Enter the length of the array: ";
    cin >> n;

   
    cout << "Enter " << n << " elements of the array: ";

    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }


    int cycleLength;
    cout << "Enter the cycle length: ";
    cin >> cycleLength;

    if (isRepeatingCycle(cycleLength)) 
    {
        cout << "true" << endl; 
    } 
    else 
    {
        cout << "false" << endl;  
    }

    return 0;
}

bool isRepeatingCycle(int cycleLength) 
{
    if (cycleLength > n) 
    {
        return true;  
    }
    
  
    for (int i = 0; i < n - cycleLength; i++) 
    {
        if (arr[i] != arr[i + cycleLength]) 
        {
            return false; 
        }
    }
    
    return true;
}