#include <iostream>
#include <fstream>
using namespace std;
main()
{
    string name;
    fstream file;
    file.open("data3.txt",ios::in);
    file >> name;
    file.close();
    cout << "The File name:" << name;
}