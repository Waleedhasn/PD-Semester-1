#include <iostream>
using namespace std;
void printStars(int rowSize);
main()
{
    int rowSize;
    cout << "Enter desired number of rows: ";
    cin >> rowSize;
    printStars(rowSize);
}
void printStars(int rowSize)
{
    for(int row=rowSize; row>=1; row=row-1)
    {
        for(int col=1; col<=row; col=col+1)
        {
            cout<<"*";
        }
    cout<< endl;
    }
}