#include <iostream>
using namespace std;
string checkAlphabetCase(char alphabet);
main()
{

 char alphabet;
 cout<<"Enter a character:";
 cin>>alphabet;
 string result = checkAlphabetCase(alphabet);
 cout<< result <<alphabet;

}

string checkAlphabetCase(char alphabet)
{
 
 if(alphabet =='a')
   {
     string result="You have entered a small letter "  ;
     return result;
   }
 if(alphabet =='A')
   {
    string result="You have entered a capital letter " ;
    return result;
   }
 if(alphabet =='b')
   {
     string result="You have entered a small letter "  ;
     return result;
   }
 if(alphabet =='B')
   {
     string result="You have entered a capital letter "  ;
     return result;
   }
 if(alphabet =='c')
   {
     string result="You have entered a small letter "  ;
     return result;
   }
 if(alphabet =='C')
   {
     string result="You have entered a small letter "  ;
     return result;
   }
}