#include <iostream>
using namespace std;
void add(int n1, int n2);
main()
{
 add(4,5);
}
void add(int n1,int n2)
{
int sum;
sum=n1+n2;
cout << "Sum is " <<sum;
}