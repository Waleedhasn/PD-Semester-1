#include <iostream>
using namespace std;

bool isGoalScored(char field[7][16])
{

    int crossbarRow = -1;
    for (int i = 0; i < 7; i++)
    {
        if (string(field[i]).find("#######") != string::npos)
        {
            crossbarRow = i;
            break;
        }
    }

    if (crossbarRow == -1)
        return false;

    for (int i = 0; i < crossbarRow; i++)
    {

        if (string(field[i]).find('#') < string(field[i]).find('0') &&
            string(field[i]).rfind('#') > string(field[i]).find('0'))
        {
            return true;
        }
    }

    return false;
}

int main()
{

    char field[7][16] = {
        {" #           # "},
        {" #           # "},
        {" #           # "},
        {" ############# "},
        {"       #       "},
        {"       #       "},
        {"       #       "}};

    bool result = isGoalScored(field);

    if (result)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}
