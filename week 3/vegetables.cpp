#include <iostream>
using namespace std;
main()
{
cout << "Enter vegetable price per kilogram(in coins): ";
float veg_price;
cin >> veg_price;
cout << "Enter fruit price per kilogram(in coins): ";
float fruit_price;
cin >> fruit_price;
cout << "Enter total kilograms of vegetables:";
int veg_kilo;
cin >> veg_kilo;
cout << "Enter total kilograms of fruits: ";
int fruit_kilo;
cin >> fruit_kilo;
float total;
total=(veg_price*veg_kilo)+(fruit_price*fruit_kilo);
float total_rs;
total_rs=total/1.94;
cout << "Total earnings in Rupees(Rs):" << total_rs;
}