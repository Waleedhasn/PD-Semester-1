#include<iostream>
using namespace std;
int printSum(int matrics[][3],int rowsize);

int main()
{
    const int colsize=3;
    int rowsize;
    int matrics[rowsize][colsize];

    cout<<"Enter the size of the row: ";
    cin>>rowsize;

    cout<<"Enter the elements for the matrics: "<<endl;

    printSum( matrics, rowsize);
}

int printSum(int matrics[][3],int rowsize)
{
    int sum=0;
 
    for(int i=0; i<rowsize; i++)
    {
        for(int colsize=0; colsize<3; colsize++)
        {
            cout<<"Enter the Element at position ";
            cin>>matrics[i][colsize];
            sum=sum+matrics[i][colsize];
        }
        cout<<endl; 
    } 
    cout<<sum;
}