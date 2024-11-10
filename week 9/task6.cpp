#include<iostream>
using namespace std;
bool even_or_odd(int arr[],int size);
void transformation(int arr[],int size,int number_of_transformation);
main()
{
int size;
cout<<"Enter the size of the array: ";
cin>>size;
int arr[size];
cout<<"Enter the "<<size<<" numbers in a list : ";
for(int i=0;i<size;i++)
{
    cin>>arr[i];
}
int number_of_transformation;
cout<<"Enter the number of transformation : ";
cin>>number_of_transformation;
 transformation(arr,size, number_of_transformation);
 for(int i=0;i<size;i++)
 {
    cout<<arr[i]<<" ";
 }
 cout<<endl;

}
bool even_or_odd(int arr[],int size)
{
 for(int i=0;i<size;i++)
 {
    if(arr[i]%2==0)
    {
        arr[i]=arr[i]-2;
    }
    else
    {
      arr[i]=arr[i]+2;  
    }
 }
}
void transformation(int arr[],int size,int number_of_transformation)
{
  for(int i=0;i<number_of_transformation;i++)
  {
     even_or_odd( arr, size);
  }
}