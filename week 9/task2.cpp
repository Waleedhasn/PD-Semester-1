#include <iostream>
using namespace std;
main()
{
    string movie[5] = {"Gladiator","StarWars","Terminator","TakingLives","TombRider"};
    float price = 500;
    string movieName;
    float total;
    cout << "Enter movie name : ";
    cin >> movieName;

    for(int i=0; i<5; i=i+2)
    {
        if(movieName==movie[i])
        {
            total=price-(price*0.05);
        }
        else
        {
            total=price-(price*0.1);
        }
    }
    cout << "Total:" << total;
}