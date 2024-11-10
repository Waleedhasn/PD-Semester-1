#include <iostream>
using namespace std;
void display(string);
main()
{
    string word;
    cout <<"Enter the argument  ";
    getline(cin,word);
    display(word);
}
void display(string word)
{
    word="something  " +word;
    cout << word;
}