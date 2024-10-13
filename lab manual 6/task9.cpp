#include <iostream>
using namespace std;
string checkTitle(char  gender, int age);
main()
{
    char gender;
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender (m/f): ";
    cin >> gender;
    cout << "Your personal title: " << checkTitle(gender, age);
}
string checkTitle(char  gender, int age)
{
    if (age>=16 && gender=='m')
    {
        return "Mr.";
    }
    if (age>=16 && gender=='f')
    {
        return "Ms.";
    }
    if (age<16 && gender=='f')
    {
        return "Miss";
    }
    if (age<16 && gender=='m')
    {
        return "Master";
    }
}
