// Program to find Armstrong numbers between 1 to n
#include <bits/stdc++.h>
using namespace std;

int powFn(int a, int b){
    int power = 1;
    for(int i=1; i<=b; i++){
        power = power * a;
    }
    return power;
}

bool armstrongNum(int n){
    int n_copy = n;
    int count = 0;
     while(n_copy != 0){
        count++;
        n_copy = n_copy/10;
     }

    //  sum
    int sum = 0;
    n_copy = n;
    while(n_copy != 0){
        int lastDigit = n_copy%10;
        sum = sum + powFn(lastDigit, count);
        n_copy = n_copy/10;
    }
    // Check if the sum is equal to the original number
    return sum == n;
}
 
int main(){
    int start, end;
    cin>>start>>end;


  for(int i=start; i<=end; i++) {
        if(armstrongNum(i)){
            cout<<i<<" ";
        }
  }
    
return 0;
}