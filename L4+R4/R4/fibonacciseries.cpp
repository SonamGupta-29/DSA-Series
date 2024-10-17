// Print fibonacci series upto n terms

#include <bits/stdc++.h>
using namespace std;
 
int main(){

    int n;
    cin>>n;

    int firstTerm = 0, secondTerm = 1;
    cout<<firstTerm<<" "<<secondTerm<<" ";

    n = n-2;
    while(n != 0){
       int thirdTerm = firstTerm + secondTerm;
       cout<<thirdTerm<<" ";
       firstTerm = secondTerm;
       secondTerm = thirdTerm;

       n--;
    }
    
return 0;
}