#include <iostream>
using namespace std;
void fuel();
main()
{

 fuel();
}
void fuel()
{
 float dist;
 cout << "Enter the Distance:";
 cin >> dist;
 float fuel;
 fuel=dist*10;
 if(fuel>100)
{ 
 cout << "Fuel needed:" << fuel;
}
if(fuel<100)
{
cout << "Fuel needed: 100";
}
}