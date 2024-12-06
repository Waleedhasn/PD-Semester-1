#include <iostream>
#include <fstream>
using namespace std;

int calculateFrequency(string fileName);

 main()
  {
    string fileName = "Task3.txt";
    int result = calculateFrequency(fileName);

    if (result == -1) cout << "Error: Could not open the file." << endl;
    else cout << "Frequency: " << result << endl;
}
int calculateFrequency(string fileName) 
{
    ifstream file(fileName);
    if (!file) return -1;

    char targetChar, ch;
    file.get(targetChar);
    if (targetChar >= 'A' && targetChar <= 'Z') targetChar += 'a' - 'A';

    int frequency = 0;
    while (file.get(ch)) {
        if (ch >= 'A' && ch <= 'Z') ch += 'a' - 'A';
        if (ch == targetChar) frequency++;
    }

    return frequency;
}