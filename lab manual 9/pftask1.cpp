#include <iostream>
using namespace std;
void checkPosition(char word[],int length);
main()
{
    char word[100];
    cout <<"Enter word: ";
    cin >> word;
    int length = 0;
    while (word[length] != '\0')
    {
        length=length+1;
    }

 checkPosition(word, length);

}
void checkPosition(char word[],int length)
{
    for(int i=0; i<length;i++)
        {
            cout << word[i]<<" found at position " << i <<endl;

        }
}

