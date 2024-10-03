#include <iostream>
#include <cmath>
using namespace std;

float decisionMaking(float, float, float);

int main() {
    int a, b, c;
    float result;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    result = decisionMaking(a, b, c);
    return 0;
}

float decisionMaking(float x, float y, float z) {
    float root1, root2, result;
    float disc = y * y - 4 * x * z;

    if (disc > 0) {
        root1 = (-y + sqrt(disc)) / (2 * x);
        root2 = (-y - sqrt(disc)) / (2 * x);
        cout << "Solutions: x = " << root1 << " and x = " << root2 << endl;
        result = root1;
    } 
    if (disc < 0) 
   {
        root1 = -y / (2 * x);
        root2 = sqrt(-disc) / (2 * x);
        cout << "Complex solutions: x = " << root1 << " + " << root2 << "i and x = " << root1 << " - " << root2 << "i" << endl;
        result = root1;
    }
     if (disc==0)  {
        root1 = -y / (2 * x);
        cout << "Solution: x = " << root1 << endl;
        result = root1;
       }
    return result;
}
