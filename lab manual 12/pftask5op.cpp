#include <iostream>
using namespace std;

int main()
{
    const int rows = 3;
    const int col = 3;
    int matrics[rows][col];

    cout << "Enter the elements of the matrics.... " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the element at position: ";
            cin >> matrics[i][j];
        }
    }
    bool isidentity = true;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if ((i == j && matrics[i][j] != 1) || (i != j && matrics[i][j] != 0))
            {
                isidentity = false;
                break;
            }
        }
        if (!isidentity)
        {
            break;
        }
    }
    if (isidentity)
    {
        cout << "The matrics is an identiy matric. " << endl;
    }
    else
    {
        cout << "The matrics is not an identiy matric. " << endl;
    }
}