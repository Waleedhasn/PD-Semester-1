#include <iostream>
using namespace std;
int evenOdd(int);
main()
{
  int numb;
  int result;
  cout << "Enter a five-digit number:";
  cin >> numb; 
  result=evenOdd(numb);
  return 0;
}
int evenOdd(int numb)
{
   int sum;
   int result;
sum=(numb%10)+(numb/10%10)+(numb/100%10)+(numb/1000%10)+(numb/10000%10);
sum=sum%2;
if(sum==1)
{
    cout << "Oddish";
}
if(sum==0)
{
    cout << "Evenish";
}
 return result;
}