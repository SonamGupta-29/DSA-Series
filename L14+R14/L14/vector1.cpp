#include <bits/stdc++.h>
using namespace std;
 
int main(){
    vector<int> v;
    int On = 0, O1 = 0;
    for(int i=0; i<10000000; i++){
        v.push_back(i);
        if(v.size() == v.capacity()){
            On++;
        }else{
            O1++;
        }
    }   
    for(int i=0; i<10000000; i++){
        v.pop_back();
    } 
    cout<<On<<" "<<O1;
    cout<<v.capacity(); //pop_back() not reducing the capacity
return 0;
}
// The complexity of adding an element to a vector via push_back() can be either amortized O(1) or O(n) in case of a reallocation.

// Most of the time, push_back() runs in constant time O(1), because space is already available.
// Occasionally, when the capacity is exhausted, reallocation occurs, and the time complexity becomes O(n), where n is the current size of the vector.

// The amortized time complexity of inserting all elements into the vector is O(n), where n is the number of elements inserted (in this case, 10 million).
// Reallocation occurs in logarithmic steps (capacity typically doubles with each reallocation), which is why the overall time complexity remains linear, despite occasional expensive reallocations.

// O(n): The space complexity is proportional to the number of elements added to the vector, i.e., O(n), where n = 10^7 in this case.

// Amortized Time Complexity: O(n) (due to vector reallocation).
// Space Complexity: O(n) (because of the storage of the vector elements).