#include <iostream>
#include <fstream>
using namespace std;

int countLines(string fileName);

main()
{
    string fileName = "Task1.txt";
    int result = countLines(fileName);

    if (result == -1) cout << "Error: Could not open the file." << endl;
    else cout << "The file contains " << result << " lines." << endl;


}

int countLines(string fileName) 
{
    ifstream file(fileName);
    if (!file) 
    {
        return -1;
    }
    int lines = 0;
    string line;
    while (getline(file, line)) lines++;
    return lines;
}