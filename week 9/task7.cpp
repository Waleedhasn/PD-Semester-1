#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int countCommonCharacters(string s1, string s2);
int main() 
{
    string s1, s2;
    
    cout << "Enter the first string: ";
    cin >> s1;

    cout << "Enter the second string: ";
    cin >> s2;

    int commonCount = countCommonCharacters(s1, s2);

    cout << "Number of common characters: " << commonCount << endl;

    return 0;
}
int countCommonCharacters(string s1, string s2)
{
    unordered_map<char, int> charCount;
    int commonCount = 0;

    for (char c : s1)
    {
        charCount[c]++;
    }

    for (char c : s2)
    {
        if (charCount[c] > 0)
        {
            commonCount++;
            charCount[c]--;
        }
    }

    return commonCount;
}
