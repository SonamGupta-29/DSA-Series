// Program to check whether a number is Armstrong number or not

#include <bits/stdc++.h>
using namespace std;

powfn(int a, int b){
    // a*a*a......b times....
    int answer = 1;
   for(int i=1; i<=b; i++){
    answer = answer * a;
   }
   return answer;
}
 
int main(){

    int n;
    cin>>n;

    int copyofn = n;

    // count of digits..
    int numofdigit = 0;
    while(copyofn != 0){
        numofdigit ++;
        copyofn = copyofn/10;
    }


    // sum of digits raised to the power of numofdigit;
    
    int sum = 0;
    copyofn = n;
    while(copyofn != 0){
        int lastdigit = copyofn%10;
        sum = sum + powfn(lastdigit, numofdigit);
        copyofn = copyofn/10;
    }
     
     if(sum == n){
        cout<<n<<" "<<"is armstrong number";
     }else{
        cout<<n<<" "<<"is not armstrong number";
     }

    
return 0;
}