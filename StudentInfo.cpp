// Write A Program of 5 Student to Display Info Name Registration and Grades using constructor//

#include <iostream>
#include <conio.h>

using namespace std;

class student
{
public:
    Info(string n1, int n2, string n3)
    {

        cout << "Name:" << n1;

        cout << "Registration Number:" << n2;

        cout << "Grades" << n3;
    }
};

int main()
{
    string b, c;
    int d;
    student obj;
    obj.Info(b, d, c);
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    // Constructor to initialize name, registration number, and grades
    Student(string name, int regNumber, string grades)
    {
        cout << "Name: " << name << endl;                     // Display name
        cout << "Registration Number: " << regNumber << endl; // Display registration number
        cout << "Grades: " << grades << endl;                 // Display grades
        cout << endl;                                         // Separate each student's information
    }
};

int main()
{
    // Create 5 Student objects with the information of each student
    Student student1("John", 1001, "A");
    Student student2("Alice", 1002, "B");
    Student student3("Bob", 1003, "C");
    Student student4("Emily", 1004, "A");
    Student student5("David", 1005, "B");

    return 0;
}
