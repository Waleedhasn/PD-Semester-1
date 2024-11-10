#include <iostream>
using namespace std;

main() 
{
    int period;

    cout<<"Enetr the number of days you visited the hospital: ";
    cin >> period;
    


    int treatedPatients = 0;
    int untreatedPatients = 0;
    int doctors = 7;

    for (int day = 1; day <= period; day++)
     {
        int patients;
        cout<<"Enter the number of patients who visited the hospital in day "<<day<<":";
        cin >> patients;

        if (day % 3 == 0 && untreatedPatients > treatedPatients)
        {
            doctors++;
        }

        if (patients <= doctors) 
        {
            treatedPatients = treatedPatients + patients;
        }
         else 
         {
            treatedPatients = treatedPatients + doctors;
            untreatedPatients = untreatedPatients + (patients - doctors);
        }
    }

    cout << "Treated patients: " << treatedPatients << "." << endl;
    cout << "Untreated patients: " << untreatedPatients << "." << endl;

    return 0;
}