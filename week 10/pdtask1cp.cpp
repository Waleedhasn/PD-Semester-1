#include <iostream>
using namespace std;
bool canBeRearrangedToConsecutive(int arr[], int size);

int main() 
{
    int size;
    cout << "Enter the length of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements: ";

    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }

    if (canBeRearrangedToConsecutive(arr, size)) 
    {
        cout << "True" << endl;  
    } 
    else 
    {
        cout << "False" << endl;  
    }

    return 0;
}

bool canBeRearrangedToConsecutive(int arr[], int size) 
{
    int minVal = arr[0];
    int maxVal = arr[0];

    for (int i = 0; i < size; i++) 
    {
        if (arr[i] < minVal) 
        {
            minVal = arr[i];
        }

        if (arr[i] > maxVal) 
        {
            maxVal = arr[i];
        }

        for (int j = i + 1; j < size; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                return false; 
            }

        }

    }

    return (maxVal - minVal == size - 1);

}