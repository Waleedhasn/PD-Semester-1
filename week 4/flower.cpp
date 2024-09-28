#include <iostream>
using namespace std;
void flowerShop(int redrose, int whiterose, int tulip); 
main() 
{
    int redrose, whiterose, tulip;

    cout << "Enter the number of red roses: ";
    cin >> redrose;
    cout << "Enter the number of white roses: ";
    cin >> whiterose;
    cout << "Enter the number of tulips: ";
    cin >> tulip;
    flowerShop(redrose, whiterose, tulip);
}
void flowerShop(int redrose, int whiterose, int tulip)
{
  float pricex,pricey,pricez,total;
 pricex=redrose*2.00;
 pricey=whiterose*4.10;
 pricez=tulip*2.50;
 total=pricex+pricey+pricez;
 cout << "Original price:$" << total <<endl;
 if(total<200)
 {
 cout << "No discount.";
 } 
 if(total>=200)
 {
 total=total-(total*0.2);
 cout << "Price after discount:$" << total;
 }
}