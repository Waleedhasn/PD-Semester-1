#include <iostream>
using namespace std;
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity);
main()
{
    string fruit, dayOfWeek;
    double quantity;
    cout << "Enter fruit name : ";
    cin >> fruit;
    cout << "Enter the Day of week : ";
    cin >> dayOfWeek;
    cout << "Enter quantity : ";
    cin >> quantity;
    float price =calculateFruitPrice(fruit, dayOfWeek, quantity);
    if(price==1)
    {
        cout << "error";
    }
    else
    {
        cout << price;
    }
}
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
{
    double amount;
    if(fruit=="banana")
    {
        if(dayOfWeek=="sunday"|| dayOfWeek=="saturday")
        {
            amount=2.70;
            amount=amount*quantity;
            return amount;
        }
        else
        {
            amount=2.50;
            amount=amount*quantity;
            return amount;
        }
    }
       if(fruit=="apple")
    {
        if(dayOfWeek=="sunday"|| dayOfWeek=="saturday")
        {
            amount=1.25;
            amount=amount*quantity;
            return amount;
        }
        else
        {
            amount=1.20;
            amount=amount*quantity;
            return amount;
        }
    }
       if(fruit=="orange")
    {
        if(dayOfWeek=="sunday"|| dayOfWeek=="saturday")
        {
            amount=0.90;
            amount=amount*quantity;
            return amount;
        }
        else
        {
            amount=0.85;
            amount=amount*quantity;
            return amount;
        }
    }
       if(fruit=="grapefruit")
    {
        if(dayOfWeek=="sunday"|| dayOfWeek=="saturday")
        {
            amount=1.60;
            amount=amount*quantity;
            return amount;
        }
        else
        {
            amount=1.45;
            amount=amount*quantity;
            return amount;
        }
    }
       if(fruit=="kiwi")
    {
        if(dayOfWeek=="sunday"|| dayOfWeek=="saturday")
        {
            amount=3.00;
            amount=amount*quantity;
            return amount;
        }
        else
        {
            amount=2.70;
            amount=amount*quantity;
            return amount;
        }
    }
       if(fruit=="pineapple")
    {
        if(dayOfWeek=="sunday"|| dayOfWeek=="saturday")
        {
            amount=5.60;
            amount=amount*quantity;
            return amount;
        }
        else
        {
            amount=5.50;
            amount=amount*quantity;
            return amount;
        }
    }
       if(fruit=="grapes")
    {
        if(dayOfWeek=="sunday"|| dayOfWeek=="saturday")
        {
            amount=4.20;
            amount=amount*quantity;
            return amount;
        }
        else
        {
            amount=3.85;
            amount=amount*quantity;
            return amount;
        }
    }
    else
    {
        return 1;
    }
}