#include<iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);
main()
{
    int number1, number2 ,result ,gcd ;
    cout << " Enter first number :   ";
    cin >> number1;
    cout << " Enter second number :   ";
    cin >> number2;
    gcd=calculateGCD( number1, number2);
    cout << "GCD " << gcd << endl;
    result=calculateLCM(number1, number2,  gcd);
    cout << "LCM " << result << endl;
}
int calculateGCD(int number1, int number2)
{
     int temp;
     while(number2!=0)
     {
        temp=number2;
        number2=number1%number2;
        number1=temp;
     }
     return number1;
}
int calculateLCM(int number1, int number2, int gcd)
{
    int lcm;
    lcm=(number1*number2)/gcd;
    return lcm;
}