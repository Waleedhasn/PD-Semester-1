#include <iostream>
using namespace std;
void calculator();
main()
{
while(true)
{
  calculator();
}
}
 void calculator()
{
 float n1,n2,sum,mult,subt,div;
 cout <<"Enter Number1:";
 cin >> n1;
 cout <<"Enter number2:";
 cin >> n2;
 char opp;
 cout << "Enter Operator(+,-,*,/):";
 cin >> opp;
 if (opp=='+')
{
 sum=n1+n2;
 cout << "Sum:" << sum << endl;
}
if (opp=='-')
{
 subt=n1-n2;
 cout << "subtract:"<< subt << endl;
}
if (opp=='*')
{
 mult=n1*n2;
 cout << "Product:"<< mult <<endl ;
}
if (opp=='/')
 {
 div=n1/n2;
 cout << "Division:" << div << endl ;
}
}