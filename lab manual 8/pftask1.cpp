#include<iostream>
using namespace std;
bool doesBrickFit(int a, int b, int c, int w, int h);
main()
{
    int heightB , widthB , depthB , heightH , widthH;
    bool result;
    cout << "Enter height of brick ";
    cin >> heightB;
    cout << "Enter width of brick ";
    cin >> widthB;
    cout << "Enter depth of brick ";
    cin >> depthB;
    cout << "Enter height of Hole ";
    cin >> heightH;
    cout << "Enter height of Hole ";
    cin >> widthH;
    result=doesBrickFit(heightB , widthB , depthB , heightH , widthH);
    cout << result;
}
bool doesBrickFit(int a, int b, int c, int w, int h)
{
    int areaB1 , areaB2 , areaB3 , areaH;
    bool result;
    areaB1=a*b;
    areaB2=a*c;
    areaB3=c*b;
    areaH=w*h;
    if(areaB1==areaH || areaB2==areaH || areaB3==areaH)
    {
        result=true;
    }
    return result;
}