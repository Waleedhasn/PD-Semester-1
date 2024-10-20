#include <iostream>
using namespace std;

void printUpperPart(int rowSize);
void printLowerPart(int rowSize);

int main()
{
    int rowSize;
    cout << "Enter desired number of rows: ";
    cin >> rowSize;
    printUpperPart(rowSize);
    printLowerPart(rowSize);
}

void printUpperPart(int rowSize) 
{
    for (int row = 1; row <= rowSize; row=row+1)
     {
        for (int space = 0; space < rowSize - row; space=space+1)
         {
            cout << " ";
        }
        for (int col = 0; col < row; col=col+1)
         {
            cout << "*";
        }
        cout << endl;
    }
}

void printLowerPart(int rowSize)
 {
    for (int row = rowSize - 1; row >= 1; row=row-1)
     {
        for (int space = 0; space < rowSize - row; space=space+1) 
        {
            cout << " ";
        }
        for (int col = 0; col < row; col=col+1)
         {
            cout << "*";
        }
        cout << endl;
    }
}