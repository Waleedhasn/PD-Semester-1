#include <iostream>
#include <string>
using namespace std;

int calculateFullRotations(string directions[], int size) 
{
    int totalRotation = 0; 

    for (int i = 0; i < size; i++) 
    {
        if (directions[i] == "right") 
        {
            totalRotation += 90;  
        } 
        else if (directions[i] == "left") 
        {
            totalRotation -= 90;  
        }

    }

    return totalRotation / 360;  
}

int main() 
{
    int size;  
    cout << "Enter the number of directions: ";
    cin >> size;  

    string directions[size];  

    cout << "Enter the directions (left or right): ";

    for (int i = 0; i < size; i++) 
    {
        cin >> directions[i];  
    }

    int fullRotations = calculateFullRotations(directions, size);
    
    cout << "Full 360° rotations made: " << fullRotations << endl;

    return 0;
}
