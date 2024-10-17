#include <bits/stdc++.h>
using namespace std;

bool searchTargetword(string str, string target_word, int startIndex)
{
    int i = startIndex;
    int j = 0;

    while (i < str.length() && j < target_word.length())
    {
        if (str[i] != target_word[j])
        {
            return false;
        }
        i++;
        j++;
    }
    return true;
}

int main()
{
    string str = "I love programming. I love codeforwin";
    string target_word;
    cin >> target_word;

for(int i = 0; i<str.length(); i++){
    if(searchTargetword(str, target_word, i) == true)
    {
        cout << i << " ";
    }
}

    return 0;
}