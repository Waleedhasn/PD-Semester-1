#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

// Maze
void printMaze();
void displayScore();
void gameOver();
void setColor(int color);
void about();
string menu();
string startMenu();
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
// Tank
void printTank();
void eraseTank();
void movePlayerUp();
void movePlayerDown();
void movePlayerLeft();
void movePlayerRight();
bool isCollisionWithEnemy();
// Enemy
void printEnemy(int x, int y);
void eraseEnemy(int x, int y);
void moveEnemyVertically();
void moveEnemyHorizontally();
void moveEnemyDiagonally();
void enemyHealth();

// Bullet
void generateBullet(int tankX, int tankY);
void moveBullet();
void printBullet(int x, int y);
void eraseBullet(int x, int y);
void makeBulletInactive(int index);
void bulletCollisionWithEnemy();
void enemyFireLogic();
void moveEnemyBullets();
void checkEnemyBulletCollision();

void addScore();

int bulletX[100];
int bulletY[100];
bool isBulletActive[100];
int bulletCount = 0;
const int mazeWidth = 140;
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
bool e1alive = true;
bool e2alive = true;
bool e3alive = true;
int enemyBulletX[3];
int enemyBulletY[3];
bool isEnemyBulletActive[3];
int enemyFireDelay[3] = {0};

main()
{
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(hOut, &cursorInfo);
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(hOut, &cursorInfo);
    while (true)
    {
        system("cls");
        menu();
        string option = startMenu();
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
            cout << e1Health;
            gotoxy(99, 29);
            e2Health = 50;
            gotoxy(99, 30);
            e3Health = 50;

            system("cls");
            printMaze();
            if (e1Health != 0)
            {
                printEnemy(e1X, e1Y);
            }
            if (e2Health != 0)
            {
                printEnemy(e2X, e2Y);
            }
            if (e3Health != 0)
            {
                printEnemy(e3X, e3Y);
            }
            printTank();

            while (true)
            {
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
                if (e1Health != 0)
                {
                    moveEnemyVertically();
                }
                if (e2Health != 0)
                {
                    moveEnemyHorizontally();
                }
                if (e3Health != 0)
                {
                    moveEnemyDiagonally();
                }

                moveBullet();
                bulletCollisionWithEnemy();

                enemyFireLogic();

                moveEnemyBullets();

                checkEnemyBulletCollision();
                enemyHealth();

                if (isCollisionWithEnemy())
                {
                    playerHealth -= 10;
                    gotoxy(5, 28);
                    cout << "Player Health: " << playerHealth << "   ";
                }

                if (playerHealth == 0)
                {
                    system("cls");
                    gotoxy(40, 15);
                    gameOver();
                    system("pause");
                    playerHealth = 100;
                    e1Health = 50, e2Health = 50, e3Health = 50;
                    score = 0;
                    pX = 7, pY = 5;
                    break;
                }
                if (e1Health == 0 && e2Health == 0 && e3Health == 0)
                {
                    system("cls");
                    gameOver();
                    system("pause");
                    playerHealth = 100;
                    score = 0;
                    pX = 7, pY = 5;
                    e1Health = 50, e2Health = 50, e3Health = 50;
                    e1X = 120, e1Y = 10;
                    e2X = 70, e2Y = 5;
                    e3X = 50, e3Y = 15;

                    break;
                }

                displayScore();

                Sleep(100);
            }
        }
        else if (option == "2")
        {
            about();
            system("cls");
        }
        else if (option == "3")
        {
            gotoxy(65, 14);
            cout << "\e[1;31m Exiting game. Goodbye!\e[0m" << endl;
            system("cls");
            break;
        }
        else
        {
            gotoxy(20, 35);
            cout << "\e[1;33m Invalid option. Please try again. \e[0m";
            Sleep(1000);
        }
    }
}

string menu()
{
    system("cls");
    // setColor(12);
    cout << "\e[3;35m";
    gotoxy(2, 8);
    cout << "" << endl;
    cout << "                          /$$$$$$$$  /$$$$$$  /$$   /$$ /$$   /$$                           " << endl;
    cout << "                         |__  $$__/ /$$__  $$| $$$ | $$| $$  /$$/                           " << endl;
    cout << "                            | $$   | $$  \\ $$| $$$$| $$| $$ /$$/                           " << endl;
    cout << "                            | $$   | $$$$$$$$| $$ $$ $$| $$$$$/                              " << endl;
    cout << "                            | $$   | $$__  $$| $$  $$$$| $$  $$                              " << endl;
    cout << "                            | $$   | $$  | $$| $$\\  $$$| $$\\  $$                           " << endl;
    cout << "                            | $$   | $$  | $$| $$ \\  $$| $$ \\  $$                          " << endl;
    cout << "                            |__/   |__/  |__/|__/  \\__/|__/  \\__/                          " << endl;
    cout << "                                                                                             " << endl;
    cout << "                                                                                             " << endl;
    cout << " \e[0;32m                                                           " << endl;
    cout << "                                /$$$$$$$   /$$$$$$  /$$$$$$$$ /$$$$$$$$ /$$       /$$$$$$$$  " << endl;
    cout << "                               | $$__  $$ /$$__  $$|__  $$__/|__  $$__/| $$      | $$_____/  " << endl;
    cout << "                               | $$  \\ $$| $$  \\ $$   | $$      | $$   | $$      | $$      " << endl;
    cout << "                               | $$$$$$$ | $$$$$$$$   | $$      | $$   | $$      | $$$$$     " << endl;
    cout << "                               | $$__  $$| $$__  $$   | $$      | $$   | $$      | $$__/     " << endl;
    cout << "                               | $$  \\ $$| $$  | $$   | $$      | $$   | $$      | $$       " << endl;
    cout << "                               | $$$$$$$/| $$  | $$   | $$      | $$   | $$$$$$$$| $$$$$$$$  " << endl;
    cout << "                               |_______/ |__/  |__/   |__/      |__/   |________/|________/ \e[0m " << endl;
}
string startMenu()
{
    string option;
    gotoxy(120, 12);
    cout << "1) \e[1;33m START \e[0m" << endl;
    gotoxy(120, 16);
    cout << "2) \e[1;33m About \e[0m" << endl;
    gotoxy(120, 20);
    cout << "3) \e[1;33m EXIT \e[0m" << endl;
    gotoxy(120, 25);
    cout << "\e[0;32m Enter Your Option: \e[0m ";
    getline(cin, option);
    return option;
}
void printMaze()
{
    system("cls");
    setColor(9);
    cout << "#################################################################################################################################################################################" << endl;
    cout << "#                                                                                                                                            #     Instructions:                #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                                                                                                                            # 1.Only hit the head of the enemy #" << endl;
    cout << "#                                                                                                                                            #   to eliminate it.               #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                                                                                                                            # 2. Touch the nozzle of the tank  #" << endl;
    cout << "#                                                                                                                                            #    on bonus bill '$'             #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                       $                                                                                                    #                                  #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "##############################################################################################################################################                                  #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#                                                                                                                                            #                                  #" << endl;
    cout << "#################################################################################################################################################################################" << endl;

    gotoxy(5, 28);
    cout << "Player Health: " << playerHealth;
    gotoxy(5, 29);
    cout << "Score: " << score;
}

void printTank()
{

    cout << "";
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
    if (getCharAtxy(pX + 29, pY) == '$' || getCharAtxy(pX + 26, pY + 1) == '$' || getCharAtxy(pX + 27, pY + 2) == '$' || getCharAtxy(pX + 26, pY + 3) == '$')
    {
        eraseTank();
        addScore();
        playerHealth += 5;
        pX = pX + 1;
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
    cout << "                     ";
    gotoxy(x, y + 1);
    cout << "                     ";
    gotoxy(x, y + 2);
    cout << "                     ";
    gotoxy(x, y + 3);
    cout << "                     ";
}

void moveEnemyVertically()
{
    if (e1Health >= 0)
    {
        eraseEnemy(e1X, e1Y);
        e1Y += e1Direc;
        if (e1Y >= 20 || e1Y <= 1)
            e1Direc *= -1;
        printEnemy(e1X, e1Y);
    }
}
void moveEnemyHorizontally()
{
    if (e2Health >= 0)
    {
        eraseEnemy(e2X, e2Y);
        e2X += e2Direc;
        if (e2X >= 110 || e2X <= 70)
            e2Direc *= -1;
        printEnemy(e2X, e2Y);
    }
}
void moveEnemyDiagonally()
{
    if (e2Health >= 0)
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
}
void generateBullet(int tankX, int tankY)
{
    bulletX[bulletCount] = tankX + 27;
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
            if (bulletX[x] >= mazeWidth)
            {
                makeBulletInactive(x);
            }
        }
    }
}
bool isCollisionWithEnemy()
{

    if (pX >= e1X && pX <= e1X + 10 && pY == e1Y && e1alive)
    {
        return true;
    }
    if (pX >= e2X && pX <= e2X + 10 && pY == e2Y && e2alive)
    {
        return true;
    }
    if (pX >= e3X && pX <= e3X + 10 && pY == e3Y && e3alive)
    {
        return true;
    }
    return false;
}
void enemyHealth()
{

    gotoxy(99, 28);
    cout << "Enemy 1 Health: " << max(e1Health, 0) << "  ";
    gotoxy(99, 29);
    cout << "Enemy 2 Health: " << max(e2Health, 0) << "  ";
    gotoxy(99, 30);
    cout << "Enemy 3 Health: " << max(e3Health, 0) << "  ";

    if (e1Health == 0)
    {
        eraseEnemy(e1X, e1Y);
    }

    if (e2Health == 0)
    {
        eraseEnemy(e2X, e2Y);
    }

    if (e3Health == 0)
    {
        eraseEnemy(e3X, e3Y);
    }
}
void bulletCollisionWithEnemy()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (isBulletActive[x])
        {
            // Check collision with Enemy 1
            if (bulletX[x] >= e1X && bulletX[x] <= e1X + 10 && bulletY[x] >= e1Y && bulletY[x] <= e1Y + 3)
            {
                makeBulletInactive(x);
                if (e1Health > 0)
                    e1Health -= 10;
                addScore();
                if (e1Health <= 0)
                {
                    makeBulletInactive(x);
                    e1alive = false;
                    eraseEnemy(e1X, e1Y);
                }
            }

            // Check collision with Enemy 2
            if (bulletX[x] >= e2X && bulletX[x] <= e2X + 10 && bulletY[x] >= e2Y && bulletY[x] <= e2Y + 3)
            {
                makeBulletInactive(x);
                if (e2Health > 0)
                    e2Health -= 10;
                addScore();
                if (e2Health <= 0)
                {
                    makeBulletInactive(x);
                    e2alive = false;
                    eraseEnemy(e2X, e2Y);
                }
            }

            // Check collision with Enemy 3
            if (bulletX[x] >= e3X && bulletX[x] <= e3X + 10 && bulletY[x] >= e3Y && bulletY[x] <= e3Y + 3)
            {
                makeBulletInactive(x);
                if (e3Health > 0)
                    e3Health -= 10;
                addScore();
                if (e3Health <= 0)
                {
                    makeBulletInactive(x);
                    e3alive = false;
                    eraseEnemy(e3X, e3Y);
                }
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
    gotoxy(2, 5);
    cout << "  \e[1;95m         ++--       ::::::::      :::     ::::    ::::  ::::::::::                     " << endl;
    cout << "                     :+:    :+:   :+: :+:   +:+:+: :+:+:+ :+:                            " << endl;
    cout << "                     +:+         +:+   +:+  +:+ +:+:+ +:+ +:+                            " << endl;
    cout << "                     :#:        +#++:++#++: +#+  +:+  +#+ +#++:++#                       " << endl;
    cout << "                     +#+   +#+# +#+     +#+ +#+       +#+ +#+                            " << endl;
    cout << "                     #+#    #+# #+#     #+# #+#       #+# #+#                            " << endl;
    cout << "                      ########  ###     ### ###       ### ##########                     " << endl;
    cout << endl
         << endl;
    cout << "                                              ::::::::  :::     ::: :::::::::: ::::::::: " << endl;
    cout << "                                             :+:    :+: :+:     :+: :+:        :+:    :+:" << endl;
    cout << "                                             +:+    +:+ +:+     +:+ +:+        +:+    +:+" << endl;
    cout << "                                             +#+    +:+ +#+     +:+ +#++:++#   +#++:++#: " << endl;
    cout << "                                             +#+    +#+  +#+   +#+  +#+        +#+    +#+" << endl;
    cout << "                                             #+#    #+#   #+#+#+#   #+#        #+#    #+#" << endl;
    cout << "                                              ########      ###     ########## ###    ###" << endl;
    system("pause");
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

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufsize;
    coordBufsize.X = 1;
    coordBufsize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufsize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void generateEnemyBullet(int enemyIndex, int enemyX, int enemyY)
{
    if (!isEnemyBulletActive[enemyIndex])
    {
        enemyBulletX[enemyIndex] = enemyX - 1;
        enemyBulletY[enemyIndex] = enemyY + 1;
        isEnemyBulletActive[enemyIndex] = true;
    }
}

void moveEnemyBullets()
{

    for (int i = 0; i < 3; i++)
    {
        if (isEnemyBulletActive[i])
        {

            eraseBullet(enemyBulletX[i], enemyBulletY[i]);
            enemyBulletX[i]--;
            if (enemyBulletX[i] > 2)
            {
                printBullet(enemyBulletX[i], enemyBulletY[i]);
            }
            else
            {
                isEnemyBulletActive[i] = false;
            }
        }
    }
}

void checkEnemyBulletCollision()
{
    for (int i = 0; i < 3; i++)
    {
        if (isEnemyBulletActive[i] &&
            enemyBulletX[i] >= pX && enemyBulletX[i] <= pX + 27 &&
            enemyBulletY[i] >= pY && enemyBulletY[i] <= pY + 3)
        {
            isEnemyBulletActive[i] = false;
            playerHealth -= 10;
            gotoxy(5, 28);
            cout << "Player Health: " << playerHealth << "   ";
            if (playerHealth <= 0)
            {
                gameOver();
                break;
            }
        }
    }
}
void enemyFireLogic()
{
    for (int i = 0; i < 3; i++)
    {
        if (enemyFireDelay[i] >= 50)
        {
            if (i == 0 && e1alive)
                generateEnemyBullet(i, e1X, e1Y);
            if (i == 1 && e2alive)
                generateEnemyBullet(i, e2X, e2Y);
            if (i == 2 && e3alive)
                generateEnemyBullet(i, e3X, e3Y);
            enemyFireDelay[i] = 0;
        }
        else
        {
            enemyFireDelay[i]++;
        }

        if (e1Health <= 0)
        {
            eraseBullet(enemyBulletX[i], enemyBulletY[i]);
        }
        if (e2Health <= 0)
        {
            eraseBullet(enemyBulletX[i], enemyBulletY[i]);
        }
        if (e3Health <= 0)
        {
            eraseBullet(enemyBulletX[i], enemyBulletY[i]);
        }
    }
}

void about()
{
    system("cls");
    cout << "###############################################################################################################" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#   ________  _____    _     __  __    __        ______     _____    ________  ________  __        ________   #" << endl;
    cout << "# /$$$$$$$$  /$$$$$$  /$$   /$$ /$$   /$$       /$$$$$$$   /$$$$$$  /$$$$$$$$ /$$$$$$$$ /$$       /$$$$$$$$   #" << endl;
    cout << "#|__  $$__/ /$$__  $$| $$$ | $$| $$  /$$/       | $$__  $$ /$$__  $$|__  $$__/|__  $$__/| $$      | $$_____/  #" << endl;
    cout << "#   | $$   | $$  \\ $$| $$$$| $$| $$ /$$/        | $$  \\ $$| $$  \\ $$   | $$      | $$   | $$      | $$     #" << endl;
    cout << "#   | $$   | $$$$$$$$| $$ $$ $$| $$$$$/         | $$$$$$$ | $$$$$$$$   | $$      | $$   | $$      | $$$$$     #" << endl;
    cout << "#   | $$   | $$__  $$| $$  $$$$| $$  $$         | $$__  $$| $$__  $$   | $$      | $$   | $$      | $$__/     # " << endl;
    cout << "#   | $$   | $$  | $$| $$\\  $$$| $$\\  $$        | $$  \\ $$| $$  | $$   | $$      | $$   | $$      | $$     #" << endl;
    cout << "#   | $$   | $$  | $$| $$ \\  $$| $$ \\  $$       | $$$$$$$/| $$  | $$   | $$      | $$   | $$$$$$$$| $$$$$$$$#" << endl;
    cout << "#   |__/   |__/  |__/|__/  \\__/|__/  \\__/       |_______/ |__/  |__/   |__/      |__/   |________/|________/#" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "#                                                                                                             #" << endl;
    cout << "###############################################################################################################" << endl;
    system("pause");
}