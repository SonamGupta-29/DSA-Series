// Given two integers n and r, find nCr

#include <bits/stdc++.h>
using namespace std;

long factorial(int n){
    int answer = 1;
    for(int i=1; i<=n; i++){
        answer = answer* i;
    }
    return answer;
}
 
int main(){
    int n, r;
    cin>>n>>r;

// ncr = n!/r! * (n-r)!;
   long n_factorial = factorial(n);
   long r_factorial = factorial(r);
   long nr_factorial = factorial(n - r);

   long answer = n_factorial / r_factorial;
   answer = answer/nr_factorial;

   cout<<answer;
    
return 0;
}