#include <iostream>
using namespace std;
void sunday();
void week();
main()
{
 string day;
 cout << "Enter the day of purchase:";
 cin >> day; 
 if(day == "sunday")
{
 sunday();
}
if(day != "sunday")
{
 week();
}
}
void sunday()
{
 float amt;
 cout <<"Enter the total purchase amount:$";
 cin >> amt;
 
 float bill;
 bill=amt-(amt*0.1);
 cout << "Payable amount:" << bill;
}
void week()
{
 float amt;
 cout <<"Enter the total purchase amount:$";
 cin >> amt;
 float bill;
 bill=amt;
 cout << "Payable amount:" << bill;
}

 