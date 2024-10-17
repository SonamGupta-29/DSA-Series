#include <bits/stdc++.h>
using namespace std;

char maxcharacter(string str)
{
    int l = str.length();
    int maxFreq = 0;
    char maxchar = '\0'; // Initialize with null character

    for (int i = 0; i < l; i++)
    {
        // char fixedLetter = str[i];
        int countFreq = 0;

        for (int j = 0; j < l; j++)
        {
            if (str[i] == str[j])
            {
                countFreq++;
            }
        }

        if (countFreq > maxFreq)
        {
            maxFreq = countFreq;
            maxchar = str[i];
        }
    }

    return maxchar;
}

int main()
{
    string str = "I love codeforwin";

    char result = maxcharacter(str);
    cout << result<<" ";

    return 0;
}