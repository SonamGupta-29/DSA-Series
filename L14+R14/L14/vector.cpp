#include <bits/stdc++.h>
using namespace std;
//  checking capacity
int main(){
    vector<int> v;
    for(int i=0; i<100; i++){
        v.push_back(i);
        cout<<v.size()<<" "<<v.capacity()<<endl;
    }
    
return 0;
}