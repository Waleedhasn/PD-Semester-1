#include<iostream>
using namespace std;
float totalIncome(string,int,int);
main()
{
    string screening;
    int rows,columns;

    cout<<"Enter the screening type (Premiere/Normal/Discount) : ";
    cin>>screening;

    cout<<"Enter the number of rows: ";
    cin>>rows;

    cout<<"Enter the number of columns : ";
    cin>>columns;
    
    cout<<" "<<totalIncome(screening, rows, columns);

}

float totalIncome(string screening,int rows,int columns)
{
    float print_premiere;
    if(screening=="Premiere")
    {
      print_premiere=12*(rows*columns);
      return print_premiere;
    }

    if(screening=="Normal")
    {
      print_premiere=7.50*(rows*columns);
      return print_premiere; 
    }

    if(screening=="Discount")
    {
      print_premiere=(rows*columns)-5.00;
      return print_premiere;  
    }
    
}

