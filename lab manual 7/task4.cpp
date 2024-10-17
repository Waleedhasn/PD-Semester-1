#include<iostream>
using namespace std;
int frequencyChecker(int number, int digit);
main()
{
    int number,digit;
    cout<<"Enter a number:";
    cin>>number;
    cout<<"Enter the digit to check:";
    cin>>digit;

    cout<<"frequency"<<frequencyChecker(number,digit);
}
int frequencyChecker(int number, int digit)
{
    int frequency=0,d;
    while(number>1)
    {
    d=number%10;
    number=number/10;
    if(d==digit)
    {
        frequency=frequency+1;
    }
    
    }
    return frequency;
}