#include <iostream>
#include <fstream>
using namespace std;
main()
{
    int  inputInteger;
    float decimal;
    char character;
    fstream file;
    file.open("data4.txt",ios::in);
    file >> inputInteger;
    file >> decimal;
    file >> character;
    file.close();
    cout << "INTEGER: " << inputInteger<<endl;
    cout << "DECIMAL: " << decimal<<endl;
    cout << "CHARACTER: " << character<<endl;
}
