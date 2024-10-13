#include <iostream>
using namespace std;
int greatestNumber(int n1, int n2, int n3);
main()
{
    int n1, n2, n3;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << "Enter the third number: ";
    cin >> n3;
    cout << "the greatest number among " <<n1<<", "<<n2<<" and "<<n3<<" is "<<greatestNumber(n1,n2,n3);
}
int greatestNumber(int n1, int n2, int n3)
{
    if(n1>n2 && n1>n3)
    {
        return n1;
    }
    if(n2>n1 && n2>n3)
    {
        return n2;
    }
    if (n3>n2 && n3>n2)
    {
        return n3;
    }
}