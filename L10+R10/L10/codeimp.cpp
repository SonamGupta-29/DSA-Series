#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string name= "sonam gupta";
	cout<<name.size()<<endl;
	cout<<name.empty()<<endl;
	name = "ms. " + name;
    name.push_back(' ');
	name += "the coder";
	cout<<name<<endl;

	string str = "ms. sonam gupta the coder";
	if(name == str){
		cout<<"name is same as str"<<endl;
	}
    
return 0;
}