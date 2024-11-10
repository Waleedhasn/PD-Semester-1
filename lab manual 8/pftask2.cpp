#include<iostream>
using namespace std;
int calculateDamage(string , string , int , int);
main()
{
    int attackPower , opponentefense ,result;
    string yourType , opponentType;
    cout << "Enter your attack Type  ";
    cin >> yourType;
    cout << "Enter opponents attack type  ";
    cin >> opponentType;
    cout << "Enter your attackpower  " ;
    cin >>  attackPower;
    cout << "Enter opponents defense power ";
    cin >> opponentefense;
    result=calculateDamage(yourType , opponentType , attackPower , opponentefense );
    cout << result;
}
int calculateDamage(string a, string b, int x, int y)
{
    int damage;
    damage=50*(x/y);
    if(a=="fire" && b=="grass")
    {
        damage=damage*2;
    }
    else if(a=="fire" && b=="water")
    {
        damage=damage*0.5;
    }
    else if(a=="fire" && b=="electric")
    {
        damage=damage*1;
    }
    else if(a=="water" && b=="grass")
    {
        damage=damage*0.5;
    }
    else if(a=="water" && b=="grass")
    {
        damage=damage*0.5;
    }
    else if(a=="grass" && b=="electric")
    {
        damage=damage*0.5;
    }
    if(a=="grass"  && b=="fire")
    {
        damage=damage*0.5;
    }
    if(a=="water" && b=="fire")
    {
        damage=damage*2;
    }
    if(a=="grass" && b=="water")
    {
        damage=damage*2;
    }
    if(a=="electric" && b=="water")
    {
        damage=damage*2;
    }
    else if(a==b)
    {
        damage=damage*0.5;
    }
    return damage;
}