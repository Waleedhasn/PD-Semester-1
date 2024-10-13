#include <iostream>
using namespace std;

string trueFalse(int number);

int main() 
{
    int number;
    cout << "Enter a three-digit number: ";
    cin >> number;
    cout << trueFalse(number);
}

string trueFalse(int number) 
{
    int sum = (number % 10) + (number / 10 % 10) + (number / 100 % 10);
    sum = sum % 2;
    number = number % 2;
    if ((sum == 0 && number == 0) || (sum == 1 && number == 1))
     {
        return "1";
    }
     else 
     {
        return "0";
    }
}
