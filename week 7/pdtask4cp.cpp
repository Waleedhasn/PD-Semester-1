#include<iostream>
using namespace std;
int triangleDots(int);
main()
{
    int triangles;

    cout<<"Enter the number of triangles: ";
    cin>>triangles;

    cout<<triangleDots(triangles);

}
int triangleDots(int triangles)
{
    int dots=0;
    for(int i=1;i<=triangles;i++)
    {
     dots=dots+i;
    }
    return dots;
}