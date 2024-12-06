#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void getBirthdayCake(const char *name, int age, const char *outputFileName)
{

    char borderChar = (age % 2 == 0) ? '#' : '*';

    char birthdayMessage[50];
    snprintf(birthdayMessage, sizeof(birthdayMessage), "%d HB %s! %d", age, name, age);

    char border[16];
    for (int i = 0; i < 15; ++i)
    {
        border[i] = borderChar;
    }
    border[15] = '\0';

    ofstream outFile(outputFileName);
    if (!outFile)
    {
        cerr << "Error opening output file!" << endl;
        return;
    }

    outFile << border << endl;
    outFile << borderChar << " " << birthdayMessage << " " << borderChar << endl;
    outFile << border << endl;

    outFile.close();
    cout << "Birthday cake written to " << outputFileName << endl;
}

int main()
{
    char name[50];
    int age;

    cout << "Enter name: ";
    cin.getline(name, 50);

    cout << "Enter age: ";
    cin >> age;

    getBirthdayCake(name, age, "output.txt");

    return 0;
}
