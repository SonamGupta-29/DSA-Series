#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;
    int marks[3];

    // constructor
public:
    Student(string Name, int Age, int Marks[])
    {
        name = Name;
        age = Age;
        marks[0] = Marks[0];
        marks[1] = Marks[1];
        marks[2] = Marks[2];
    }

    string get_name()
    {
        return name;
    }

    int get_age()
    {
        return age;
    }

    int get_max()
    {
        int max = marks[0];

        if (marks[1] >= marks[0] && marks[1] >= marks[2])
        {
            max = marks[1];
        }
        else if (marks[2] >= marks[0] && marks[2] >= marks[1])
        {
            max = marks[2];
        }

        return max;
    }
};

int main()
{
    // classname objectname = new classname;
    int marks[3] = {56, 80, 90};
    Student* obj = new Student{"Sonam", 26, marks};

    // cout<<obj->name<<endl;
    // cout<<obj->age<<endl;
    // cout<<obj->marks[0]<<endl;
    // cout<<obj->get_max()<<endl;

    cout << obj->get_name() << endl;
    cout << obj->get_age() << endl;
    cout << obj->get_max() << endl;

    return 0;
}