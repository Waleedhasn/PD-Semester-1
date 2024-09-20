#include <iostream>
using namespace std;
main()
{
cout << "Enter the movie name:";
string name;
cin >> name;
cout << "Enter the adult ticket prize: $";
int ad_prize;
cin >> ad_prize;
cout << "Enter the child ticket prize: $";
int ch_prize;
cin >> ch_prize;
cout <<"Enter the number of adult tickets sold: ";
int ad_sold;
cin >> ad_sold;
cout << "Enter the number of child tickets sold: ";
int ch_sold;
cin >> ch_sold;
cout << "Enter the percentage of amount to be donated to the charity: ";
int charity;
cin >> charity;
cout << "Movie: " << name <<endl;
int total_sales;
total_sales=(ad_prize*ad_sold)+(ch_prize*ch_sold);
cout << "Total amount generated from ticket sales: " << total_sales <<endl;
int donated;
donated=(0.1*total_sales);
cout << "Donation to charity (10%): " << donated <<endl;
int remain;
remain=total_sales-donated;
cout << "Remaining amount after charity:" << remain <<endl;
}
