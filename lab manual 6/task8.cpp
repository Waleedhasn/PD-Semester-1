#include <iostream>
using namespace std;
float discount(string day, string month,float amount);
main()
{
    string day, month;
    float amount;
    cout << "Enter the day of purchase:";
    cin >> day;
    cout << "Enter the month of purchase:";
    cin >> month;
    cout << "Enter the total amount:$";
    cin >> amount;
    cout <<"Payable amount after discount:$"<< discount(day, month, amount);
}
float discount(string day, string month,float amount)
{       float payable=amount;
    if( day=="sunday"&& month=="october" || month=="march" || month=="august")
    {
        payable=amount-(amount*0.1);
        return payable;
    }
    else if(day=="monday" && month=="november" || month=="december")
    {
        payable=amount-(amount*0.05);
        return payable;
    }
    else
    {
        return payable;
    }
}