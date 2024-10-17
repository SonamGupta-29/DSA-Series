//    *****
//   *    *
//  *    *
// *    *
// *****

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;

    int left_space = 0 + 1*(n-1);
    for(int i=1; i<=n; i++){

        // left space
    for(int j=1; j<=left_space; j++){
        cout<<" ";
    }

    // star
    if(i==1 || i==n){
        for(int j=1; j<=n; j++){
          cout<<"*";
        }
    }else{
        cout<<"*";

        // space
        for(int j=1; j<=n-2; j++){
            cout<<" ";
        }

        cout<<"*";
    }
    left_space-=1;
    cout<<endl;
    }
    
return 0;
}