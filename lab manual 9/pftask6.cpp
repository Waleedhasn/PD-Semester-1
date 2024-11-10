#include <iostream>
using namespace std;
void largestNumber(int number);
main()
{
    int number;
    cout << "Enter the number of elements  ";
    cin >> number;
    cout << "Enter " << number << " one per line" << endl;
    largestNumber(number);
}
void largestNumber(int number)
{
    int disp[number];
    for (int x = 0; x < number; x = x + 1)
    {
        cin >> disp[x];
    }
    int max = 0;
    int x = 0;
    while (x < number)
    {
        if (disp[x] > max)
        {
            max = disp[x];
        }
        x = x + 1;
    }
    cout << "largest number is  " << max;
}