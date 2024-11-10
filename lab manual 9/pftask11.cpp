#include <iostream>
using namespace std;
void removeVowel(string);
bool isconsonant(char);
main()
{
    string sentence;
    cout << "Enter a string  ";
    getline(cin,sentence);
    removeVowel(sentence);
}
void removeVowel(string sentence)
{
    char letter;
    for(int x=0 ; sentence[x]!='\0' ; x=x+1)
    {
        letter=sentence[x];
        if(isconsonant(letter))
        {
            cout <<letter;
        }
    }
}
bool isconsonant(char letter)
{
    bool result=true;
    if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u')
    {
        result=false;
    }
    return result;
}