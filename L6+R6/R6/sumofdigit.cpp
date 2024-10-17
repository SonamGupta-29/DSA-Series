#include <bits/stdc++.h>
using namespace std;

int sumofDigit(int n){
    int sum = 0;
    while(n != 0){
    int lastDigit = n%10;
    sum = sum + lastDigit;
    n=n/10;
    }
    return sum;
}
 
int main(){

    int n;
    cin>>n;

    cout<<sumofDigit(n);
return 0;
}