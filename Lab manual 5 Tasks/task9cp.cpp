#include <iostream>
using namespace std;
int timeTravel(int ,int);
main()
{
 int min,hour;
 int result; 
 cout << "Enter Hours(0-23):";
 cin >> hour;
 cout << "Enter Minutes(0-59):";
 cin >> min;
 result=timeTravel(min ,hour);
 return 0;
}
int timeTravel(int min,int hour)
{
 int result;
 min=min+15;
if (min > 60)
{
min=min-60;
hour=hour+1;
}
if(hour > 24)
{
hour= hour-24;
}
cout <<hour<< ":" << min;
return result;
}													
 

