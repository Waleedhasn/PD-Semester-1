#include<iostream>
using namespace std;
int totalDigits(int);
main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"Total number of digits: "<<totalDigits(num);

}
int totalDigits(int num)
{
    int digit=1;
    while(num>=10)
    {
        num=num/10;
        digit=digit+1;
    }
    return digit;
}
