#include <iostream>
using namespace std;
void insertArryInMiddle(int firstarry[] , int firstarrysize , int secondarry[] , int secondarrysize);
main()
{
    int  firstarrysize , secondarrysize;
    cout << "Enter the number of elements of the first array (must be 2)   ";
    cin >> firstarrysize;
    int firstarry[firstarrysize];
    for(int x=0 ; x<firstarrysize ; x=x+1)
    {
        cin >> firstarry[x];
    }
    cout << "Enter the number of elements of the second array  ";
    cin >> secondarrysize;
    int secondarry[secondarrysize];
    for(int x=0 ; x<secondarrysize ; x=x+1)
    {
        cin >> secondarry[x];
    }
    insertArryInMiddle( firstarry , firstarrysize ,  secondarry , secondarrysize);
}
void insertArryInMiddle(int firstarry[] , int firstarrysize , int secondarry[] , int secondarrysize)
{
    cout << "resulting array [  " << firstarry[0];
    for(int x=0 ; x<secondarrysize ; x=x+1)
    {
        cout << "  ," << secondarry[x];
    }
    cout << "  , " <<firstarry[1] << "  ]";
}