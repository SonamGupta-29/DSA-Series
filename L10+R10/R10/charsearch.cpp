#include <bits/stdc++.h>
using namespace std;
 
void searchNumberTime(string str, char target){
    int l = str.length();
for(int i=0; i<l; i++){
        if(str[i] == target){
            cout<<i<<" ";
        }
    }
}

int main(){
    string str = "I love programming. I love codeforwin";
    char target;
    cin>>target;

    searchNumberTime(str, target);
return 0;
}