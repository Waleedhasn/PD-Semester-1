#include <iostream>
using namespace std;
bool checkIdentical(string arr[], int size);
int main() 
{
    string arr[4];

    cout << "Enter 4 numbers: ";
    for (int i = 0; i < 4; i++) 
    {
        cin >> arr[i];
    }

    if (checkIdentical(arr, 4)) 
    {
        cout << "true" << endl;
    } else 
    {
        cout << "false" << endl;
    }

    return 0;
}
bool checkIdentical(string arr[], int size) 
{
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] != arr[0])
        {
            return false;
        }
    }
    return true;
}