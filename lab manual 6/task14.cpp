#include<iostream>
using namespace std;
string calculateCost(float,string,int);
main()
{
    string category;
    float budget;
    int people;
    string note;

    cout<<"Enter the budget: ";
    cin>>budget;

    cout<<"Enter the category (VIP/Normal): ";
    cin>>category;

    cout<<"Enter the number of people in group: ";
    cin>>people;

   
    cout<<" "<<calculateCost( budget, category, people);

}

string calculateCost(float budget,string category,int people)
{
    float transport_percentage;
    float money_left;
    float total_ticket_cost;

    if (1 <= people <= 4)
    {
        transport_percentage = 0.75;
    }
    if (5 <= people <= 9)
    {
        transport_percentage = 0.60;
    }
    if (10 <= people <= 24)
    {
        transport_percentage = 0.50;
    }
    if (25 <= people <= 49)
    {
        transport_percentage = 0.40;
    }
    else
    {
        transport_percentage = 0.25;
    }

    money_left=budget*(1-transport_percentage);

    if (category == "VIP")
    {
        total_ticket_cost = 499.99 * people;
    }
    if (category == "Normal")
    {
        total_ticket_cost = 249.99 * people;
    }

    if(money_left>=total_ticket_cost)
    {
        cout<<"Yes! you have "<<money_left<<" leva left.";
    }
    else
    {
        cout<< "No you dont have enough balance you still need "<<money_left<<" liva.";

    }


}