#include <iostream>
using namespace std;
void swapColumns(int M[5][5], int col1, int col2);
void largestColumnFirst(int M[5][5]);
void printMatrix(int M[5][5]);

int main()
{
    int M[5][5];

    cout << "Enter the elements of the 5x5 matrix:" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter element at row " << i + 1 << ", column " << j + 1 << ": ";
            cin >> M[i][j];
        }
    }

    cout << "\nOriginal Matrix:" << endl;
    printMatrix(M);

    largestColumnFirst(M);

    cout << "\nMatrix After Largest Column Swapped with First Column:" << endl;
    printMatrix(M);

    return 0;
}

void swapColumns(int M[5][5], int col1, int col2)
{
    for (int i = 0; i < 5; i++)
    {

        int temp = M[i][col1];
        M[i][col1] = M[i][col2];
        M[i][col2] = temp;
    }
}

void largestColumnFirst(int M[5][5])
{
    int largestSum = -1;
    int largestCol = 0;

    for (int col = 1; col < 5; col++)
    {
        int columnSum = 0;
        for (int row = 0; row < 5; row++)
        {
            columnSum += M[row][col];
        }

        if (columnSum > largestSum)
        {
            largestSum = columnSum;
            largestCol = col;
        }
    }

    swapColumns(M, 0, largestCol);
}

void printMatrix(int M[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}