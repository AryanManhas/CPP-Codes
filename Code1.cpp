//Write a Program to accept age from user throw an expression if user enters age less than 18?//

#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 18) {
        cout << "You are underage." << endl;
    } else {
        cout << "You are eligible." << endl;
    }

    return 0;
}
