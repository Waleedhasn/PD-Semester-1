#include <iostream>
using namespace std;
void reverse(char word[],int length);
main()
{
    char word[100];
    cout << "Enter a string: ";
    cin >> word;
    int length = 0;
    while (word[length] != '\0')
    {
        length = length +1;
    }
   
    reverse(word, length);   
}
void reverse(char word[],int length)
{
    for(int i =length-1 ; i>=0 ; i--)
    {
        cout<< word[i];
    }
}