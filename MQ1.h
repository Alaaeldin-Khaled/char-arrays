#include <iostream>
using namespace std;

void compressing()
{
    string word;
    cin >> word;

    int count = 1;
    char letter = word[0];

    for (int i = 1; i < word.size(); ++i)
    {
        if (word[i] == word[i - 1])
        {
            ++count;
        }
        else
        {
            cout << letter << count << '_';
            count = 1;
            letter = word[i];
        }
    }

    cout << letter << count;
}
