#include <iostream>
using namespace std;
void sortPackages(int arr[], int size);

int main() 
{
    int packages[10];

    cout << "Enter the weights of 10 packages: ";

    for (int i = 0; i < 10; i++) 
    {
        cin >> packages[i];
    }

   
    sortPackages(packages, 10);

    cout << "The sorted array of packages in ascending order: ";

    for (int i = 0; i < 10; i++) 
    {
        cout << packages[i] << " ";
    }
    
    cout << endl;

    return 0;
}

void sortPackages(int arr[], int size) 
{
   
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
           
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

        }

    }

}
