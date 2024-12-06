#include <iostream>
#include <fstream>

using namespace std;
main()
{
    fstream file;
    string text;
    file.open("example.txt", ios::out);
    text = "this is a simple text.";
    file << text;
    file.close();


}
