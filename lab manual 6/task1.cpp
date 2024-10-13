#include <iostream>
using namespace std;
void result(int n1, int n2);
main()
{
    int n1,n2;
    cout << "Enter the first number:";
    cin >> n1;
    cout << "Enter the second number:";
    cin >> n2;
    result(n1,n2);
}
void result(int n1, int n2)
{
    if(n1>n2)
    {
      cout <<  " true " ;
      
    }
    else
    {
       cout << "false";
        
    }
}