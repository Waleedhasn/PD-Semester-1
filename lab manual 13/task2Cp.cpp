#include <iostream>
#include <fstream>
using namespace std;
int countCharacters(string fileName);


 main() 
{
    string fileName = "Task2.txt";
    int result = countCharacters(fileName);

    if (result == -1) cout << "Error: Could not open the file." << endl;
    else cout << "The file contains " << result << " characters." << endl;


}
int countCharacters(string fileName) 
{
    ifstream file(fileName);
    if (!file) return -1;

    int charCount = 0;
    char ch;
    while (file.get(ch)) charCount++;
    return charCount;
}