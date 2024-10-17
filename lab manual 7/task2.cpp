#include<iostream>
using namespace std;
void generalFibonacci(int length);
main()
{
    
    int length;
    cout<<"Enter the length of fibonacci series:";
    cin>>length;
    generalFibonacci(length);

}
void generalFibonacci(int length)
{
    int n1=-1;
    int n2=1;
    int next;
    for(int i=1;i<=length;i++)
    {
        next=n1+n2;
        cout<<" "<<next;
        n1=n2;
        n2=next;
    }
}