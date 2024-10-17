#include <iostream>
using namespace std;

int main()
{
    // 1 method
    // string name = "sonam Gupta";
    // cin>>name;
    // 2 method
    // getline(cin, name);
    // cout << name.size() << endl;

    // cout << name << endl;

    // 3 method
   string paragraph;
    while(1){
        string line;
        getline(cin, line);      // Read the input line by line
        if(line.size() == 0) break;  // Break if an empty line is entered
        paragraph += line; // Add the line along with a newline character
        paragraph += "\n";

        //  cout<< line << " (size: " << line.size() << ")" << endl;
    }
    paragraph.pop_back();
    cout<< paragraph;
 
    return 0;
}