#include <iostream>
using namespace std;
int countIdenticalRows(int M[][3], int n);

int main()
{
    int n;

    cout << "Enter the number of rows (n): ";
    cin >> n;

    int M[n][3];

    cout << "Enter the elements of the matrix (each row has 3 elements):\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter row " << i + 1 << " (3 elements): ";
        for (int j = 0; j < 3; j++)
        {
            cin >> M[i][j];
        }
    }

    int identicalRowCount = countIdenticalRows(M, n);

    cout << "Total number of identical rows: " << identicalRowCount << endl;

    return 0;
}

int countIdenticalRows(int M[][3], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            bool identical = true;
            for (int k = 0; k < 3; k++)
            {
                if (M[i][k] != M[j][k])
                {
                    identical = false;
                    break;
                }
            }

            if (identical)
            {
                count++;
            }
        }
    }

    return count;
}