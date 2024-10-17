// WAP to give grade to a student based on the marks 

#include <iostream>
using namespace std;

int main(){
int marks;

cout<<"enter marks";
cin>>marks;

if(marks>=91){
    cout<<"Grade A"<<endl;
}

else if(marks>=81 && marks<91){
    cout<<"Grade B"<<endl;
}

else if(marks>=71 && marks<81){
    cout<<"Grade C"<<endl;
}

else if(marks>=61 && marks<71){
    cout<<"Grade D"<<endl;
}

else{
    cout<<"Grade F";
}

return 0;
}