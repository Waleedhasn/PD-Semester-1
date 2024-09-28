#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printname(int x,int y);
main()
{
 int x=20,y=7;
 printname(x,y);
}
void printname(int x,int y)
{
 gotoxy(20,20);
  cout <<" #        # " <<endl;
 gotoxy(20,21);
  cout <<" #        #  " <<endl;
 gotoxy(20,22);
  cout <<" #        # " <<endl; 
gotoxy(20,23);
  cout <<" ##########  " <<endl;
 gotoxy(20,24);
  cout <<" #        # " <<endl; 
 gotoxy(20,25);
  cout <<" #        # "<<endl;
 gotoxy(20,26);
  cout <<" #        #" <<endl;
 //gotoxy(20,27);
 // cout <<"                " <<endl;
 gotoxy(20,28);
  cout <<"      # " <<endl;
 gotoxy(20,29);
  cout <<"     # #  " <<endl;
 gotoxy(20,29);
  cout <<"    #   # " <<endl;
 gotoxy(20,29);
  cout <<"   #######      " <<endl;
 gotoxy(20,29);
  cout <<"  #       # " <<endl;
 gotoxy(20,29);
  cout <<" #         #  " <<endl;
 gotoxy(20,29);
  cout <<"#           # " <<endl;
 gotoxy(20,29);
  cout <<"             " <<endl;
 gotoxy(20,29); 
  cout <<"  #########  " <<endl;
 gotoxy(20,29);
  cout <<" #            " <<endl;
 gotoxy(20,29);
  cout <<" #             " <<endl;
 gotoxy(20,29);
  cout <<"  #########  " <<endl;
 gotoxy(20,29);
  cout <<"           #  " <<endl;
 gotoxy(20,29);
  cout <<"           #  " <<endl;
 gotoxy(20,29);
  cout <<"  #########  " <<endl;
 gotoxy(20,29);
  cout <<"              " <<endl;
 gotoxy(20,29);
  cout <<"  #########  " <<endl;
 gotoxy(20,29);
  cout <<" #            " <<endl;
 gotoxy(20,29);
  cout <<" #           " <<endl;
 gotoxy(20,29);
  cout <<"  #########  " <<endl;
 gotoxy(20,29);
  cout <<"           #  " <<endl;
 gotoxy(20,29);
  cout <<"           #  " <<endl;
 gotoxy(20,29);
  cout <<"  #########  " <<endl;
 gotoxy(20,29); 
  cout <<"             " <<endl;
 gotoxy(20,29);
  cout <<"      #   " <<endl;
 gotoxy(20,29);
  cout <<"     # #      " <<endl;
 gotoxy(20,29);
  cout <<"    #   #   " <<endl;
 gotoxy(20,29);
  cout <<"   #######       " <<endl;
 gotoxy(20,29);
  cout <<"  #       #   " <<endl;
 gotoxy(20,29);
  cout <<" #         #   " <<endl;
 gotoxy(20,29);
  cout <<"#           #   " <<endl;
 gotoxy(20,29);
  cout << "               " <<endl;
 gotoxy(20,29);
  cout <<"  ##      #  " <<endl;
 gotoxy(20,29);
  cout <<"  # #     #  " <<endl;
 gotoxy(20,29);
  cout <<"  #  #    #  " <<endl;
 gotoxy(20,29);
  cout <<"  #   #   #  " <<endl;
 gotoxy(20,29);
  cout <<"  #    #  #  " <<endl;
 gotoxy(20,29);
  cout <<"  #     # #  " <<endl;
 gotoxy(20,29);
  cout <<"  #      ## " <<endl;
 gotoxy(20,29); 
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}