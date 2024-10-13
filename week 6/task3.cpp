#include <iostream>
using namespace std;

string findZodiacSign(int day, string month);

int main() {
    int day;
    string month;
    cout << "Enter the day of birth: ";
    cin >> day;
    cout << "Enter the month of birth: ";
    cin >> month;
    cout << "Zodiac sign: " << findZodiacSign(day, month) << endl;
    
}

string findZodiacSign(int day, string month)
 {
    if ((month == "march" && day >= 21) || (month == "april" && day <= 19))
     {
        return "Aries";
    }
    if ((month == "april" && day >= 20) || (month == "may" && day <= 20))
     {
        return "Taurus";
    }
    if ((month == "may" && day >= 21) || (month == "june" && day <= 20)) 
    {
        return "Gemini";
    }
    if ((month == "june" && day >= 21) || (month == "july" && day <= 22)) 
    {
        return "Cancer";
    }
    if ((month == "july" && day >= 23) || (month == "august" && day <= 22))
     {
        return "Leo";
    }
    if ((month == "august" && day >= 23) || (month == "september" && day <= 22))
     {
        return "Virgo";
    }
    if ((month == "september" && day >= 23) || (month == "october" && day <= 22)) 
    {
        return "Libra";
    }
    if ((month == "october" && day >= 23) || (month == "november" && day <= 21))
     {
        return "Scorpio";
    }
    if ((month == "november" && day >= 22) || (month == "december" && day <= 21))
     {
        return "Sagittarius";
    }
    if ((month == "december" && day >= 22) || (month == "january" && day <= 19))
     {
        return "Capricorn";
    }
    if ((month == "january" && day >= 20) || (month == "february" && day <= 18))
     {
        return "Aquarius";
    }
    if ((month == "february" && day >= 19) || (month == "march" && day <= 20))
     {
        return "Pisces";
    }
    
}