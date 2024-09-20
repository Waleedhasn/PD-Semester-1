#include <iostream>
using namespace std;
main()
{
cout <<"Enter force..";
int force;
cin >> force;
cout << "Enter mass..";
int mass;
cin >> mass;
int acceleration;
acceleration = force/mass;
cout << "Acceleration is.." << acceleration;
}