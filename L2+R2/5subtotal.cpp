// Calculate total average and percentage of five subjects

#include <iostream>
using namespace std;

int main(){
    float M,C,S,E,H;
    float total, average, percentage;
    const int totalMarks = 500; // Assuming each subject is out of 100

    cout<<"enter marks of math";
    cin>>M;

    cout<<"enter marks of hindi";
    cin>>H;

    cout<<"enter marks of english";
    cin>>E;

    cout<<"enter marks of science";
    cin>>S;

    cout<<"enter marks of computer";
    cin>>C;

    total = M+H+E+C+S;
    average = total / 5;
    percentage = (total / totalMarks) * 100;;

    cout<<total<<endl;
    cout<<average<<endl;
    cout<<"percentage is "<<percentage;

    return 0;
}