#include<iostream>
using namespace std;
string name;
string input;
main()
 
{
   

    cout<<"Enter a string : ";
    cin>>input;

    int length=0;

int i=0;
    while(input[i] != '\0')
    {
        
        i++;
    }
    cout<<i;
    if(i%2==0)
    {
        cout<<"true";
    }
    else
    {
      cout<<"false";
    }
}