#include <iostream>
using namespace std;

void isSuffix()
{
    string input, str;
    cin >> input >> str;

    bool isSuffix = true;
    int size = input.size();

    for (int i = 1; i < str.size(); ++i)
    {
        if (str[str.size() - i] != input[input.size() - i])
        {
            isSuffix = false;
            break;
        }
    }

    if (isSuffix)
        cout << "YES";
    else
        cout << "NO";
}
