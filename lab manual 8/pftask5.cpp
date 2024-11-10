#include<iostream>
using namespace std;
string howBad(int number);
main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << howBad(number);
}
string howBad(int number)
{
    int binary, c=0, j=0;
    bool isPrime=true;
    string property, prime="";
    while(number>=1)
    {
        binary=number%2;
        number=number/2;
        if(binary==1)
        {
            c++;
        }  
    }
    
    if(c%2==0)
    {
        property="Evil";
    }
    else{
        property="Odious";
    }
    for(int i=2; i<c; i++)
    {
        if(c%i==0)
        {
            isPrime=false;            
        }
    }
    if(isPrime==true)
    {
        prime="Pernicious";
    }
    return (property+","+prime);
}
