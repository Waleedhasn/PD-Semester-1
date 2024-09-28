#include <iostream>
using namespace std;
void checkSpeed(int speed);
main()
{
 int speed;
 cout <<" Enter speed:";
 cin  >> speed;
 checkSpeed(speed);
 
}
void checkSpeed(int speed)
{ 
 if(speed>100)
{
cout << "Halt... YOU WILL BE CHALLENGED!!!";
}
if(speed==100)
{
cout <<"Perfect! You're going good.";
}
if(speed<100)
{
cout <<"Perfect! You're going good.";
}
}
