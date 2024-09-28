#include <iostream>
using namespace std;
void trueFalse(string x);
main()
{
 string x;
 cout << "Enter 'true' or 'false':";
 cin >> x;
 trueFalse(x);
}
void trueFalse(string x)
{
 if(x=="true")
{
 cout << "False";
}
if(x=="false")
{
cout << "True";
}
}