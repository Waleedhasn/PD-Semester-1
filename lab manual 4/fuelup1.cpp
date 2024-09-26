#include <iostream>
using namespace std;
void distance();
void fuel();
main()
{
 distance();
}
void distance()
{
 cout << "Enter distance: ";
 float dist;
 cin >> dist;
 float fuel;
 fuel=10*dist;
 cout << "Fuel needed: "<<fuel;
}
