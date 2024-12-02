#include <iostream>
using namespace std;

void carData1(int cars[][5], int rows);
void carData2(int cars[][5], int rows);
void carData3(int cars[][5], int rows);
void carData4(int cars[][5], int rows);
void carData5(int cars[][5], int rows);

int main()
{
    const int rows = 5;
    const int colors = 5;
    int sum;
    int color;
    cout << "Enter the code of color...." << endl;
    cout << "1 for RED." << endl;
    cout << "2 for BLACK." << endl;
    cout << "3 for BROWN." << endl;
    cout << "4 for BLUE." << endl;
    cout << "5 for GRAY." << endl;
    cout << "Choose your option..." << endl;
    cin >> color;

    int cars[rows][colors] = {{10, 2, 3, 4, 5},
                              {18, 5, 6, 3, 9},
                              {23, 5, 4, 6, 3},
                              {7, 6, 5, 7, 8},
                              {3, 6, 9, 10, 3}};
    if (color == 1)
    {
        carData1(cars, rows);
    }
     if (color == 2)
    {
        carData2(cars, rows);
    }
     if (color == 3)
    {
        carData3(cars, rows);
    }
     if (color == 4)
    {
        carData4(cars, rows);
    }
     if (color == 5)
    {
        carData5(cars, rows);
    }
}

void carData1(int cars[][5], int rows)
{
    int sum = 0;

    for (int i = 0; i < rows ; i++)
    {
        for (int coloum = 0; coloum <=5-5; coloum++)
        {
            sum = sum + cars[i][coloum];
        }
    }
    cout <<"Total RED cars are: "<<sum;
}

void carData2(int cars[][5], int rows)
{
     int sum = 0;

    for (int i =0; i < rows; i++)
    {
        for (int coloum =1; coloum <=5-4; coloum++)
        {
            sum = sum + cars[i][coloum];
        }
    }
    cout <<"Total BLACK cars are: "<<sum; 
}
void carData3(int cars[][5], int rows)
{
     int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int coloum = 2; coloum <=5-3; coloum++)
        {
            sum = sum + cars[i][coloum];
        }
    }
    cout <<"Total BROWN cars are: "<<sum; 
}
void carData4(int cars[][5], int rows)
{
    int sum = 0;

    for (int i = 0; i < rows ; i++)
    {
        for (int coloum = 3; coloum <=5-2; coloum++)
        {
            sum = sum + cars[i][coloum];
        }
    }
    cout <<"Total BLUE cars are: "<<sum; 
}
void carData5(int cars[][5], int rows)
{
    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int coloum = 4; coloum <=5-1; coloum++)
        {
            sum = sum + cars[i][coloum];
        }
    }
    cout <<"Total GRAY cars are: "<<sum; 
}
