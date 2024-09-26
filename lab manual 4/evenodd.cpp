#include <iostream>
using namespace std;
void even();
void odd();
main()
{
 int x;
 cout << "Enter a number:";
 cin >> x;
 if (x%2==0)
{
 even();
}
if(x%2==1)
{
 odd();
}
}
 void even()
{
cout << "EVEN ";
}
void odd()
{
cout << "ODD";
}