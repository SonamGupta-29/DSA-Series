//  5
// 44
// 333
// 2222
// 11111

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){

        // spaces
          for(int j=1; j<=n-i; j++)
        {
            printf(" ");
        }

        for(int j=1; j<=i; j++){
          cout<<n-i+1;
        }
        cout<<endl;
    }
return 0;
}