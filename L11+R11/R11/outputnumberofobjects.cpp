#include <bits/stdc++.h>
using namespace std;

class SchoolMember
{
public:
    string name;
     static int number; // number of objects

    // constructor
    SchoolMember()
    {
    }

    // destructor
     ~SchoolMember()
    {
        number--;
    }  
};

class Student : public SchoolMember
{
public:
    Student()
    {
        number++;
    }
};

class Teacher : public SchoolMember
{
public:
    Teacher()
    {
        number++;
    }
};

int SchoolMember::number;

int main()
{

    Student* obj1 = new Student();
    Teacher* obj2 = new Teacher();

    cout << obj1->number << "\n";
    cout << obj2->number << "\n";

        return 0;
}