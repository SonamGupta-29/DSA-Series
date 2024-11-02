#include <bits/stdc++.h>
using namespace std;

void func(int n, int i){
	if(i==11) return;

	cout<<n<<"*"<<i<< "=" << n*i<<endl;

	func(n, i+1);
}

int main() {
	// your code goes here
	int n;
	cin>>n;

	func(n, 1);
	return 0;
}
