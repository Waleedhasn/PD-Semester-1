#include<iostream>
using namespace std;
 
void carData(int cars[][5],int rows);

int main()
{
    const int rows=5;
    const int colors=5;
    int sum;

    int cars[rows][colors]={ {10,2,3,4,5},
                             {18,5,6,3,9},
                             {23,5,4,6,3},
                             {7,6,5,7,8},
                             {3,6,9,10,3}
                            };

    carData(cars,rows);

}

void carData(int cars[][5],int rows)
{
    int sum=0;

    for(int i=0;i<=rows;i++)
    {
        for(int coloum=0;coloum<=5-5;coloum++)
        {
         sum=sum+cars[i][coloum];
        }
    }
    cout<<sum;
}