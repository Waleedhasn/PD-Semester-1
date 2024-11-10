#include <iostream>
using namespace std;
bool isPrime(int);
int primorial(int);
main()
{
    int number,n;

    cout<<"Enter number:";
    cin>>number;

    cout<<primorial(number);
    
}


bool isPrime(int number) 
{
    if (number <= 1) 
    {
        return false;
    }

    for (int i = 2; i <= number / 2; i++) 
    {
        if (number % i == 0) return false;
    }
    return true;
}

int primorial(int n) 
{

    int count = 0;
    int current = 2;
    int product = 1;

    while (count < n)
    {
        if (isPrime(current))
        {
            product =product* current;
            count++;
        }
           current++;
    }

    return product;
}

