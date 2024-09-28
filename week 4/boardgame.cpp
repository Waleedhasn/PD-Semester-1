#include <iostream>
using namespace std;
void canEarnBonus(int a, int b);
main() 
{
   int yourPosition, friendPosition;
   cout << "Enter your position: ";
   cin >> yourPosition;
   cout << "Enter your friend's position: ";
   cin >> friendPosition;
   canEarnBonus(yourPosition, friendPosition);
}
void canEarnBonus(int a, int b)
 {
    if (b - a >= 1)  
 {
    if(b - a <= 6)
 { 
    cout << "true" << endl;
  }
   else {
        cout << "false" << endl;
  }
  }
   else {
        cout << "false" << endl;
    }
}
