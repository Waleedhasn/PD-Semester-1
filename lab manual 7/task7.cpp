#include<iostream>
using namespace std;

void percentage(int number);

int main() {
    int number;
    cout << "Enter number count: ";
    cin >> number;
    percentage(number);
    return 0;
}

void percentage(int number) {
    float count = number, value, digit1 = 0, digit2 = 0, digit3 = 0, digit4 = 0, digit5 = 0;
    float p1, p2, p3, p4, p5;
    
    while (count >= 1) {
        cout << "Enter a number: ";
        cin >> value;
        if (value < 200) {
            digit1++;
        } else if (value >= 200 && value < 400) {
            digit2++;
        } else if (value >= 400 && value < 600) {
            digit3++;
        } else if (value >= 600 && value < 800) {
            digit4++;
        } else if (value >= 800 && value < 1000) {
            digit5++;
        }
        count--;
    }

    p1 = (digit1 * 100) / number;
    p2 = (digit2 * 100) / number;
    p3 = (digit3 * 100) / number;
    p4 = (digit4 * 100) / number;
    p5 = (digit5 * 100) / number;

    cout << p1 << "%" << endl;
    cout << p2 << "%" << endl;
    cout << p3 << "%" << endl;
    cout << p4 << "%" << endl;
    cout << p5 << "%" << endl;
}