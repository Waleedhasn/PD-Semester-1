#include <iostream>
using namespace std;
main() 
{
cout << "Enter the number of sides of the polygon:";
int n;
cin >> n;
int angle;
angle=(n-2)*180;
cout << "The sum of internal angle of a " << n <<" sided polygon is " << angle <<" degrees";
}