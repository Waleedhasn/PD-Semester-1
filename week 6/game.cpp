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
void printEnemy(int x, int y);
void eraseEnemy(int x, int y);
void moveEnemyVertically();
void moveEnemyHorizontally();
void moveEnemyDiagonally();
void printMaze();
void bonusPill();

int bx = 50, by = 1; 
int e1X = 120, e1Y = 10;
int e2X = 70, e2Y = 5;
int e3X = 50, e3Y = 15;
int pX = 7, pY = 5;
int e1Direc=1;
int e2Direc=1;
int e3DirecX=1;
int e3DirecY=1;

int main() 
{
    system("cls");
    printMaze();
    printEnemy(e1X, e1Y);
    printEnemy(e2X, e2Y);
    printEnemy(e3X, e3Y);

    gotoxy(bx,by);
    bonusPill();
    
    
    gotoxy(pX, pY);
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
        moveEnemyVertically();
        moveEnemyHorizontally();
        moveEnemyDiagonally();
        Sleep(200);
    }
}

void printTank() 
{
    gotoxy(pX, pY);
    cout << "     <||||||||||||>=========o" << endl;
    gotoxy(pX, pY + 1);
    cout << "  [||||||||||||||||||||||]" << endl;
    gotoxy(pX, pY + 2);
    cout << "  \\||||||||||||||||||||||/ " << endl; 
    gotoxy(pX, pY + 3);
    cout << "    \\(OOOOOOOOOOOOOOOOO)/ " << endl;
}

void eraseTank() {
    gotoxy(pX, pY);
    cout << "                             " << endl;
    gotoxy(pX, pY + 1);
    cout << "                             " << endl;
    gotoxy(pX, pY + 2);
    cout << "                            " << endl;
    gotoxy(pX, pY + 3);
    cout << "                           " << endl;
}

void printMaze() {
    system("cls");
    cout << "##############################################################################################################################################" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "##############################################################################################################################################"<< endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#    player Health:                                                                    enemy health:                                         #" << endl;
    cout << "#    Score:                                                                                                                                  #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "##############################################################################################################################################" << endl;
}

void gotoxy(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printEnemy(int x, int y) {
    gotoxy(x, y);
    cout << "         (~~~) (~~~)";
    gotoxy(x, y + 1);
    cout << "o=======|=| | | |=|";
    gotoxy(x, y + 2);
    cout << "o=======|=| | | |=|";
    gotoxy(x, y + 3);
    cout << "         (~~~) (~~~)";
}

void eraseEnemy(int x, int y) {
    gotoxy(x, y);
    cout << "                    ";
    gotoxy(x, y + 1);
    cout << "                    ";
    gotoxy(x, y + 2);
    cout << "                    ";
    gotoxy(x, y + 3);
    cout << "                    ";
}

void moveEnemyVertically() {
    eraseEnemy(e1X, e1Y);
    e1Y =e1Y + e1Direc;
    if (e1Y >= 20 || e1Y <= 1) {
        e1Direc = -1*e1Direc;
    }
    printEnemy(e1X, e1Y);
}

void moveEnemyHorizontally() {
    eraseEnemy(e2X, e2Y);
    e2X = e2X + e2Direc;
    if (e2X >= 100 || e2X <= 70) {
        e2Direc = -1*e2Direc;
    }
    printEnemy(e2X, e2Y);
}

void moveEnemyDiagonally() {
    eraseEnemy(e3X, e3Y);
    e3X = e3X + e3DirecX;
    e3Y = e3Y + e3DirecY;
    if (e3X >= 100 || e3X <= 20) {
        e3DirecX = -1*e3DirecX;
    }
    if (e3Y >= 20 || e3Y <= 10) {
        e3DirecY = -1*e3DirecY;
    }
    printEnemy(e3X, e3Y);
}


void movePlayerLeft() {
    if (pX > 1) {
        eraseTank();
        pX = pX - 1;
        printTank();
    }
}

void movePlayerRight() {
    if (pX < 100) {
        eraseTank();
        pX = pX + 1;
        printTank();
    }
}

void movePlayerUp() {
    if (pY > 1) {
        eraseTank();
        pY = pY - 1;
        printTank();
    }
}

void movePlayerDown() {
    if (pY < 22) {
        eraseTank();
        pY = pY + 1;
        printTank();
    }
}
void bonusPill()
{
gotoxy(bx,by);
cout<<"               **** "<<endl;
gotoxy(bx,by+1);
cout<<"              *  *  "<<endl;
gotoxy(bx,by+2);
cout<<"            *  *    "<<endl;
gotoxy(bx,by+3);
cout<<"           *  ****** "<<endl;
gotoxy(bx,by+4);
cout<<"          * * *   * "<<endl;
gotoxy(bx,by+5);
cout<<"              *  *  "<<endl;
gotoxy(bx,by+6);
cout<<"            *  *    "<<endl;
gotoxy(bx,by+7);
cout<<"           ****     "<<endl;


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
