#include <iostream>
using namespace std;
main() 
{
cout << "Enter the name of the person:";
string person;
cin >> person;
cout << "Enter the target weight loss in kilograms:";
int kilograms;
cin >> kilograms;
int days;
days=kilograms*15;
cout << person << " will need " << days << " days to lose "<< kilograms <<" kg of weight by following the doctor's suggestions ";
}