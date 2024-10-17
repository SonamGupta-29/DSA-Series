// Check whether year is leap year or not

#include <iostream>
using namespace std;

int main(){
    int year;

    cout<<"enter year";
    cin>>year;

    string leapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 ==0)) ? "leapyear" :"not a leapyear";

    cout<< year << "is :"  << leapYear;

    return 0;
}