#include <iostream>
using namespace std;
main() 
{
cout << "Enter imposter count:";
float impcount;
cin >> impcount;
cout << "Enter player count:";
float playcount;
cin >> playcount;
float imposter;
imposter=100*(impcount/playcount);
cout << "chance of being an imposter " << imposter << "%";
}