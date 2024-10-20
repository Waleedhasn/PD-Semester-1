#include <iostream>
using namespace std;
void triangularNumber(int triangle);
main()
{
    int triangle;
    cout << "Enter the number of triangle: ";
    cin >> triangle;
    triangularNumber( triangle);

}
void triangularNumber(int triangle)
{
    int result = triangle * (triangle + 1) / 2;
    cout << "The number of dots is: " << result << endl;
}