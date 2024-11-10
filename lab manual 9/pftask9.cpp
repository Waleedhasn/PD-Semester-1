#include <iostream>
using namespace std;
bool canPayWithChange(double change[], double totalDue);
main()
{
    double change[4];
    double totalDue;
    bool result;
    cout <<"Enter Quarter  ";
    cin >> change[0];
    cout <<"Enter dimes  ";
    cin >> change[1];
    cout <<"Enter nickels  ";
    cin >> change[2];
    cout <<"Enter pennies  ";
    cin >> change[3];
    cout << "Enter the total amount due == $";
    cin >>totalDue;
    result=canPayWithChange(change, totalDue);
    cout << result;
}
bool canPayWithChange(double change[], double totalDue)
{
    double amount;
    bool result=false;
    change[0]=change[0]/4;
    change[1]=change[1]/10;
    change[2]=change[2]/20;
    change[3]=change[3]/100;
    amount=change[0]+change[1]+change[2]+ change[3];
    if(amount>=totalDue)
    {
        result=true;
    }
    return result;
}