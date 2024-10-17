#include <iostream>
using namespace std;
class DOB{
    public:
    int day;
    int month;
    int year;
};
 
class Student{
    public:
   int roll_no;
   int admission_no;
   int standard;
   char section;
   DOB date_of_birth;
   string name;

   // Default constructor
    // Student() {  //you will get garbage value
    // }

    // Parameterized constructor
    Student(int roll, string n) {
      this->roll_no = roll;
      this->name = n;
    }

     // Getter method to return roll_no
    int get_roll_no() {
        return roll_no;
    }

    // Getter method to return name
    string get_name() {
        return name;
    }

 };


int main(){
    Student students[50];

    students[0].roll_no = 1;
    students[0].admission_no = 12;
    students[0].standard = 7;
    students[0].section = 'A';
    students[0].name = "sonam";
    students[0].date_of_birth.day = 10;
    students[0].date_of_birth.month = 12;
    students[0].date_of_birth.year =1997;

    cout<<students[0].name<<endl;

    cout<<students[0].get_roll_no()<<endl;
    cout<<students[0].get_name()<<endl;

return 0;
}