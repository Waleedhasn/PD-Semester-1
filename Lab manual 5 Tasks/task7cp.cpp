#include <iostream>
using namespace std;
int symmetrical(int);
main()
{
 int numb;
 int result;
 cout << "Enter a three-digit number:";
 cin >> numb;
 result=symmetrical(numb);
 return 0;
}
int symmetrical(int numb)  
{ 
 int result;
 int firstDigit=numb/100;
 int secondDigit=numb%10;
if(firstDigit==secondDigit)
{
 cout << "The number is symmetrical." <<endl;
}
if(firstDigit!=secondDigit)
{
 cout << "The number is not symmetrical." <<endl;
}
return result;
}