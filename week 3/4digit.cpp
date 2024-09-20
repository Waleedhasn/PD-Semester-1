#include <iostream>
using namespace std;
main()
{
cout << "Enter a 4-digit number:";
int number;
cin >> number;
int sum;
sum=(number%10)+(number/10%10)+(number/100%10)+(number/1000%10);
cout << "Sum of the individual digits:" << sum;
}