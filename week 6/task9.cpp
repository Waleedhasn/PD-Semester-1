#include <iostream>
using namespace std;
string checkPointPosition(int h, int x, int y);
main()
{
   int h, x, y;
   cout << "Enter height: ";
   cin >> h;
   cout << "Enter x-coordinate: ";
   cin >> x;
   cout << "Enter y-coordinate: ";
   cin >> y;
   cout << checkPointPosition(h, x, y);

}
string checkPointPosition(int h, int x, int y)
{
    if ((x > 0 && x < 3 * h && y > 0 && y < h) || (x > h && x < 2 * h && y > h && y < 4 * h)) 
    {
        return "Inside";
    }
    if((x == 0 && y >= 0 && y <= h) || (x == 3 * h && y >= 0 && y <= h))
    {
        return "Border";
        if((y == 0 && x >= 0 && x <= 3 * h) || (y == h && x >= 0 && x <= h))
        return "Border";
        if((y == h && x >= 2 * h && x <= 3 * h) || (x == h && y >= h && y <= 4 * h)) 
        return "Border";  
        if((x == 2 * h && y >= h && y <= 4 * h) || (y == 4 * h && x >= h && x <= 2 * h))
        return "Border";
    }
    else 
    {
        return "Outside";
    }
    

}
