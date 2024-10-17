#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name = "sonam gupta";
    name[0] = toupper(name[0]);
    name[6] = toupper(name[6]);

    string name1 = "sonam gupta";
    name[0] = tolower(name[0]);

    cout << isalpha(name[0]) << endl;  // true
    cout << isalpha(name1[5]) << endl; // false

    cout << name << endl;
    cout << name1 << endl;

    return 0;
}