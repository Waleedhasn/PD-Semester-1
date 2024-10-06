#include <iostream>
#include <cmath>
using namespace std;
float taxCalculator(char type, float price);
main()
{
    char type;
    float price;
    cout << "Enter the vehicle type code(M, E, S, V,T):";
    cin >> type;
    cout << "Enter the price of the vehicle: $";
    cin >> price;
    taxCalculator(type, price);
    return 0;
}
float taxCalculator(char type,float price)
{
   
    if(type == 'M')
    {
        float finalPrice;
        float tax = 0.06;
        finalPrice=price+(price*tax);
        cout << "The final price of the vehicle of type "<< type << " after adding tax is $"<< finalPrice;
        return finalPrice;
    }
      if(type == 'E')
    {
        float finalPrice;
        float tax = 0.08;
        finalPrice=price+(price*tax);
        cout << "The final price of the vehicle of type "<< type << " after adding tax is $"<< finalPrice;
        return finalPrice;
    }
      if(type == 'S')
    {
        float finalPrice;
        float tax = 0.1;
        finalPrice=price+(price*tax);
        cout << "The final price of the vehicle of type "<< type << " after adding tax is $"<< finalPrice;
        return finalPrice;
    }
      if(type == 'V')
    {
        float finalPrice;
        float tax = 0.12;
        finalPrice=price+(price*tax);
        cout << "The final price of the vehicle of type "<< type << " after adding tax is $"<< finalPrice;
        return finalPrice;
    }
      if(type == 'T')
    {
        float finalPrice;
        float tax = 0.15;
        finalPrice=price+(price*tax);
        cout << "The final price of the vehicle of type "<< type << " after adding tax is $"<< finalPrice;
        return finalPrice;
    }
}