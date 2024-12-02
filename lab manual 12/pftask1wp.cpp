#include<iostream>
using namespace std;
 
void carData(int cars[][5],int rows);

int main()
{
    const int rows=5;
    const int colors=5;

    int cars[colors][rows]={ {1,2,3,4,5},{2,5,6,3,9},{6,5,4,6,3},{4,6,5,7,8},{8,6,9,10,3,}};

    carData(cars,rows);

}

void carData(int cars[][5],int rows)
{
    for(int i=0;i<rows;i++)
    {
        for(int coloum=0;coloum<5;coloum++)
        {
         cout<<cars[i][coloum]<<" \t";
        }
        cout<<endl;
    }
}