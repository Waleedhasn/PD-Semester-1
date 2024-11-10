#include <iostream>
using namespace std;
void input();
bool isExsist( int digit, int y);
int number;
int num[100];
void check();
void display (int y);
main()
{
    cout << "Enter the number of elements  ";
    cin >> number;
    cout << "Enter " << number << " one per line" << endl;
    input();
}
void input()
{
    int digit;
    int y=1;
    cin >> num[0];
    for (int x = 1; x < number; x = x + 1)
    {
        cin >> digit;
        if(isExsist(digit ,y))
        {
            num[y]=digit;
            y=y+1;
        }
        else
        {
            cout << "ALREADY EXIST " << digit;
        }
    }
    display(y);
}
bool isExsist( int digit , int y)
{
    bool ans=true;
    for(int x=0 ; x<y ; x=x+1)
    {
        if(digit==num[x])
        {
            ans=false;
        }
    }
    return ans;
}
void display(int y)
{
    cout << endl;
    cout <<"unique characters are ";
    for(int x=0 ; x<y ; x=x+1)
    {
        cout << num[x] << "\t";
    }
}
