#include <bits/stdc++.h>
using namespace std;

int fibo(int n){
	if(n == 1 || n==2) return n-1;

	int a = fibo(n-1);
	int b = fibo(n-2);

	return a+b;
}

int main() {
	// your code goes here
	int n;
	cin>>n;

	cout<<fibo(n);
	
	return 0;
}
