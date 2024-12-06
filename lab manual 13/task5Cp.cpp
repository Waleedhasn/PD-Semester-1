#include <iostream>
#include <fstream>
using namespace std;

void saveToFile(char names[][50], int adNumbers[], float percentages[], int count, const char* fileName) ;
void getStudentDetails(char names[][50], int adNumbers[], float percentages[], int size, int &count, const char* fileName) ;

main()
{
    const int size = 100;
    char names[size][50];
    int adNumbers[size];
    float percentages[size];
    int count;

    getStudentDetails(names, adNumbers, percentages, size, count, "Task5.txt");
    saveToFile(names, adNumbers, percentages, count, "topperStudents.txt");

    return 0;
}
void saveToFile(char names[][50], int adNumbers[], float percentages[], int count, const char* fileName) 
{
    ofstream outFile(fileName);
    if (!outFile) {
        cout << "Error opening file!" << endl;
        return;
    }

    for (int i = 0; i < count; i++) {
        if (percentages[i] > 70) {
            outFile << names[i] << endl;
            outFile << adNumbers[i] << endl;
            outFile << percentages[i] << endl;
        }
    }

    outFile.close();
    cout << "Top students have been saved to " << fileName << endl;
}
void getStudentDetails(char names[][50], int adNumbers[], float percentages[], int size, int &count, const char* fileName) 
{
    ifstream inFile(fileName);
    if (!inFile) {
        cout << "Error opening file!" << endl;
        return;
    }

    char name[50];
    int adNumber;
    float percentage;
    count = 0;

    while (inFile >> name >> adNumber >> percentage) {
        if (count >= size) {
            cout << "Maximum student limit reached!" << endl;
            break;
        }

        for (int i = 0; i < 50; i++) {
            names[count][i] = name[i];
        }

        adNumbers[count] = adNumber;
        percentages[count] = percentage;

        count++;
    }

    inFile.close();
}
