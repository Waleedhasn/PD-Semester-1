#include <iostream>
using namespace std;
int n1 = 10; 
int n2 = 20;
int sum();
main()
{
    int x = n1;
    n1 = 100;
    x = 20;
    n2 = sum();
    cout << n1 << " " << n2;
}
int sum()
{
    n1 = 40;
    return n1+n2;
}