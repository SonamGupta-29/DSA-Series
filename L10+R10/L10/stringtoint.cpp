// Integer to string and String to Integer 

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string str1 = "12345";
    string str2 = "24";

    // Convert strings to integers using stoi
    int num1 = stoi(str1);
    int num2 = stoi(str2);

    // Add the integers
    int sum1 = num1 + num2;

    // for reverse the addition
    string sum = to_string(num1 + num2);
    reverse(sum.begin(), sum.end());

    // Output the result
    cout << "The sum is: " << sum1 << endl;
    cout << "The sum is: " << sum << endl;
    
return 0;
}
