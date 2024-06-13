#include <iostream>
#include <string>
using namespace std;

class Course
{
private:
    string courseName;
    string courseCode;
    string faculty;

public:
    // Constructor with custom input
    Course()
    {
        cout << "Enter Course Name: ";
        getline(cin, courseName);
        cout << "Enter Course Code: ";
        getline(cin, courseCode);
        cout << "Enter Faculty Name: ";
        getline(cin, faculty);
        cout << "Course object created for " << courseName << endl;
    }

    // Destructor
    ~Course()
    {
        cout << "Course object destroyed for " << courseName << endl;
    }

    // Function to display course information
    void displayInfo()
    {
        cout << "Course Name: " << courseName << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Faculty: " << faculty << endl;
    }
};

int main()
{
    // Creating a Course object using constructor with custom input
    Course cseCourse;

    // Displaying course information
    cseCourse.displayInfo();

    return 0;
}
