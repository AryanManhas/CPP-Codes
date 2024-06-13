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
        cout << "Enter Student Name: ";
        getline(cin, name);
        cout << "Enter Roll Number: ";
        getline(cin , rollNo);
        cout << "Enter Department: ";
        getline(cin, department);

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
        cout << "Department: " << department << endl;
    }
};

int main()
{

    Student student1;
    student1.displayInfo();

    return 0;
}

