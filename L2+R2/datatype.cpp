//  perform input output of all basic data types

#include <iostream>
using namespace std;

int main(){
    int integerVar;
    float floatVar;
    double doubleVar;
    char charVar;
    bool boolVar;
    long longVar;
    short shortVar;

    // Taking input for all data types
    cout << "Enter an integer: ";
    cin >> integerVar;

    cout << "Enter a float: ";
    cin >> floatVar;

    cout << "Enter a double: ";
    cin >> doubleVar;

    cout << "Enter a character: ";
    cin >> charVar;

    cout << "Enter a boolean (0 or 1): ";
    cin >> boolVar;

    cout << "Enter a long integer: ";
    cin >> longVar;

    cout << "Enter a short integer: ";
    cin >> shortVar;

    // Displaying output for all data types
    cout << "\nYou entered the following values:\n";
    cout << "Integer: " << integerVar << endl;
    cout << "Float: " << floatVar << endl;
    cout << "Double: " << doubleVar << endl;
    cout << "Character: " << charVar << endl;
    cout << "Boolean: " << boolVar << endl;
    cout << "Long Integer: " << longVar << endl;
    cout << "Short Integer: " << shortVar << endl;

    return 0;

    return 0;
}