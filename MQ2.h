#include <iostream>
using namespace std;

void compareStrings()
{
    string a, b;
    cin >> a >> b;

    int sz = a.size();
    if (sz < b.size())
        sz = b.size();

    int smaller = -1;

    for (int i = 0; i < sz && smaller == -1; ++i)
    {
        if (a[i] != b[i])
        {
            if (a[i] < b[i])
                smaller = 0;
            else
                smaller = 1;
        }
    }

    if (smaller == -1)
    {
        if (a.size() <= b.size())
            smaller = 0;
        else
            smaller = 1;
    }

    if (smaller == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
