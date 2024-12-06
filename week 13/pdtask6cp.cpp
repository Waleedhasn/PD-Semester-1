#include <iostream>
#include <fstream>

using namespace std;
bool isPrintable(char c);
string extractTextFromFile(const string &filename);

int main()
{
    string filename;

    cout << "Enter the filename: ";
    cin >> filename;

    string text = extractTextFromFile(filename);

    cout << "Extracted text: " << text << endl;

    return 0;
}

bool isPrintable(char c)
{
    return (c >= 32 && c <= 126);
}

string extractTextFromFile(const string &filename)
{
    ifstream file(filename);

    if (!file.is_open())
    {
        cout << "Error opening file." << endl;
        return "No valid text found";
    }

    string validText = "";
    char c;

    while (file.get(c))
    {
        if (isPrintable(c))
        {
            validText += c;
        }
    }

    if (validText.empty())
    {
        return "No valid text found";
    }

    return validText;
}


