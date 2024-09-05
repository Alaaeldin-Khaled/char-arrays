#include <iostream>
using namespace std;

void convertToNumber()
{
    string num;
    cin >> num;
    int conversion = 0;
    for (int i = 0; i < num.size(); ++i)
    {
        conversion = (conversion * 10) + (num[i] - '0');
    }
    cout << conversion << " " << conversion * 3 << endl;
}
