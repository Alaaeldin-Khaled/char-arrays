#include <iostream>
using namespace std;

void isPrefix()
{
    string input, str;
    cin >> input >> str;

    bool isPrefix = true;

    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] != input[i])
        {
            isPrefix = false;
            break;
        }
    }

    if (isPrefix)
        cout << "YES";
    else
        cout << "NO";
}
