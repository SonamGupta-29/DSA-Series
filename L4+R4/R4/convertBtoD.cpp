// Convert number from Binary to Decimal
#include <bits/stdc++.h>
using namespace std;

int main()
{

int n;
cin>>n;

int power = 0, sum = 0;

while(n != 0){
    int lastdigit = n%10;
    sum = sum + lastdigit * pow(2, power);
    power++;
    n = n/10;
}

cout<<sum;

    return 0;
}