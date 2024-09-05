#include <iostream>
using namespace std;

void grouping()
{
    string str;
    cin >> str;
    cout << str[0];
    for (int i = 1; i < str.size(); ++i)
    {
        if (str[i] == str[i - 1])
        {
            cout << str[i];
        }
        else
        {
            cout << ' ' << str[i];
        }
    }
}
