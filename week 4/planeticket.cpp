#include <iostream>
using namespace std;
void countrydiscount(string name,float finalprice,float price);
main()
{
while(true)
{
 string name;
 cout << "Enter the country name:";
 cin >> name;
 float price;
 cout << "Enter the ticket price in Dollars:$";
 cin >> price;
 countrydiscount(name,price ,price);
 if(name=="1")
{end;}
}
}
void countrydiscount(string name,float finalprice,float price)
{
 if(name=="Pakistan")
 {
 finalprice=price-(price*0.05);
 cout << "Final Ticket price after discount:$" << finalprice << endl;
 }
 if(name=="Ireland")
 {
 finalprice=price-(price*0.10);
 cout << "Final Ticket price after discount:$" << finalprice << endl;
 }
 if(name=="India")
 {
 finalprice=price-(price*0.20);
 cout << "Final Ticket price after discount:$" << finalprice << endl;
 }
 if(name=="England")
 {
 finalprice=price-(price*0.30);
 cout << "Final Ticket price after discount:$" << finalprice << endl;
 }
 if(name=="Canada")
 {
 finalprice=price-(price*0.45);
 cout << "Final Ticket price after discount:$" << finalprice << endl;
 }
}
 