#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void printTank();
void eraseTank();
void movePlayerUp();
void movePlayerDown();
void movePlayerLeft();
void movePlayerRight();
void printEnemy();
void moveEnemy();
void printMaze();

int eX = 90, eY = 10;
int pX = 7, pY = 5;
int enemyDirection=1;

int main() 
{
    int x, y;
    system("cls");
    printMaze();
    printEnemy();
    gotoxy(7, 5);
    printTank();
    gotoxy(90, 90);
    while (true)
 {
        if (GetAsyncKeyState(VK_LEFT)) {
            movePlayerLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT)) {
            movePlayerRight();
        }
        if (GetAsyncKeyState(VK_UP)) {
            movePlayerUp();
        }
        if (GetAsyncKeyState(VK_DOWN)) {
            movePlayerDown();
        }
        moveEnemy();
        Sleep(200);
    }
}

void printTank() {
    gotoxy(pX, pY);
    cout << "               ____________         " << endl;
    gotoxy(pX, pY + 1);
    cout << "              /            \\___________________ " << endl;
    gotoxy(pX, pY + 2);
    cout << "             /______________\\------------------()  " << endl;
    gotoxy(pX, pY + 3);
    cout << " ___________/                \\___________________ " << endl;
    gotoxy(pX, pY + 4);
    cout << " |                                               | " << endl;
    gotoxy(pX, pY + 5);
    cout << " |_______________________________________________|  " << endl;
    gotoxy(pX, pY + 6);
    cout << " \\    _____   _____   _____   _____   _____   //  " << endl;
    gotoxy(pX, pY + 7);
    cout << "  \\   |   |   |   |   |   |   |   |   |   |  //  " << endl;
    gotoxy(pX, pY + 8);
    cout << "   \\__|___|___|___|___|___|___|___|___|___|_//    " << endl;
    gotoxy(pX, pY + 9);
    cout << "    -----------------------------------------     " << endl;
}

void eraseTank() {
    gotoxy(pX, pY);
    cout << "                                              " << endl;
    gotoxy(pX, pY + 1);
    cout << "                                                " << endl;
    gotoxy(pX, pY + 2);
    cout << "                                                   " << endl;
    gotoxy(pX, pY + 3);
    cout << "                                                    " << endl;
    gotoxy(pX, pY + 4);
    cout << "                                                     " << endl;
    gotoxy(pX, pY + 5);
    cout << "                                                     " << endl;
    gotoxy(pX, pY + 6);
    cout << "                                                    " << endl;
    gotoxy(pX, pY + 7);
    cout << "                                                    " << endl;
    gotoxy(pX, pY + 8);
    cout << "                                                    " << endl;
    gotoxy(pX, pY + 9);
    cout << "                                                   " << endl;
}

void printMaze() {
    system("cls");
cout<<"##############################################################################################################################################"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"#                                                                                                                                            #"<<endl;
cout<<"##############################################################################################################################################"<<endl;
    
}

void gotoxy(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printEnemy() {
    gotoxy(eX, eY);
    cout << "(~~~) (~~~)";
    gotoxy(eX, eY + 1);
    cout << "|=| | | |=|";
    gotoxy(eX, eY + 2);
    cout << "|=| | | |=|";
    gotoxy(eX, eY + 3);
    cout << "   \\   /   ";
    gotoxy(eX, eY + 4);
    cout << "    \\ /    ";
}

void eraseEnemy() {
    gotoxy(eX, eY);
    cout << "           ";
    gotoxy(eX, eY + 1);
    cout << "           ";
    gotoxy(eX, eY + 2);
    cout << "           ";
    gotoxy(eX, eY + 3);
    cout << "           ";
    gotoxy(eX, eY + 4);
    cout << "           ";
}

void moveEnemy() 
{

    eraseEnemy();
    eY += enemyDirection;
 if (eY <= 1)  
 {
    enemyDirection *= -1;
   }
if(eY >= 20)
{
    enemyDirection *= -1;
}
    printEnemy();
}

void movePlayerLeft() 
{
    if (getCharAtxy(pX - 1, pY) == ' ') 
  {
        eraseTank();
        pX = pX - 1;
        printTank();
  }
}

void movePlayerRight()
{
    if (getCharAtxy(pX + 30, pY) == ' ')
  {
        eraseTank();
        pX = pX + 1;
        printTank();
   }
}

void movePlayerUp()
{
    if (getCharAtxy(pX, pY - 1) == ' ') 
 {
        eraseTank();
        pY = pY - 1;
        printTank();
  }
}

void movePlayerDown()
{
    if (getCharAtxy(pX, pY + 10) == ' ') 
 {
        eraseTank();
        pY = pY + 1;
        printTank();
  }
}

char getCharAtxy(short int x, short int y) {
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
