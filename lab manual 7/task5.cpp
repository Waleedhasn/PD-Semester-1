#include <iostream>
using namespace std;
int digitSum(int number);
main()
{
    int number;
    cout << "Enter a Number: ";
    cin >> number;
    cout<< "Sum of digits: "<< digitSum(number);
}
int digitSum(int number)
{
    int sum;
    for(sum=0;number!=0;number=number/10)
    {
        sum=sum+number%10;
    }
    return sum;
}