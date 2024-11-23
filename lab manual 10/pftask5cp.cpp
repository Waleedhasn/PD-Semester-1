#include <iostream>
using namespace std;
int calculateTotalVolume(int arr[], int size);

int main() 
{
    int size;

    cout << "Enter the number of elements (multiple of 3): ";
    cin >> size;

    int boxes[size];

    cout << "Enter the dimensions of the boxes (length, width, height) one after another: ";

    for (int i = 0; i < size; i++) 
    {
        cin >> boxes[i];
    }

    int totalVolume = calculateTotalVolume(boxes, size);

    cout << "The total volume of the boxes is: " << totalVolume << endl;
  
}

int calculateTotalVolume(int arr[], int size) 
{
    int totalVolume = 0;

    for (int i = 0; i < size; i += 3) 
    {
        if (i + 2 < size) 
        {
            int length = arr[i];
            int width = arr[i + 1];
            int height = arr[i + 2];
            
            totalVolume += length * width * height;
        }
    }

    return totalVolume;
}