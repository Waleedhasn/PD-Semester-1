#include <iostream>
using namespace std;
void time();
float serviceBill(char type, int minutes);
main()
{ 
   string serviceType;
   char type;
   int minutes;
  
   cout << "Enter the service code(R/r for regular and P/p for premium):";
   cin >> type;
   if(type=='P' || type=='p')
   {
     time();
   }
   cout << "Enter the number of minutes used: ";
   cin >> minutes;
   if(type=='P' || type=='p')
   {
    serviceType = "Premium";
   
   }
   if(type=='R' || type=='r')

   {
    serviceType="Regular";
   
   }
   cout << "Service type " << serviceType << endl;
   
   cout << "Total minutes used :" << minutes << endl;
   cout << "Amount Due: $"<< serviceBill(type, minutes);
}
float serviceBill(char type, int minutes)
{
    float amount;
    char t;
    if(type=='P' || type=='p')
    {
        
        amount=25;
        if(minutes>75)
        {
            amount=0.10*(minutes-75);
            amount=amount+25;
        }
         if(t=='N' || t=='n')
    {
        amount=amount;
        if(minutes>100)
        {
            amount=0.05*(minutes-100);
            amount =amount+25;
        }
    }
        return amount;
    }
    if(type=='R' || type=='r')
    {
        amount = 10;
        if(minutes>50)
        {
            amount=0.20*(minutes-50);
            amount=amount+10;
        }
        return amount;
    }
}
void time()
{
        char t;
        cout << "Enter time of the call(D/d for day and N/n fot night):";
        cin >> t;
}
