#include <iostream>
#include <string>
using namespace std;
int countLetterInWord(const string& word, char letter);
int countLetterInArray(string words[], int size, char letter);

int main() 
{
    int n;
    
    cout << "Enter how many words you want to Enter: ";
    cin >> n;
    
    string words[n];
    
    for (int i = 0; i < n; ++i) 
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> words[i];
    }
    
    char letter;
    cout << "Enter the letter you want to count: ";
    cin >> letter;
    
    int letterCount = countLetterInArray(words, n, letter);
    
    cout << letter << " shows up " << letterCount << " times in the data." << endl;

}

int countLetterInWord(const string& word, char letter) 
{
    int count = 0;
    
    for (char ch : word) 
    {
        if (ch == letter) 
        {
            count++;
        }
    }
    return count;
}

int countLetterInArray(string words[], int size, char letter) 
{
    int totalCount = 0;

    for (int i = 0; i < size; ++i) 
    {
        totalCount += countLetterInWord(words[i], letter);
    }
    return totalCount;
}