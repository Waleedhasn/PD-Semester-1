#include <iostream>
#include <windows.h>
using namespace std;

string menu();
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
void displayScore();
bool isCollisionWithEnemy();
void gameOver();

int playerHealth = 100; 
int e1X = 120, e1Y = 10;
int e2X = 70, e2Y = 5;
int e3X = 50, e3Y = 15;
int pX = 7, pY = 5;
int e1Direc = 1;
int e2Direc = 1;
int e3DirecX = 1;
int e3DirecY = 1;
int score = 0;

int main() 
{
    string option = menu();
   while(true)
   { if (option == "1")
    {
        system("cls");
        printMaze();
        printEnemy(e1X, e1Y);
        printEnemy(e2X, e2Y);
        printEnemy(e3X, e3Y);

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

            if (isCollisionWithEnemy()) 
            {
                playerHealth -= 10;  
                gotoxy(12, 28); 
                cout << "Player Health: " << playerHealth << "   ";

                if (playerHealth <= 0) {
                    gotoxy(40, 15);
                    gameOver();
                    break;
                }
            }

            displayScore();

            Sleep(200);
        }
    }    
    else
    {
       main();
    }
   }
}

string menu() 
{    
     system("cls");
     cout << "######################################################################################"<<endl;
     cout << "##                                                                                  ##"<<endl;
     cout << "##                 ########    #     ##    #   #     #                              ##"<<endl;
     cout << "##                    ##      # #    # #   #   #   #                                ##"<<endl;
     cout << "##                    ##     #####   #  #  #   # #                                  ##"<<endl;
     cout << "##                    ##    #     #  #   # #   #   #                                ##"<<endl;
     cout << "##                    ##   #       # #    ##   #     #                              ##"<<endl;
     cout << "##                                                                                  ##"<<endl;
     cout << "##        #####       #      ##### ##### #     #####   #####  #  #####  #    ####   ##"<<endl;
     cout << "##        ##   #     # #       #     #   #     #       #      #  #      #    #   #  ##"<<endl;
     cout << "##        #####     #####      #     #   #     ####    ####   #  ####   #    #    # ##"<<endl;
     cout << "##        ##   #   #     #     #     #   #     #       #      #  #      #    #   #  ##"<<endl;
     cout << "##        #####   #       #    #     #   ##### #####   #      #  #####  #### ####   ##"<<endl;
     cout << "##                                                                                  ##"<<endl;
     cout << "##                                                                                  ##"<<endl;
     cout << "##                         PRESS 1 TO START GAME                                    ##"<<endl;
     cout << "##                                                                                  ##"<<endl;
     cout << "##                                                                                  ##"<<endl;
     cout << "##                                                                                  ##"<<endl;
     cout << "##                                                                                  ##"<<endl; 
     cout << "##                                                                                  ##"<<endl;
     cout << "##                                                                                  ##"<<endl;
     cout << "##                                                                                  ##"<<endl;
     cout << "######################################################################################"<<endl;
    string option;
    cin >> option;
    return option;
    
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

void eraseTank()
 {
    gotoxy(pX, pY);
    cout << "                             " << endl;
    gotoxy(pX, pY + 1);
    cout << "                             " << endl;
    gotoxy(pX, pY + 2);
    cout << "                            " << endl;
    gotoxy(pX, pY + 3);
    cout << "                           " << endl;
}

void printMaze() 
{
    system("cls");
    cout << "##############################################################################################################################################" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                          $                                                                                                 #" << endl; // Bonus Pill 1
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                 $                                                                          #" << endl; // Bonus Pill 2
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                       $                                                                                                    #" << endl; // Bonus Pill 3
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#               $                                                                                                                            #" << endl; // Bonus Pill 4
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#              $                                                                                                                             #" << endl; // Bonus Pill 5
    cout << "#                                                                                                                                            #" << endl;
    cout << "##############################################################################################################################################"<< endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                  Enemy Health:                                             #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "##############################################################################################################################################" << endl;
}


void gotoxy(int x, int y) 
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printEnemy(int x, int y) 
{
    gotoxy(x, y);
    cout << "         (~~~) (~~~)";
    gotoxy(x, y + 1);
    cout << "o=======|=| | | |=|";
    gotoxy(x, y + 2);
    cout << "o=======|=| | | |=|";
    gotoxy(x, y + 3);
    cout << "         (~~~) (~~~)";
}

void eraseEnemy(int x, int y) 
{
    gotoxy(x, y);
    cout << "                    ";
    gotoxy(x, y + 1);
    cout << "                    ";
    gotoxy(x, y + 2);
    cout << "                    ";
    gotoxy(x, y + 3);
    cout << "                    ";
}

void moveEnemyVertically() 
{
    eraseEnemy(e1X, e1Y);
    e1Y =e1Y + e1Direc;
    if (e1Y >= 20 || e1Y <= 1) {
        e1Direc = -1*e1Direc;
    }
    printEnemy(e1X, e1Y);
}

void moveEnemyHorizontally() 
{
    eraseEnemy(e2X, e2Y);
    e2X = e2X + e2Direc;
    if (e2X >= 100 || e2X <= 70) {
        e2Direc = -1*e2Direc;
    }
    printEnemy(e2X, e2Y);
}

void moveEnemyDiagonally()
 {
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


void movePlayerLeft()
 {
    if (pX > 1) 
    {
        eraseTank();
        pX = pX - 1;
        printTank();
    }
}

void movePlayerRight() 
{
    if (pX < 120)
     { 
        eraseTank();
        pX = pX + 1;
        printTank();
    }
}

void movePlayerUp() 
{
    if (pY > 1) 
    {
        eraseTank();
        pY = pY - 1;
        printTank();
    }
}

void movePlayerDown()
 {
    if (pY < 22) 
    { 
        eraseTank();
        pY = pY + 1;
        printTank();
    }
}

void displayScore() {
    for (int i = 0; i < 4; i++)
     {
        for (int j = 0; j < 25; j++) 
        { 
            char ch = getCharAtxy(pX + j, pY + i); 
            if (ch == '$') 
            { 
                score += 10; 
                gotoxy(pX + j, pY + i); 
                cout << " "; 
            }
        }
    }

    
    gotoxy(5, 29);
    cout << "Score: " << score << "   ";
}

bool isCollisionWithEnemy()
 {

    for (int i = 0; i < 4; i++) 
    { 
        for (int j = 0; j < 25; j++) 
        { 
            if ((pX + j >= e1X && pX + j <= e1X + 20) && 
                (pY + i >= e1Y && pY + i <= e1Y + 3)) {
                return true;
            }
        }
    }

    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 25; j++) 
        {
            if ((pX + j >= e2X && pX + j <= e2X + 20) &&
                (pY + i >= e2Y && pY + i <= e2Y + 3)) {
                return true;
            }
        }
    }
   
    for (int i = 0; i < 4; i++)
     {
        for (int j = 0; j < 25; j++) 
        {
            if ((pX + j >= e3X && pX + j <= e3X + 20) &&
                (pY + i >= e3Y && pY + i <= e3Y + 3)) 
                {
                return true;
            }
        }
    }
    return false;
}


char getCharAtxy(short int x, short int y) 

{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void gameOver()
{

system("cls");
cout << "######################################################################################"<<endl;
cout << "##                                                                                  ##"<<endl;
cout << "##             #########      #      ##     ##   ######                             ##"<<endl;
cout << "##            ##             # #     # #   # #   #                                  ##"<<endl;
cout << "##            ##            #   #    #  # #  #   #####                              ##"<<endl;
cout << "##            ##   #####   #######   #   #   #   #                                  ##"<<endl;
cout << "##            ##     ###  #       #  #       #   #                                  ##"<<endl;
cout << "##             ######### #         # #       #   ######                             ##"<<endl;
cout << "##                                                                                  ##"<<endl;
cout << "##                                                                                  ##"<<endl;
cout << "##                                                                                  ##"<<endl;
cout << "##                                                                                  ##"<<endl;
cout << "##           ########   #           #  #######  ######                              ##"<<endl;
cout << "##          #        #   #         #   #        #     #                             ##"<<endl;
cout << "##          #        #    #       #    #        #     #                             ##"<<endl;
cout << "##          #        #     #     #     #####    ######                              ##"<<endl;
cout << "##          #        #      #   #      #        ##                                  ##"<<endl;
cout << "##          #        #       # #       #        #  #                                ##"<<endl;
cout << "##           ########         #        #######  #    #                              ##"<<endl;
cout << "##                                                                                  ##"<<endl;
cout << "##                                                                                  ##"<<endl;
cout << "##                                                                                  ##"<<endl;
cout << "##                                                                                  ##"<<endl;
cout << "######################################################################################"<<endl;
}