#include <iostream>
#include <cmath>
using namespace std;
float raisedPower(float ,float);
main()
{
 float n1,n2,result;
 cout <<"Enter the base Number: ";
 cin >> n1;
 cout << "Enter the exponent: ";
 cin >> n2;
 result=raisedPower( n1, n2);
 cout << n1 << " raised to the power " << n2 << " is " <<result;
}
float raisedPower(float n1,float n2)
{
 float result=pow(n1,n2);
 return result;
}
