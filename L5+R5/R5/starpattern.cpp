// **********
// ****  ****
// ***    ***
// **      **
// *        *   
// *        *
// **      **
// ***    ***
// ****  ****
// **********

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;

    // upper star part
    int stars = n;
    int space = 0;

    for(int i=1; i<=n; i++){

        for(int j=1; j<=stars; j++){
            cout<<"*";
        }

        for(int k=1; k<=space; k++){
            cout<<" ";
        }

         for(int j=1; j<=stars; j++){
            cout<<"*";
        }

        stars -= 1;
        space += 2;
        cout<<endl;
    }

     // lower star part
    stars = 1;
    space = 2 + 2*(n-2);

    for(int i=1; i<=n; i++){

        for(int j=1; j<=stars; j++){
            cout<<"*";
        }

        for(int k=1; k<=space; k++){
            cout<<" ";
        }

         for(int j=1; j<=stars; j++){
            cout<<"*";
        }

        stars += 1;
        space -= 2;
        cout<<endl;
    }
    
return 0;
}