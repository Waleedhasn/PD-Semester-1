#include <iostream>
using namespace std;
void pet(int holidays);
main() 
{
   int holidays;
   cout << "Enter the number of holidays: ";
   cin >> holidays;
   pet(holidays);
}

void pet(int holidays) {
    int norm = 30000;
    int workingDays = 365-holidays;
    int playtime = (workingDays * 63) + (holidays * 127);
    int difference = playtime-norm;
    int hour=difference/60;
    int min=hour%60;
    if (playtime > norm)
 {
    int playtime = (workingDays * 63) + (holidays * 127);
    int difference = playtime - norm;
    hour=difference/60;
    min=hour%60;
        cout << "Tom will run away" << endl;
        cout << hour <<" Hours and " << min << " Minutes for play";
  }
        if(playtime <norm)
{
          int playtime = (workingDays * 63) + (holidays * 127);
          int difference = norm-playtime;
          hour=difference/60;
          min=hour%60;       
        cout << "Tom sleep well" << endl;
        cout << hour <<" Hours and " << min << " Minutes less for play";
}
}