#include<iostream>
#include<cmath>
using namespace std;
int calculatePoolState(int,int,int,float);

main()
{
 int  Vol, Pipe1, Pipe2,result;
 float hours;
 cout<<"Enter volume of the pool in liters: ";
 cin>>Vol;
 cout<<"Enter flow rate of the first pipe per hour: ";
 cin>>Pipe1;
 cout<<"Enter flow rate of the second pipe per hour: ";
 cin>>Pipe2;
 cout<<"Enter hours that the worker is absent: ";
 cin>>hours;
 result=calculatePoolState(Vol,Pipe1,Pipe2,hours);
 return 0;
}

int calculatePoolState(int Vol,int Pipe1,int Pipe2,float hours)
{
int result;
int totalFlowrate;
totalFlowrate= (Pipe1+Pipe2);
float waterLevel;
waterLevel=(totalFlowrate*hours);
float fullPercentage;
fullPercentage=(waterLevel/Vol)*100;
int Pipe1Percent=((Pipe1*hours)/waterLevel)*100;
int Pipe2Percent=((Pipe2*hours)/waterLevel)*100;

if(waterLevel < Vol)
{
 cout<<"The pool is "<<fullPercentage<<"% full. Pipe 1: "<<Pipe1Percent<<" % . Pipe2: "<<Pipe2Percent<<" %";
}
 
if(waterLevel > Vol)
{
 cout<<"For "<<hours<<" the pool overflow with "<<Vol<< "liters";
}
return result;
}