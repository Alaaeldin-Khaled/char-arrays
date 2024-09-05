#include <iostream>
using namespace std;

void specialStringMapping()
{
    /*
    string str;
    cin >> str;
    char map1[26] = {'Y', 'Z', 'I', 'M', 'N', 'E', 'S', 'T', 'O', 'D', 'U', 'A', 'P', 'W', 'X', 'H', 'Q', 'F', 'B', 'R', 'J', 'K', 'C', 'G', 'V', 'L'};
    char map2[10] = {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')'};
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            cout << map1[str[i] - 'a'];
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
            cout << str[i];
        else if (str[i] >= '1' && str[i] <= '9')
        {
            cout << map2[str[i] - '1'];
        }
    }
    */

    string from = "abcdefghijklmnopqrstuvwxyz1234567890";
    string to = "YZIMNESTODUAPWXHQFBRJKCGVL!@#$%^&*()";

    char letter_map[150] = {0};

    for (int i = 0; i < from.size(); ++i)
        letter_map[from[i]] = to[i];

    string str;
    cin >> str;

    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            continue;

        str[i] = letter_map[str[i]];
    }

    cout << str;
}
