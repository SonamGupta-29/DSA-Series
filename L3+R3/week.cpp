// - Enter week number and print day of the week

#include <iostream>
using namespace std;

int main(){
    int weeknumber;

    cout << "enter week number";
    cin>> weeknumber;

    switch (weeknumber)
    {
    case 1:
        cout<< "Monday";
        break;

    case 2:
        cout<< "Tuesday";
        break;

    case 3:
        cout<< "Wednesday";
        break;

    case 4:
        cout<< "Thrusday";
        break;

    case 5:
        cout<< "Friday";
        break;

    case 6:
        cout<< "Saturday";
        break;

    case 7:
        cout<< "Sunday";
        break;
    
    default:
         cout << "Invalid week number! Please enter a number between 1 and 7." << endl;
        break;
    }

    return 0;
}