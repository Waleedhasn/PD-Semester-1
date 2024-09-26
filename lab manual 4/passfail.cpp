#include<iostream>
using namespace std;
void pass();
void fail();
main()
{
int score;
cout << "Enter your score:";
cin >> score;
if(score==50)
{
 fail();
}
if(score>50)
{
 pass();
}
if(score<50)
{
 fail();
}
}
void pass()
{
 cout <<"PASS";
}
void fail()
{
 cout <<"FAIL";
}