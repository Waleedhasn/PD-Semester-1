#include <iostream>
using namespace std;
main()
{
    string fruit[4] = {"peach","apple","guava","watermelon"};
    int price[4] = {60,70,40,30};
    string fruitName;
    int quantity, total;
    cout << "Enter the name of fruit(peach,apple, guava,watermelon): ";
    cin >> fruitName;
    cout << "Enter the quatity(kg): ";
    cin >> quantity;
    for(int i=0 ; i<1 ; i++)
    {
        if(fruitName==fruit[i])
        {
            total=price[i]*quantity;
        }
        if(fruitName==fruit[i+1])
        {
            total=price[i+1]*quantity;
        }
        if(fruitName==fruit[i+2])
        {
            total=price[i+2] * quantity;
        }
        if(fruitName==fruit[i+3])
        {
            total=price[i+3]*quantity;
        }
    }
    cout <<"Total price :" << total;

}