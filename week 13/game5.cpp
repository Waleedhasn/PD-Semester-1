#include <iostream>
#include <windows.h>
#include <conio.h>
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
void setColor(int color);
bool isCollisionWithEnemyAt(int x, int y);
void generateBullet(int tankX, int tankY);
void moveBullet();
void printBullet(int x, int y);
void eraseBullet(int x, int y);
void makeBulletInactive(int index);
void bulletCollisionWithEnemy();
void addScore();
void printScore();
void enemyHealth();

int bulletX[100];
int bulletY[100];
bool isBulletActive[100];
int bulletCount = 0;
const int mazeWidth = 120;
const int mazeHeight = 22;
int playerHealth = 100;
int e1X = 120, e1Y = 10;
int e2X = 70, e2Y = 5;
int e3X = 50, e3Y = 15;
int pX = 7, pY = 5;
int fX = 0, fY = 0;
int e1Direc = 1;
int e2Direc = 1;
int e3DirecX = 1;
int e3DirecY = 1;
int score = 0;
int e1Health = 50;
int e2Health = 50;
int e3Health = 50;

main()
{
    while (true)
    {
        string option = menu();
        if (option == "1")
        {

            playerHealth = 100;
            score = 0;
            pX = 7;
            pY = 5;
            e1X = 120, e1Y = 10;
            e2X = 70, e2Y = 5;
            e3X = 50, e3Y = 15;
            e1Direc = 1;
            e2Direc = 1;
            e3DirecX = 1;
            e3DirecY = 1;
            e1Health = 50;
            gotoxy(99, 28);
            cout<<e1Health;
            gotoxy(99, 29);
            e2Health = 50;
            gotoxy(99, 30);
            e3Health = 50;

            system("cls");
            printMaze();
            printEnemy(e1X, e1Y);
            printEnemy(e2X, e2Y);
            printEnemy(e3X, e3Y);
            printTank();

            while (true)
            {
                // Player movement
                if (GetAsyncKeyState(VK_LEFT))
                {
                    movePlayerLeft();
                }
                if (GetAsyncKeyState(VK_RIGHT))
                {
                    movePlayerRight();
                }
                if (GetAsyncKeyState(VK_UP))
                {
                    movePlayerUp();
                }
                if (GetAsyncKeyState(VK_DOWN))
                {
                    movePlayerDown();
                }
                if (GetAsyncKeyState(VK_SPACE))
                {
                    generateBullet(pX, pY);
                }

                moveEnemyVertically();
                moveEnemyHorizontally();
                moveEnemyDiagonally();
                enemyHealth();

                moveBullet();
                bulletCollisionWithEnemy();

                if (isCollisionWithEnemy())
                {
                    playerHealth -= 10;
                    gotoxy(5, 28);
                    cout << "Player Health: " << playerHealth << "   ";

                    if (playerHealth <= 0)
                    {
                        gotoxy(40, 15);
                        gameOver();
                        system("pause");
                        break;
                    }
                }

                displayScore();

                Sleep(100);
            }
        }
        else
        {
            cout << "Invalid option. Please try again.";
            Sleep(1000);
        }
    }
}

string menu()
{
    system("cls");
    setColor(12);
    cout << "#############################################################################################################" << endl;
    cout << "##                                                                                                         ##" << endl;
    cout << "##                        ########    #     ##    #   #     #                                              ##" << endl;
    cout << "##                           ##      # #    # #   #   #   #                                                ##" << endl;
    cout << "##                           ##     #####   #  #  #   # #                                                  ##" << endl;
    cout << "##                           ##    #     #  #   # #   #   #                                                ##" << endl;
    cout << "##                           ##   #       # #    ##   #     #                                              ##" << endl;
    cout << "##                                                                                                         ##" << endl;
    cout << "##        #####       #      ##### ##### #     #####   #####  #  #####  #    ####                          ##" << endl;
    cout << "##        ##   #     # #       #     #   #     #       #      #  #      #    #   #                         ##" << endl;
    cout << "##        #####     #####      #     #   #     ####    ####   #  ####   #    #    #                        ##" << endl;
    cout << "##        ##   #   #     #     #     #   #     #       #      #  #      #    #   #                         ##" << endl;
    cout << "##        #####   #       #    #     #   ##### #####   #      #  #####  #### ####                          ##" << endl;
    cout << "##                                                                                                         ##" << endl;
    cout << "##                                                                                                         ##" << endl;
    cout << "##                         PRESS 1 TO START GAME                                                           ##" << endl;
    cout << "##                                                                                                         ##" << endl;
    cout << "##                                                                                                         ##" << endl;
    cout << "##                                                                                                         ##" << endl;
    cout << "##                                                                                                         ##" << endl;
    cout << "##                                                                                                         ##" << endl;
    cout << "##                                                                                                         ##" << endl;
    cout << "##                                                                                                         ##" << endl;
    cout << "#############################################################################################################" << endl;
    string option;
    cin >> option;
    return option;
}

void printMaze()
{
    system("cls");
    setColor(9);
    cout << "##############################################################################################################################################" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                          $                                                                                                 #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                 $                                                                          #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                       $                                                                                                    #" << endl;
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
    cout << "#                                                    $                                                                                       #" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "##############################################################################################################################################" << endl;
    cout << "#                                                                                                                                            #" << endl;
    cout << "#                                                                                  Enemy 1 Health:                                           #" << endl;
    cout << "#                                                                                  Enemy 2 Health:                                           #" << endl;
    cout << "#                                                                                  Enemy 3 Health:                                           #" << endl;
    cout << "##############################################################################################################################################" << endl;

    gotoxy(5, 28);
    cout << "Player Health: " << playerHealth;
    gotoxy(5, 29);
    cout << "Score: " << score;
}

void printTank()
{
    gotoxy(pX, pY);
    cout << "     <||||||||||||>=========o";
    gotoxy(pX, pY + 1);
    cout << "  [||||||||||||||||||||||]";
    gotoxy(pX, pY + 2);
    cout << "  \\||||||||||||||||||||||/";
    gotoxy(pX, pY + 3);
    cout << "    \\(OOOOOOOOOOOOOOOOO)/";
}

void eraseTank()
{
    gotoxy(pX, pY);
    cout << "                             ";
    gotoxy(pX, pY + 1);
    cout << "                             ";
    gotoxy(pX, pY + 2);
    cout << "                             ";
    gotoxy(pX, pY + 3);
    cout << "                             ";
}

void movePlayerLeft()
{
    if (pX > 1)
    {
        eraseTank();
        pX -= 2;
        printTank();
    }
}

void movePlayerRight()
{
    if (pX < 110)
    {
        eraseTank();
        pX += 2;
        printTank();
    }
}

void movePlayerUp()
{
    if (pY > 1)
    {
        eraseTank();
        pY -= 2;
        printTank();
    }
}

void movePlayerDown()
{
    if (pY < 21)
    {
        eraseTank();
        pY += 2;
        printTank();
    }
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
    e1Y += e1Direc;
    if (e1Y >= 20 || e1Y <= 1)
        e1Direc *= -1;
    printEnemy(e1X, e1Y);
}

void moveEnemyHorizontally()
{
    eraseEnemy(e2X, e2Y);
    e2X += e2Direc;
    if (e2X >= 110 || e2X <= 70)
        e2Direc *= -1;
    printEnemy(e2X, e2Y);
}

void moveEnemyDiagonally()
{
    eraseEnemy(e3X, e3Y);
    e3X += e3DirecX;
    e3Y += e3DirecY;
    if (e3X >= 110 || e3X <= 40)
        e3DirecX *= -1;
    if (e3Y >= 20 || e3Y <= 20)
        e3DirecY *= -1;
    printEnemy(e3X, e3Y);
}

void generateBullet(int tankX, int tankY)
{
    bulletX[bulletCount] = tankX + 10;
    bulletY[bulletCount] = tankY;
    isBulletActive[bulletCount] = true;
    bulletCount++;
}

void moveBullet()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (isBulletActive[x])
        {
            eraseBullet(bulletX[x], bulletY[x]);
            bulletX[x]++;
            if (bulletX[x] < mazeWidth)
            {
                printBullet(bulletX[x], bulletY[x]);
            }
            else
            {
                makeBulletInactive(x);
            }
        }
    }
}
bool isCollisionWithEnemy()
{

    if (pX >= e1X && pX <= e1X + 10 && pY == e1Y)
    {
        return true;
    }
    if (pX >= e2X && pX <= e2X + 10 && pY == e2Y)
    {
        return true;
    }
    if (pX >= e3X && pX <= e3X + 10 && pY == e3Y)
    {
        return true;
    }
    return false;
}

void bulletCollisionWithEnemy()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (isBulletActive[x])
        {

            if (bulletX[x] >= e1X && bulletX[x] <= e1X + 10 && bulletY[x] == e1Y)
            {
                makeBulletInactive(x);
                addScore();
                eraseEnemy(e1X, e1Y);
            }
            if (bulletX[x] >= e2X && bulletX[x] <= e2X + 10 && bulletY[x] == e2Y)
            {
                makeBulletInactive(x);
                addScore();
                eraseEnemy(e1X, e1Y);
            }
            if (bulletX[x] >= e3X && bulletX[x] <= e3X + 10 && bulletY[x] == e3Y)
            {
                makeBulletInactive(x);
                addScore();
                eraseEnemy(e1X, e1Y);
            }
        }
    }
}

void printBullet(int fX, int fY)
{
    gotoxy(fX, fY);
    cout << "o";
}

void eraseBullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}

void makeBulletInactive(int index)
{
    isBulletActive[index] = false;
}

void addScore()
{
    score += 10;
}

void displayScore()
{
    gotoxy(5, 29);
    cout << "Score: " << score << "   ";
}

void gameOver()
{
    system("cls");
    cout << "######################################################################################" << endl;
    cout << "##                                                                                  ##" << endl;
    cout << "##             #########      #      ##     ##   ######                             ##" << endl;
    cout << "##            ##             # #     # #   # #   #                                  ##" << endl;
    cout << "##            ##            #   #    #  # #  #   #####                              ##" << endl;
    cout << "##            ##   #####   #######   #   #   #   #                                  ##" << endl;
    cout << "##            ##     ###  #       #  #       #   #                                  ##" << endl;
    cout << "##             ######### #         # #       #   ######                             ##" << endl;
    cout << "##                                                                                  ##" << endl;
    cout << "##                                                                                  ##" << endl;
    cout << "##                                                                                  ##" << endl;
    cout << "##                                                                                  ##" << endl;
    cout << "##           ########   #           #  #######  ######                              ##" << endl;
    cout << "##          #        #   #         #   #        #     #                             ##" << endl;
    cout << "##          #        #    #       #    #        #     #                             ##" << endl;
    cout << "##          #        #     #     #     #####    ######                              ##" << endl;
    cout << "##          #        #      #   #      #        ##                                  ##" << endl;
    cout << "##          #        #       # #       #        #  #                                ##" << endl;
    cout << "##           ########         #        #######  #    #                              ##" << endl;
    cout << "##                                                                                  ##" << endl;
    cout << "##                                                                                  ##" << endl;
    cout << "##                                                                                  ##" << endl;
    cout << "##                                                                                  ##" << endl;
    cout << "######################################################################################" << endl;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void enemyHealth()
{
    gotoxy(99, 28);
    e1Health = 50;
    gotoxy(99, 29);
    e2Health = 50;
    gotoxy(99, 30);
    e3Health = 50;
    if (isCollisionWithEnemy() == true)
    {

        e1Health = e1Health - 10;
        eraseEnemy(e1X, e1Y);
    }
    if (isCollisionWithEnemy() == true)
    {

        e2Health = e2Health - 10;
        eraseEnemy(e2X, e2Y);
    }
    if (isCollisionWithEnemy() == true)
    {

        e3Health = e3Health - 10;
        eraseEnemy(e3X, e3Y);
    }
}