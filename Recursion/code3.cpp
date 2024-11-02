#include <bits/stdc++.h>
using namespace std;

void func(int n){
	while(n == 0) return;

	cout<<n<<endl;

	func(n-1);
}

int main() {
	// your code goes here
	func(5);
    
	return 0;
}
