#include <iostream>
#include <windows.h>
using namespace std;
void printmaze();
void printplayer(int x,int y);
void gotoxy(int x,int y);
main()
{
 int x = 4,y =5;
 system("cls");
 printmaze();
 while(true)
{
 printplayer(x,y);
 x=x+1;
 if (x==44)
{
 x=3;
}
}
}

 void printplayer(int x,int y)
 {
 gotoxy(x,y);
 cout << "P";
 Sleep(200);
 gotoxy(x,y);
 cout<<" ";
 gotoxy(44,5);
 gotoxy(0,20);
}

void printmaze()
{
 cout << "##############################################" <<endl;
 cout << "#                                            #" <<endl;
 cout << "#                                            #" <<endl;
 cout << "#                                            #" <<endl;
 cout << "#                                            #" <<endl;
 cout << "#                                            #" <<endl;
 cout << "#                                            #" <<endl;
 cout << "#                                            #" <<endl;
 cout << "#                                            #" <<endl;
 cout << "#                                            #" <<endl;
 cout << "#                                            #" <<endl;
 cout << "#                                            #" <<endl;
 cout << "#                                            #" <<endl;
 cout << "#                                            #" <<endl;
 cout << "#                                            #" <<endl;
 cout << "##############################################" <<endl;
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
