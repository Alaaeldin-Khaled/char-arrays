#include <iostream>
using namespace std;

void isSubstring() //ABCDEFG BD
{
    string input, str;
    cin >> input >> str;

    bool isSubstring = true;
    for (int i = 0; i < input.size(); ++i)
    {
        if (input[i] == str[0])
        {
            for (int j = i, cnt = 0; cnt < str.size(); ++j, ++cnt)
            {
                if (input[j] != str[cnt])
                {
                    isSubstring = false;
                    break;
                }
            }
        }
        if (!isSubstring)
            break;
    }

    if (isSubstring)
        cout << "YES";
    else
        cout << "NO";

}
