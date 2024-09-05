#include <iostream>
using namespace std;

void concStrings()
{
    string s, t;
    cin >> s >> t;

    int size1 = s.size();
    int size2 = t.size();
    int size = size1 >= size2 ? size1 : size2;

    for (int i = 0; i < size; ++i)
    {
        if (s[i])
            cout << s[i];
        if (t[i])
            cout << t[i];
    }
}
