#include <iostream>
using namespace std;
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade();
float average;
 main()
 {
    float marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology,average;
    string name;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for english: ";
    cin >> marksEnglish;
    cout << "Enter marks for chemistry: ";
    cin >> marksChemistry;
    cout << "Enter marks of Maths: ";
    cin >> marksMaths;
    cout << "Enter marks of Social Science: ";
    cin >> marksSocialScience;
    cout << "Enter marks of Biology: ";
    cin >> marksBiology;
    cout << "Student Name: "<< name <<endl;
    cout << "Percentage: "<< calculateAverage(marksEnglish,marksMaths,marksChemistry,marksSocialScience,marksBiology)<<"%" << endl;
    cout << "GRADE: "<< calculateGrade() <<endl;
 }
 float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
 {
    float total =marksBiology+marksChemistry+marksEnglish+marksMaths+marksSocialScience;
    average = (total/500)*100;
    return average;
 }
 string calculateGrade()
 {
    
    if(average>=90)
   {
    
    return "A+";
   }
   if(average<90 && average >=80)
   {
    return "A";
   } 
   if(average<80 && average >=70)
   {
    return "B+";
   }
   if(average<70 && average >=60)
   {
    return "B";
   }
   if(average<60 && average >=50)
   {
    return "C";
   }
   if(average<50 && average>=40)
   {
    return "D";
   }
   if(average<40)
   return "F";
 }
