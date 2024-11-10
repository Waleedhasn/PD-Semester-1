#include <iostream>
using namespace std;
bool containsSeven(int arr[], int size);
int main()
 {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int numbers[n];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> numbers[i];
    }

    if (containsSeven(numbers, n)) 
    {
        cout << "Boom!" << endl;
    } else 
    {
        cout << "there is no 7 in the array" << endl;
    }

    return 0;
}
bool containsSeven(int arr[], int size)
 {
    for (int i = 0; i < size; i++) 
    {
        int num = arr[i];
        while (num > 0) 
        {
            if (num % 10 == 7) 
            {
                return true;
            }
            num /= 10;
        }
    }
    return false;
}

