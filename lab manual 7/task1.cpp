#include<iostream>
using namespace std;
void printTable(int);
main()
{
    int x;
    cout<<"enter a number: ";
    cin>>x;

    printTable(x);
    
}
void printTable(int x)
{
    int table=x;
    int multiple;
    for(int num=1;num<=10;num=num+1)
    {
        multiple=table*num;
        cout<<table<<"*"<<num<<"="<<multiple<<endl;
    }
}