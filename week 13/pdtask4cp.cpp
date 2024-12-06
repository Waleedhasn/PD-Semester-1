#include <iostream>
#include <fstream>

using namespace std;

void findMissingLetters(const char *inputStr, const char *outputFileName)
{

    bool letterPresent[26] = {false};

    for (int i = 0; inputStr[i] != '\0'; ++i)
    {
        letterPresent[inputStr[i] - 'a'] = true;
    }

    char missingLetters[27];
    int missingIndex = 0;

    for (int i = 0; i < 26; ++i)
    {
        if (!letterPresent[i])
        {
            missingLetters[missingIndex++] = char(i + 'a');
        }
    }

    missingLetters[missingIndex] = '\0';

    ofstream outFile(outputFileName, ios::app);
    if (!outFile)
    {
        cerr << "Error opening file for writing!" << endl;
        return;
    }

    outFile << endl
            << missingLetters;
    outFile.close();

    cout << "Missing letters (if any) were appended to the file." << endl;
}

int main()
{
    char inputStr[27];

    cout << "Enter a string of lowercase letters (a-z): ";
    cin >> inputStr;

    findMissingLetters(inputStr, "alphabets.txt");

    return 0;
}
