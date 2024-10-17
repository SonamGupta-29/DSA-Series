// given string palindrome or not

#include <iostream>
using namespace std;

bool palindromecheck(string &s){
    int l=0, r=s.size() -1;

    while(l<=r){
        if(s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}
 
int main(){
    string str;
    cin>>str;
    if(palindromecheck(str)){
        cout<<"It is a palindrome"<<endl;
    }else{
        cout<<"It is not a palindrome"<<endl;
    }
    
return 0;
}