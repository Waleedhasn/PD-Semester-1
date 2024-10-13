#include <iostream>
using namespace std;
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);
main()
{
    int examHour, examMinute, studentHour, studentMinute;
    cout << "Enter Exam starting time (hour): ";
    cin >> examHour;
    cout << "Enter exam starting time (minutes): ";
    cin >> examMinute ;
    cout << "Enter student hour of arrival : ";
    cin >> studentHour;
    cout << "Enter student minutes of arrival : ";
    cin >> studentMinute;
    string stat = checkStudentStatus(examHour, examMinute, studentHour, studentMinute);
    cout << stat << endl;
}
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{
    int examTotalMinutes = examHour * 60 + examMinute;
    int studentTotalMinutes = studentHour * 60 + studentMinute;
    int difference = studentTotalMinutes - examTotalMinutes;
    
    if (difference != 0)
    {
        int absDifference;
        if (difference > 0)
            absDifference = difference;
        else
            absDifference = absDifference-difference;

        int hours = absDifference / 60;
        int minutes = absDifference % 60;

        if (difference > 0)
        {
            if (hours > 0)
            {
                cout << hours << ":";
                if (minutes < 10)
                    cout << "0";
                cout << minutes << " hours after the start" << endl;
            }
            else
            {
                cout << minutes << " minutes after the start" << endl;
            }
        }
        else
        {
            if (hours > 0)
            {
                cout << hours << ":";
                if (minutes < 10)
                    cout << "0";
                cout << minutes << " hours before the start" << endl;
            }
            else
            {
                cout << minutes << " minutes before the start" << endl;
            }
        }
    }
       if (difference > 0)
        return "Late";
    else if (difference >= -30)
        return "On time";
    else
        return "Early";
}
