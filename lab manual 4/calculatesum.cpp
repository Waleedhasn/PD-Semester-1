#include <iostream>
using namespace std;
void add(int n1,int n2);
main()1
{
 float n1,n2;
 cout <<"Enter Number1:";
 cin >> n1;
 cout <<"Enter number2:";
 cin >> n2;
 char opp;
 cout << "Enter Operator(+,-,*,/):";
 cin >> opp;
 if (opp=='+')
{
 add(n1,n2);
}
}
void add(int n1,int n2)
{
 cout << "Sum:" << n1+n2;
}
 
 
 
 
 
 
 