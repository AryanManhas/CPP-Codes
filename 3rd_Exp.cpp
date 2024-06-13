/* To Update the details of a stuent using a member function of a stuent class */
/* To Add the details of a course using a parameterized constructor of a course class */

#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    int age;
    string address;

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
};

int main()
{
    // Create a student object
    Student student("Aarab", 19, "Paloura Jammu");

    // Display original details
    cout << "Original Details:" << endl;
    student.displayDetails();

    // Update details
    student.updateDetails("Aryan", 20, "MIET Jammu");

    // Display updated details
    cout << "\nUpdated Details:" << endl;
    student.displayDetails();

    return 0;
}
