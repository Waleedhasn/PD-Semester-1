#include <iostream>
using namespace std;

main()
 {
    float cargoCount;
    cout << "Enter the cout of cargo for transportation : ";
    cin >> cargoCount;

    float totalWeight = 0;
    float totalCost = 0;
    float minibusWeight = 0;
    float truckWeight = 0;
    float trainWeight = 0;

    for (int i = 0; i < cargoCount; ++i) 
    {
        int weight;
        cout << "Enter the tonnage of cargo item " << (i + 1) << ": ";
        cin >> weight;

        totalWeight =totalWeight+ weight;

        if (weight <= 3) 
        {
            minibusWeight =minibusWeight+ weight;
            totalCost =totalCost+( weight * 200);
        } 
        else if (weight <= 11) 
        {
            truckWeight =truckWeight+ weight;
            totalCost =totalCost+ (weight * 175);
        } 
        else 
        {
            trainWeight =trainWeight+ weight;
            totalCost =totalCost+ (weight * 120);
        }
    }

    float averagePricePerTon = totalCost / totalWeight;
    float minibusPercentage = (minibusWeight / totalWeight) * 100;
    float truckPercentage = (truckWeight / totalWeight) * 100;
    float trainPercentage = (trainWeight / totalWeight) * 100;

    
    cout << " " << averagePricePerTon << endl;
    cout << " " << minibusPercentage << "%" << endl;
    cout << " " << truckPercentage << "%" << endl;
    cout << " " << trainPercentage << "%" << endl;

    return 0;
}