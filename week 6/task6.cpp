#include <iostream>
using namespace std;
void calculateHotelPrice(string month,int stays);
int main()
{
    string month;
    int stays;
    

    cout << "Enter the month (May,June,July,August,September,October): ";
    cin >> month;
    cout << "Enter the number of days: ";
    cin >> stays;

    calculateHotelPrice(month, stays);

  
}
  void calculateHotelPrice(string month,int stays)
 {
    float studioPrice,apartmentPrice;
 if (month == "May" || month == "October")
    {
        studioPrice = 50 * stays;
        apartmentPrice = 65 * stays;
        if (stays > 14)
        {
            studioPrice =studioPrice+(studioPrice*0.30);
            apartmentPrice = apartmentPrice+(apartmentPrice*0.10);
          
        }
        if (stays > 7)
        {
            studioPrice =studioPrice+(studioPrice*0.05);
    
        }
    }  
       if (month == "June" || month == "September")
    {
        studioPrice = 75.20 * stays;
        apartmentPrice = 68.70 * stays;
        if (stays > 14)
        {
            studioPrice  =studioPrice+(studioPrice*0.20);
            apartmentPrice = apartmentPrice+(apartmentPrice*0.10);
          
        }
    }
      if (month == "July" || month == "August")
    {
        studioPrice = 76 * stays;
        apartmentPrice = 77 * stays;

    }

    if (stays > 14)
    {
        apartmentPrice = apartmentPrice+(apartmentPrice*0.10);
   
    }
     cout << "Apartment: " << apartmentPrice << "$." << endl;
    cout << "Studio: " << studioPrice << "$." << endl;
    
}