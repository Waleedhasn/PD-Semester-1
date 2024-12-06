#include <iostream>
#include <fstream>
using namespace std;
void getStudentDetails(char names[][50], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count);
void saveToFile(char names[][50], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int count, const char* fileName);
 
 main() {
    const int size = 100;
    char names[size][50];
    int ages[size];
    float matricMarks[size];
    float fscMarks[size];
    float ecatMarks[size];
    int count;

    getStudentDetails(names, ages, matricMarks, fscMarks, ecatMarks, size, count);
    saveToFile(names, ages, matricMarks, fscMarks, ecatMarks, count, "student.txt");
}
void saveToFile(char names[][50], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int count, const char* fileName) 
{
    ofstream outFile(fileName);

    if (!outFile) {
        cout << "Error opening file!" << endl;
        return;
    }

    for (int i = 0; i < count; i++) {
        outFile << names[i] << endl;
        outFile << ages[i] << endl;
        outFile << matricMarks[i] << endl;
        outFile << fscMarks[i] << endl;
        outFile << ecatMarks[i] << endl;
    }

    outFile.close();
    cout << "Student details have been saved to " << fileName << endl;
}
void getStudentDetails(char names[][50], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count)
 {
    char name[50];
    int age;
    float matricMark, fscMark, ecatMark;
    char choice;

    count = 0;

    while (true) {
        if (count >= size) {
            cout << "Maximum student limit reached!" << endl;
            break;
        }

        cout << "Enter Student Name: ";
        cin.ignore();
        cin.getline(name, 50);
        for (int i = 0; i < 50; i++) {
            names[count][i] = name[i];
        }

        cout << "Enter Student Age: ";
        cin >> age;
        ages[count] = age;

        cout << "Enter Student Matric Marks: ";
        cin >> matricMark;
        matricMarks[count] = matricMark;

        cout << "Enter Student Fsc Marks: ";
        cin >> fscMark;
        fscMarks[count] = fscMark;

        cout << "Enter Student Ecat Marks: ";
        cin >> ecatMark;
        ecatMarks[count] = ecatMark;

        count++;

        cout << "Do you want to enter details of another student? (Y/N): ";
        cin >> choice;

        if (choice == 'N' || choice == 'n') {
            break;
        }
    }
}
