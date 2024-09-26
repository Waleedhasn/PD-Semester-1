#include <iostream>
using namespace std;
void length();
main()
{
 length();
}
void length()
{
 int length,stick;
 cout << "Enter the side length of the Rubik's cube:";
 cin >> length;
 stick=(length*length)*6;
 cout << "Number of stickers needed:" << stick;
}