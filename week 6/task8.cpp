#include <iostream>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
main()
{
    string yearType;
    int holidays, hometownWeekends;
    cout << "Enter year type :";
    cin >> yearType;
    cout << "Enter number of holidays : ";
    cin >> holidays;
    cout << "Enter number of weekends :";
    cin >> hometownWeekends;
    cout << calculateVolleyballGames(yearType, holidays, hometownWeekends);
}
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    int totalWeekends = 48;
    int weekendsInSofia = totalWeekends - hometownWeekends;
    int weekendsPlayingInSofia = weekendsInSofia * 3 / 4;
    int holidayGames = holidays * 2 / 3;
    int totalGames;

    if (yearType == "leap") 
    {
        totalGames = weekendsPlayingInSofia + hometownWeekends + holidayGames;
        totalGames = totalGames * 115 / 100;
    }
    else
    {
       totalGames = weekendsPlayingInSofia + hometownWeekends + holidayGames;
    }

    return totalGames;
}