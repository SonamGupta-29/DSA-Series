// 1
// 12
// 123
// 1234
// 12345
// 1234
// 123
// 12
// 1

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;

    int number = 1;
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=number; j++){
            cout<<j<<" ";
        }
         if(i > n){
             number++;
        }else{
            number--;
        }
        cout<<endl;
    }
     

    
return 0;
}