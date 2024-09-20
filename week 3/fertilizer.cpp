#include <iostream>
using namespace std;
main() 
{
cout << "Enter the size of fertilizer bag in pounds:";
int size;
cin >> size;
cout << "Enter the cost of the bag:$";
int cost;
cin >> cost;
cout << "Enter the area in square feet that can be covered by the bag:";
int area;
cin >> area;
int fpp;
fpp=cost/size;
int fps;
fps=cost/area;
cout << "cost of fertilizer per pound:$" << fpp << endl;
cout << "cost of fertilizer per square feet:$" << fps << endl;
}
 