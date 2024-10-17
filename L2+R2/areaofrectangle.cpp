// Find area and perimeter of rectangle

#include <iostream>
using namespace std;

int main(){
    int l,w;

    cout<<"enter the length of area";
    cin>>l;
    
    cout<<"enter the width of area";
    cin>>w;
    
    int area = l*w;
    cout<<area<<endl;

    int perimeter = 2*(l+w);
    cout<<perimeter;

    return 0;
}