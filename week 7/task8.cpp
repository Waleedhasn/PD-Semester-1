#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int cargoCount;
    cout<< "Enter count of cargo for transportation:";
    cin >> cargoCount;
    for (int i = 1; i <= cargoCount; i=i+1) 
   { cout<< "Enter tonnage cargo " <<i<<endl ;
     cin >> weight ; }

    double totalWeight = 0;
    double totalCost = 0;
    double minibusWeight = 0;
    double truckWeight = 0;
    double trainWeight = 0;

    for (int i = 0; i < cargoCount; i=i+1) 
    {
        int weight;
        cin >> weight;
        totalWeight = totalWeight + weight;

        if (weight <= 3) {
            minibusWeight = minibusWeight + weight;
            totalCost = totalCost + (weight * 200);
        } else if (weight <= 11) {
            truckWeight = truckWeight + weight;
            totalCost = totalCost + (weight * 175);
        } else {
            trainWeight = trainWeight + weight;
            totalCost = totalCost + (weight * 120);
        }
    }

    double averagePricePerTon = totalCost / totalWeight;
    double minibusPercentage = (minibusWeight / totalWeight) * 100;
    double truckPercentage = (truckWeight / totalWeight) * 100;
    double trainPercentage = (trainWeight / totalWeight) * 100;

    cout << fixed << setprecision(2);
    cout << averagePricePerTon << endl;
    cout <<  minibusPercentage << "%" << endl;
    cout <<  truckPercentage << "%" << endl;
    cout <<  trainPercentage << "%" << endl;

}
