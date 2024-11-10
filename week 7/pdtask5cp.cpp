#include<iostream>
using namespace std;
bool isPrime(int);
main()
{
    int number;

    cout<<"Enter a number :";
    cin>>number;

    cout<<isPrime(number);

}
bool isPrime(int number)
{
    if(number<=1)
    {
        return false;
    }
    for(int i=2;i <= number/2 ;i++)
    {
        if(number%i==0)
        {
            return false;
        }
    }
      return true;
}
   