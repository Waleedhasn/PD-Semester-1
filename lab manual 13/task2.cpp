#include <iostream>
#include <fstream>
using namespace std;
main()
{
    fstream file;
    int num;
    float dec;
    char charac;
    file.open("data.txt",ios::out);
    cout << "Integer:";
    cin >> num;
    cout << "Decimal point :";
    cin >> dec;
    cout << "Character:";
    cin >> charac;
    file << num<< endl;
    file << dec<< endl;
    file << charac<< endl;
    file.close();

}