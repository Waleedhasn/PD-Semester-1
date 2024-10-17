#include<iostream>
using namespace std;
int calculatePrice(int money, int year);
main()
{
    int money,  year ;
    cout << "Enter Money:   ";
    cin >> money;
    cout << "Enter year:   ";
    cin >> year;
    calculatePrice(money,  year);
    
}
int calculatePrice(int money, int year)
{

    int even , odd ,amount1 ,amount2 , amount ,  n=19 , difference;
    year=year-1800;
    if(year%2==0)
    { 
       year=year/2;
       even=year+1;
       odd=year;
    }
    else if(year%2==1)
    {
        year=year/2;
        even=year+1;
        odd=year+1;
    }
    amount1=12000*even;
    for(int i=1 ; i<=odd ; i=i+1)
    {
        amount2=amount2+(12000+50*n);
        n=n+2;
    }
    amount=amount1+amount2;

    if(amount>money)
    {
        difference=amount-money;
        cout<<"He will need " << difference<<" dollars to survive.";
    }
    if(amount<money)
    {
        difference=money-amount; 
        cout<<"Yes! He will live a carefree life and will have "<< difference<<" dollars left";
  
    }
   
}