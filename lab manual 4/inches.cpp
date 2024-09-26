#include <iostream>
using namespace std;
void measure(float a,float b);
main()
{
 measure(4,5);
}
void measure(float a,float b)
{
float feet;
cout << "Enter the measurement in inches: ";
cin >> a;
b=a/12;
cout << "Equivalent in feet: " << b;
}
