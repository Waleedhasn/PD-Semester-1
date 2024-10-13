#include <iostream>
using namespace std;
string decideActivity(string temp, string humid);
main()
{
    string temp,humid;
    cout << "Enter temperature (warm/cold):";
    cin >> temp;
    cout << "Enter humidity (dry/humid): ";
    cin >> humid;
    cout << decideActivity(temp,humid);
}
string decideActivity(string temp, string humid)
{
    if(temp=="warm" && humid =="dry")
    {
        return "Play tennis.";
    }
    if(temp=="warm" && humid =="humid")
    {
        return "Swim";
    }
    if(temp=="cold" && humid =="dry")
    {
        return "Play Basketball";
    }
    if(temp=="cold" && humid =="humid")
    {
        return "Watch TV";
    }
}