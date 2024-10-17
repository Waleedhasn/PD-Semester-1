#include<iostream>
using namespace std;
int calculateMoney(int age, int price, int priceT);
main()
{
    int age, price, priceT ,result ;
    cout << "Enter Lilly`s age:  ";
    cin >> age;
    cout << "Enter the price of washing machine:   ";
    cin >> price;
    cout << " Enter the price of toy per unit :   ";
    cin >> priceT;
    result=calculateMoney( age, price, priceT);
    cout << result;
}
int calculateMoney(int age, int price, int priceT)
{
    int odd , even ,value=0 ,amount ,difference ,n=0;
    if(age%2==0)
    { 
       age=age/2;
       even=age;
       odd=age;
    }
    else if(age%2==1)
    {
        age=age/2;
        even=age;
        odd=age+1;
    }
    for(int i=1; i<=even ; i=i+1 )
    {
        n=n+10;
        value=value+n;
    }
    amount=(value-even)+(priceT*odd);
    if(amount>price)
    {
        cout << "YES! " <<endl;
        difference=amount-price;
    }
    if(amount<price)
    {
        cout << "NO! " <<endl;
        difference=price-amount+3;
    }
    return difference;
}