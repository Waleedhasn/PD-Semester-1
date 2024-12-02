#include<iostream>
using namespace std;
string fire(int rowChar,int col);

int main()
{
 char rowChar;
 int  col;

 cout<<"Enter the coordinates to fire torpedo (e.g A1,B3,E5): ";
 cin>>rowChar>>col;

 col=col-1;

 string result;
 result= fire(rowChar,col);
 cout<<" Result is: "<<result;

}

string fire(int rowChar,int col)
{
    char grid[5][5] = {
        {'.', '.', '.', '*', '*'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '.', '*', '*', '.'}
    };

    int row = rowChar - 'A';
    if (grid[row][col] == '.') 
    {
        return "splash";
    } 
    else if (grid[row][col] == '*') 
    {
        return "BOOM";
    }
    return "Invalid coordinate";    
} 
