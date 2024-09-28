#include <iostream>
using namespace std;
void tpChecker(int people, int tp);
main()
 {
  int people, tp;
  cout << "Enter number of people in the household: ";
  cin >> people;
  cout << "Enter number of rolls: ";
  cin >> tp;
  tpChecker(people, tp);
}
 void tpChecker(int people, int tp) 
 {
  int totalsheets= tp*500;
  int dayslast=totalsheets/(people * 57);
  if (dayslast >= 14) 
{
  cout << "Your TP will last " << dayslast << " days, no need to panic!"<< endl;
}
  if(dayslast<=14)
{
        cout << "Your TP will only last " << dayslast << " days, buy more!" << endl;
}
}
