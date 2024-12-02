#include <iostream>
using namespace std;
void DisplayWorld();
void SetGravityStatus(bool status);
void TimeTick(int times);

char objects[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}};

int main()
{

    cout << "Initial World State:" << endl;
    DisplayWorld();

    SetGravityStatus(true);

    TimeTick(3);

    return 0;
}

bool gravity = false;

void DisplayWorld()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << objects[i][j] << " ";
        }
        cout << endl;
    }
}

void SetGravityStatus(bool status)
{
    gravity = status;
}

void TimeTick(int times)
{
    if (!gravity)
    {
        cout << "Gravity is disabled. No movement of blocks." << endl;
        return;
    }

    for (int t = 0; t < times; t++)
    {

        for (int col = 0; col < 5; col++)
        {

            for (int row = 3; row >= 0; row--)
            {
                if (objects[row][col] == '#' && objects[row + 1][col] == '-')
                {

                    objects[row + 1][col] = '#';
                    objects[row][col] = '-';
                }
            }
        }
        cout << "After time tick " << t + 1 << ":" << endl;
        DisplayWorld();
    }
}


