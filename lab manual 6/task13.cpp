#include<iostream>
using namespace std;
float lowestPrice(int,string);
main()
{
    int kilometers;
    string period;

    cout<<"Enter the number of kilometers: ";
    cin>>kilometers;

    cout<<"Enter the period of day (day/night): ";
    cin>>period;

    cout<<"Lowest price for "<<kilometers<<" kilometers : "<<lowestPrice( kilometers, period)<<" EUR";


}

float lowestPrice(int kilometers,string period)
{
    float total_price;
    if(kilometers<20)
    {
       if(period=="day") 
       {
        total_price=(kilometers*0.79)+0.70;
        return total_price;
       }
       else
       {
        total_price=(kilometers*0.90)+0.70;
        return total_price;
       }
    }
    if(kilometers>=20 && kilometers<=100)
    {
      total_price=kilometers*0.09;
      return total_price;
    }
    if(kilometers>=100)
    {
      total_price=kilometers*0.09;
      return total_price;
    }

}