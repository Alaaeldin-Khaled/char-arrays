#include <iostream>
using namespace std;

void isSubsequence()
{
    string input, str;
    cin >> input >> str;

    bool isSubsequence = true;

    for (int i = 0; i < input.size(); ++i)
    {
        if (input[i] == str[0])
        {
            for (int j = i + 1, cnt = 1; j < input.size(); ++j)
            {
                if (input[j] == str[cnt] && str[cnt] > str[cnt - 1])
                {
                    ++cnt;
                }
                else if (j == input.size() - 1 && cnt != str.size())
                {
                    isSubsequence = false;
                    break;
                }
            }
        }
    }

    if (isSubsequence)
        cout << "YES";
    else
        cout << "NO";
}
