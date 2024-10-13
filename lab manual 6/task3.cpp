#include <iostream>
using namespace std;
float perimeter(char shape, float value);
main()
{
    char shape;
    float value;
    cout<< "Enter the shape(s for square, c for circle, t for triangle ,h for hexagon)";
    cin >> shape;
    cout << "Enter the value:";
    cin >> value;
    cout << perimeter(shape,value);
}
float perimeter(char shape, float value)
{
    float perim;
    if (shape == 's')
    {
        perim=value*4;
        return perim;
    }
     if (shape == 'h')
    {
        perim=value*6;
        return perim;
    }
     if (shape == 't')
    {
        perim=value*3;
        return perim;
    }
     if (shape == 'c')
    {
        perim=value*6.28;
        return perim;
    }

}