#include<iostream>
using namespace std;
void plant(string seed, int water, int fert, int temp);
main()
{
    string seed;
    int water, fert, temp;
    cout << "Enter type of flower: ";
    cin >> seed;
    cout << "Enter unit of water: ";
    cin >> water;
    cout << "Enter unit of fertilizer: ";
    cin >> fert;
    cout << "Enter temprature: ";
    cin >> temp;
    plant(seed, water, fert, temp);
}
void plant(string seed, int water, int fert, int temp)
{
    if(temp>=20 && temp<=30)
    {
        for(int r=1; r<=water; r++)
        {
            for(int i=1; i<=water; i++)
            {
                cout << "-";
            }
            for(int f=1; f<=fert; f++)
            {
                cout << seed;
            }
        }
    }
    else
    {
        for(int r=1; r<=water; r++)
        {
            for(int r=1; r<=water; r++)
            {
                cout << "-";
            }
            if(r==water)
            {
                cout << seed;
            }
        }
        
    }
}