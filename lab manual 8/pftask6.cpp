#include<iostream>
using namespace std;
int pileCubes(int number);
int power(int base , int exponent);
main()
{
    int number , result;
    cout << "enter a number ";
    cin >> number;
    result= pileCubes(number);
    cout << result;
}
int pileCubes(int number)
{
    double sum=0.0;
    int count;
    while(sum!=number)
    {
        count=count+1;
        sum=sum+power(count , 3);
        if(sum>number)
        {
            count=-1;
            return count;
        }
    }
    return count;
}
int power(int base , int exponent)
{
    int pow=1;
    for(int i=1 ; i<=exponent ; i=i+1)
    {
        pow=pow*base;
    }
    return pow;
}