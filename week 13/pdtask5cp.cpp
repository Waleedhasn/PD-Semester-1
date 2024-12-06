#include <iostream>
#include <string>
using namespace std;
string charToMorse(char c);
string morse(const string &input);

int main()
{
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    string result = morse(input);
    cout << "Morse code: " << result << endl;

    return 0;
}

string charToMorse(char c)
{

    const char *morseCode[] = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.",
        "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-.-.-.-"};

    if (c >= 'a' && c <= 'z')
    {
        c = c - 'a' + 'A';
    }

    if (c >= 'A' && c <= 'Z')
    {
        return morseCode[c - 'A'];
    }

    else if (c == ' ')
    {
        return morseCode[26];
    }

    return "";
}


string morse(const string &input)
{
    string result = "";

    for (size_t i = 0; i < input.length(); ++i)
    {
        result += charToMorse(input[i]) + " ";
    }

    return result;
}


