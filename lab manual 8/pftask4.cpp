#include <iostream>
using namespace std;
bool isPrimeNumber(int);
int primeNumber(int);
main()
{
    int number ,result;
    cout << "Enter a number";
    cin >> number;
    result=primeNumber(number);
    cout << result;
}
int primeNumber(int num)
{
    int result=0;
    for(int count=2 ; count<=num ; count=count+1)
    {
        if(isPrimeNumber(count))
        {
            result=result+1;
        }
    }
    return result;
}
bool isPrimeNumber(int number)
{
    bool result = true;
    for(int x=2 ; x<number ; x=x+1 )
    {
        if(number % x==0)
        {
            result = false;
        }
    }
return result;

}