#include <iostream>
#include <fstream>
using namespace std;

int countLines(const string fileName);
 main()
 {
    int result = countLines("Task6.txt");
    if (result != -1) {
        cout << "Number of lines not starting with the specified character: " << result << endl;
    }
}
int countLines(const string fileName)
 {
    ifstream inFile(fileName);
    if (!inFile) {
        cout << "Error opening file!" << endl;
        return -1;
    }

    char firstChar;
    inFile >> firstChar; 
    inFile.ignore();  
    if (firstChar >= 'A' && firstChar <= 'Z')
     {
        firstChar += ('a' - 'A');
    }

    string line;
    int count = 0;

    while (getline(inFile, line)) 
    {
        if (!line.empty()) {
            char firstLineChar = line[0];
            if (firstLineChar >= 'A' && firstLineChar <= 'Z') {
                firstLineChar += ('a' - 'A');
            }

            if (firstLineChar != firstChar) {
                count++;
            }
        }
    }

    inFile.close();
    return count;
}