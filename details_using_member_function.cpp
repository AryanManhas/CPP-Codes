#include<iostream>
using namespace std;

class Student {
private:
    string name;
    int reg;

public:
    Student(string name, int reg): name(name), reg(reg) {
        cout << "Student created with name: " << name << " and reg: " << reg << endl;
    }

    void updateDetails(string newName, int newReg) {
        name = newName;
        reg = newReg;
        cout << "Student details updated." << endl;
    }

    void deleteDetails() {
        name = "";
        reg = 0;
        cout << "Student details deleted." << endl;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Registration number: " << reg << endl;
    }
};

class Course : public Student {
private:
    int courseId;
    string courseName;

public:
    Course(string name, int reg): Student(name, reg) {}

    void courseInfo() {
        cout << "Enter your course code and course name: ";
        cin >> courseId >> courseName;
        cout << "Course information is\nCourse name is " << courseName << "\nCourse ID is " << courseId << endl;
    }
};

int main() {
    string name;
    int reg;

    cout << "Enter your name and registration number: ";
    cin >> name >> reg;

    Course obj(name, reg);
    obj.courseInfo();
    obj.displayDetails();

    obj.updateDetails("New Name", 0);
    obj.displayDetails();

    obj.deleteDetails();

    return 0;
}
