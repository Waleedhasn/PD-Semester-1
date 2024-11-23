#include <iostream>
#include <cstring>
using namespace std;
void reverseWords(char str[]);


int main() 
{
   
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);

    
    reverseWords(str);

    return 0;
}

void reverseWords(char str[]) 
{
    int n = strlen(str); 
    char words[100][100]; 
    int wordCount = 0;
    int wordIndex = 0;

   
    for (int i = 0; i <= n; i++) 
    {
        if (str[i] == ' ' || str[i] == '\0') 
        {
            words[wordCount][wordIndex] = '\0'; 
            wordCount++;  
            wordIndex = 0;  
        } 
        else 
        {
            words[wordCount][wordIndex++] = str[i]; 
        }

    }

    for (int i = wordCount - 1; i >= 0; i--) 
    {
        cout << words[i] << " ";
    }

    cout << endl;
    
}
