#include <iostream>
#include <cmath>
using namespace std;
float height(float ,float);

main()
{
 float dist,angle,result;
 cout << "Enter the distance from base of the tree(in feet): ";
 cin >> dist;
 cout <<"Enter the angle of elevation(in degrees): ";
 cin >> angle;
 result = height(dist,angle);
 cout << "The height of tree is: " << result;
}
float height(float dist, float angle)
{
 angle=angle/57.2958;
 float result=dist*(tan(angle));
 return result;
}