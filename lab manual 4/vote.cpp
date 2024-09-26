#include <iostream>
using namespace std;
void vote();
main()
{
 vote();
}
void vote()
{
 cout <<"Enter your age:";
int age;
cin >> age;
if(age==18)
{
cout << "You are eligible for vote.";
}
if(age>18)
{
cout << "You are eligible for vote.";
}
if(age<18)
{
cout << "You are not eligible for vote.";
}
}