#include <iostream>
#include <cmath>
using namespace std;
float squareRoot(float);
main()
{
 float numb,result;
 cout << "Enter a Number: ";
 cin >> numb;
 result=squareRoot(numb);
 cout << "The square root of " << numb << " is: " << result;
}
float squareRoot(float numb)
{
 float result=sqrt(numb);
 return result;
}