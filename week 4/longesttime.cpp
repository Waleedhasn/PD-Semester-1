#include <iostream>
using namespace std; 
void longestTime(int min, int hour);
main()
{
 int min,hour;
 cout << "Enter the number of hours:";
 cin >> hour;
 cout << "Enter the number of minutes:";
 cin >> min;
 longestTime(min,hour);


}
void longestTime(int min,int hour)
{
 if(min>hour*60)
{
 
 cout << min;
}
if(hour*60>=min)
{

cout << hour;
}
}
 