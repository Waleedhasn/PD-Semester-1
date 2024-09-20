#include <iostream>
using namespace std;
main() 
{
cout << "Number of minutes:";
int min;
cin >> min;
cout << "Frames per second:";
int fps;
cin >> fps;
int frames;
frames=(min*60)*fps;
cout << "total number of frames:" << frames;
}
