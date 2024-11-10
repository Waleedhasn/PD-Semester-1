#include<iostream>
using namespace std;
string checkStudentStatus(int examHour ,int examMinute ,int studentHour ,int studentMinute);
main()
{  
  string output;
  int examHour,examMinute ,studentHour ,studentMinute;
  cout <<"Enter exam starting time (hour):";
  cin >> examHour;
  cout <<"Enter exam starting time (minutes):";
  cin >> examMinute;
  cout <<"Enter student hour of arrival:";
  cin >> studentHour;
  cout <<"Enter Student minutes of arrival:";
  cin >> studentMinute;
  output = checkStudentStatus(examHour ,examMinute ,studentHour ,studentMinute);
  cout << output;
    
}
string checkStudentStatus(int examHour ,int examMinute ,int studentHour ,int studentMinute)
{
  int exam_Minute=(examHour*60)+examMinute;
  int student_Minute=(studentHour*60)+studentMinute;
  int diff= exam_Minute - student_Minute;
  string result="" , output=""; 
  if(diff>30)
  {
    result="   Early";
    int Hour_1= diff/60;
    int Minute_2=diff%60;
    output=result + "\n " + " Arrival time "+ to_string(Hour_1)+" : " +to_string(Minute_2) + " Hours before the test";
  }
  else if(diff<0)
  {
    result="Late";
    diff=abs(diff);
    int Hour_1= diff/60;
    int Minute_2=diff%60;
    output=result + "\n" + " Arrival time "+ to_string(Hour_1)+" : " +to_string(Minute_2) + " Hours aftet the test";
  }
  else
  {
    result="On time";
    output = result;
  }  
  return result;
}
            
   
              
  
    
    
    
    
   