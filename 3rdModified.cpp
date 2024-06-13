#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    int age;
    string address;

public:
    // Constructor
    Student(string n, int a, string addr) : name(n), age(a), address(addr) {}

    // Member function to update details
    void updateDetails(string newName, int newAge, string newAddress)
    {
        name = newName;
        age = newAge;
        address = newAddress;
    }

    // Function to display student details
    void displayDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }

    // Function to input details from user
    void inputDetails()
    {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); // Ignore newline character in input buffer
        cout << "Enter address: ";
        getline(cin, address);
    }
};

int main()
{
    // Create a student object
    Student student("", 0, "");

    // Input details from the user
    cout << "Enter student details:" << endl;
    student.inputDetails();

    // Display student details
    cout << "\nStudent Details:" << endl;
    student.displayDetails();

    return 0;
}
