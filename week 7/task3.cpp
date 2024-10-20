#include <iostream>
using namespace std;
void sequence(int number);
main()
{
    int number;
    cout <<"Enter a number to amplify: ";
    cin >> number;
    sequence(number);

}
void sequence(int number)
{
    for(int x = 1; x <= number; x=x+1)
    {
        if(x%4==0)
        {
           cout<< x*10 <<" ";
        }
        else 
        {
            cout<<x<<" ";
        }
    }
}