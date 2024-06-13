#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    string section;
    string department;
    int semester;

    // Constructor
    Student() {}

    // Function to set student information
    void setInfo(string n, int r, string s, string d, int sem)
    {
        name = n;
        rollNo = r;
        section = s;
        department = d;
        semester = sem;
    }

    // Function to display student information
    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Section: " << section << endl;
        cout << "Department: " << department << endl;
        cout << "Semester: " << semester << endl;
    }
};

int main()
{
    Student student;

    string name, section, department;
    int rollNo, semester;

    // Getting student details from user
    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Roll Number: ";
    cin >> rollNo;
    cin.ignore(); // Ignore the newline character
    cout << "Enter Section: ";
    getline(cin, section);
    cout << "Enter Department: ";
    getline(cin, department);
    cout << "Enter Semester: ";
    cin >> semester;

    // Setting student details
    student.setInfo(name, rollNo, section, department, semester);

    // Displaying student information
    cout << "\nStudent Information:\n";
    student.displayInfo();

    return 0;
}
