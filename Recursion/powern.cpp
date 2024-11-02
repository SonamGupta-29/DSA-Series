#include <bits/stdc++.h>
using namespace std;

int pow(int n, int a){
	if(a == 0) return 1;

	return n*pow(n, a-1);
}

int main() {
	// your code goes here
	int n, a;
	cin>>n>>a;

	cout<<pow(n, a);

	return 0;
}
