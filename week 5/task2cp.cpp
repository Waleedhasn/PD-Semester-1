#include <iostream>
#include <cmath>
using namespace std;
int length,width,height;
float volume;
float millimeters();
float centimeters();
float meters();
float kilometers();
main()
{

string unit;
cout << "Enter the length of the pyramid (in meters):";
cin >> length;
cout << "Enter the width of the pyramid (in meters):";
cin >> width;
cout << "Enter the height of the pyramid (in meters):";
cin >> height;
cout << "Enter the desired output unit(millimeters, centimeters, meters, kilometers):";
cin >> unit;
if(unit == "meters")
{ meters();}
if(unit == "millimeters")
{millimeters();}
if(unit == "centimeters")
{centimeters();}
if (unit == "kilometers")
{kilometers();}
return 0;
}
float millimeters()
{
 volume=(1.0/3)*(length*width*height);
 volume=volume * 1000000000;
 cout << "The volume of the pyramid is "<< volume << " cubic millimeters";
 return volume;
}
float meters()
{
 volume=(1.0/3)*(length*width*height);
 volume=volume;
 cout << "The volume of the pyramid is "<< volume << " cubic meters";
 return volume;
}
float centimeters()
{
 volume=(1.0/3)*(length*width*height);
 volume=volume*1000000;
 cout << "The volume of the pyramid is "<< volume << " cubic centimeters";
 return volume;
}
float kilometers()
{
 volume=(1.0/3)*(length*width*height);
 volume=volume/1000000000;
 cout << "The volume of the pyramid is "<< volume << "cubic kilometers";
 return volume;
}