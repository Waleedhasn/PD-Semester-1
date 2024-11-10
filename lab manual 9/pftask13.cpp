#include<iostream>
using namespace std;
int count(string);
void jazzifyChords(string chords[] , int numchords);
main()
{
    int numchords;
    cout << "Enter the number of chords  ";
    cin >> numchords;
    string chords[numchords];
    cout << "Enter the chords one per line  " << endl;
    jazzifyChords(chords ,numchords);
}
void jazzifyChords(string chords[] , int numchords)
{
    int value;
    string word;
    for(int x=0 ; x<numchords ; x=x+1)
    {
        cin >> chords[x];
    }
    for(int x=0 ; x<numchords ; x=x+1)
    {
        word=chords[x];
        value=count(chords[x]);
        value--;
        if(word[value]!='7')
        {
            cout << word << "7 ,";
        }
        else
        {
            cout <<word << "  ,";
        }
    }
}
int count(string word)
{
        int coun=0;
        for(int x=0 ; word[x]!='\0' ; x=x+1)
        {
            coun=coun+1;
        }
        return coun;
}