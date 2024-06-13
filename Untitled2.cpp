#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    string rollNo;
    string department;

    Student()
    {
        cout << "Name: ";
        getline(cin, name);
        cout << "Roll Number: ";
        getline(cin , rollNo);
    }

    ~Student()
    {
        cout << "Student object destroyed for " << name << endl;
    }

    // Function to display student information
    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{

    Student students;
    students.displayInfo();

    return 0;
}

