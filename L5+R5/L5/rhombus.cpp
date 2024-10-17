// Rhombus

#include <iostream>
using namespace std;

int main() {
    int i,j,k,n;
    cin>>n;

    for(i=1; i<=n; i++){
// for space
        for(k=1; k<=i-1; k++){
             cout<<" ";
        }
         for(j=1; j<=n; j++){
            cout<<"*"<<"";
        }
        cout<<endl;
    }
    
    return 0;
}