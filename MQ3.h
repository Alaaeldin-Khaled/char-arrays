#include <iostream>
using namespace std;

void add5555()
{
    string num;
    cin >> num;

    int carry = 0;
    int sz = num.size();

    for (int i = 0; i < sz; ++i)
    {
        int digit = num[sz - i - 1] - '0';
        if (i < 4)
        {
            digit += 5;
        }

        digit += carry;

        if (digit >= 10)
        {
            digit -= 10;
            carry = 1;
        }
        else
            carry = 0;

        num[sz - i - 1] = digit + '0';
    }
    if (carry == 1)
        cout << 1;
    cout << num;
}
