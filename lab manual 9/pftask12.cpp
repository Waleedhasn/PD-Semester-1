#include<iostream>
using namespace std;
bool isSpecialarray(int arr[], int size);
main()
{
    int size;
    bool result;
    cout << "Enter the size of array  ";
    cin >> size;
    int arr[size];
    result=isSpecialarray(arr,size);
    if(result==0)
    {
        cout << "This is not special array ";
    }
    else
    {
        cout << "This is special array ";
    }
}
bool isSpecialarray(int arr[], int size)
{
    bool result=false;
    for(int x=0 ; x<size ; x=x+1)
    {
        cin >> arr[x];
    }
    if(arr[0]%2==0)
    {
        result=true;
    }
    for(int x=1 ; x<size ; x=x+1)
    {
        if(x%2==1 && arr[x]%2==1)
        {
            result=true;
        }
        if((x%2==0 && arr[x]%2==0))
        {
            result=true;
        }
        else 
        {
            result=false;
        }
        return result;
    }
}