#include <iostream>
using namespace std;
void pinToDanceMoves(string pin);
int main() 
{
    string pin;
    cout << "Enter your 4-digit PIN: ";
    cin >> pin;

    pinToDanceMoves(pin);

    return 0;
}
void pinToDanceMoves(string pin) 
{
    string MOVES[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    int movesSize = 10;

    if (pin.length() != 4 || !isdigit(pin[0]) || !isdigit(pin[1]) || !isdigit(pin[2]) || !isdigit(pin[3])) 
    {
        cout << "Invalid input" << endl;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        int digit = pin[i] - '0';
        int index = (digit + i) % movesSize;
        cout << MOVES[index] << " ";
    }
    cout << endl;
}

