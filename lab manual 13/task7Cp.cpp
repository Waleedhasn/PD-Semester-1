#include <iostream>
#include <fstream>
using namespace std;

void displayWords(const string fileName);

main()
{
    displayWords("Task7.txt");

}
void displayWords(const string fileName)
 {
    ifstream inFile(fileName);
    if (!inFile) {
        cout << "Error opening file!" << endl;
        return;
    }

    string line;
    while (getline(inFile, line)) {
        string word;
        for (char ch : line) {
            if (isalpha(ch)) {
                word += ch;
            } else {
                if (word.length() < 4 && !word.empty()) {
                    cout << word << endl;
                }
                word.clear();
            }
        }
        if (word.length() < 4 && !word.empty()) {
            cout << word << endl;
        }
    }

    inFile.close();
}