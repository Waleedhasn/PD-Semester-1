#include <iostream>
using namespace std;
main()
{
    int reqnumber;
    cout<<"Enter the number of elements: ";
    cin>> reqnumber;
    int number[reqnumber];
    cout <<"Enter "<<reqnumber << " numbers"<<endl;
    for(int i=0 ;i<reqnumber;i++)
    {
        cin >> number[i];
    }
    cout << "The numbers you entered are: "<<endl;
    for(int i=0;i<reqnumber;i++)
    {
        cout << number[i]<<endl;
    }
}