#include <iostream>
using namespace std;
void compare(int x,int y);
main()
{
 int x,y;
 cout << "Enter the first Number:";
 cin >> x;
 cout << "Enter the second Number:";
 cin >> y;
 compare(x,y);
}
void compare(int x,int y)
{
 if(x==y)
{
 cout << "True";
}
if(x!=y)
{
 cout << "False";
}
}