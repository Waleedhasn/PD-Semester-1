#include<iostream>
using namespace std;
void amplify(int);
main()
{
    int sequence;

    cout<<"Enter the number to amplify: ";
    cin>>sequence;

    amplify(sequence);

}
void amplify(int sequence)
{
    for(int i=1 ; i<=sequence ; i++)
    {
        if(i%4==0)
        {
            cout<<i*10<<" ";  
        }
        else
        {
            cout<<i<<" ";    
        }
    }
    
    cout<<endl;
}