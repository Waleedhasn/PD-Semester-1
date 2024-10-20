#include <iostream>
using namespace std;

int main() {
    int period;
    cin >> period;

    int treatedPatients = 0;
    int untreatedPatients = 0;
    int doctors = 7;

    for (int day = 1; day <= period; day=day+1) {
        int patients;
        cin >> patients;

        if (day % 3 == 0 && untreatedPatients > treatedPatients) {
            doctors=doctors+1;
        }

        if (patients <= doctors) {
            treatedPatients = treatedPatients+patients;
        } else {
            treatedPatients = treatedPatients+doctors;
            untreatedPatients = untreatedPatients+(patients - doctors);
        }
    }

    cout << "Treated patients: " << treatedPatients << endl;
    cout << "Untreated patients: " << untreatedPatients << endl;

    return 0;
}
