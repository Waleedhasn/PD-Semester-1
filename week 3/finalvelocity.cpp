#include <iostream>
using namespace std;
main() 
{
cout << "Enter initial velocity(m/s):";
int iv;
cin >> iv;
cout << "Enter acceleration(m/s^2):";
int a;
cin >> a;
cout << "Enter time(s):";
int time;
cin >> time;
int fv;
fv=iv+(a*time);
cout << "final velocity is " << fv <<" m/s";
}