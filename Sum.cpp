/* Write a program to create a function with name (sum) now inside function definition create a const member variable as result and initilize with zero,
now pass the parameter(eg. a and b) to sum function and calculate result a+b, and observe the result


#include <iostream>

using namespace std;

class sum
{
public:
    const int result = 0;
    add(int a, int b) const
    {
        result = a + b;
        cout << "The Sum is: " << result;
    }
};

int main()
{
    sum obj;
    obj.add(2, 3);
    return 0;
}


*/

// Write a Program to Calculate Facotrial of a number and make number as constant member of a class//
/*

#include <iostream>

using namespace std;

class Factorial
{
public:
    int calculate()
    {
        const int n = 5;
        int fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        return fact;
    }
};

int main()
{
    Factorial obj;
    int result = obj.calculate();
    cout << "Factorial of " << 5 << " is: " << result << endl;
    return 0;
}
*/
// Write s program to create a student mangement system which stores the record of 60 students. (Sudent id , Student Name and Marks)
// Accept data from user and display all the info using array of objects//
/*
#include <iostream>
#include <string>

using namespace std;

class student
{
public:
    string name[20];
    int id[20];
    int Marks[20];
    int n = 6;

    void Info()
    {
        cout << "Enter The Name:" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> name[i];
        }

        cout << "Enter The Id's:" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> id[i];
        }

        cout << "Enter The Marks:" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> Marks[i];
        }
    }

    void details()
    {
        cout << "===============================" << endl;
        cout << "The Names are:" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << name[i] << endl;
        }
        cout << "===============================" << endl;
        cout << "The Id's are:" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << id[i] << endl;
        }
        cout << "===============================" << endl;
        cout << "The Marks are:" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << Marks[i] << endl;
        }
    }
};

int main()
{
    student obj;
    obj.Info();
    obj.details();
    return 0;
}
*/

include<iostream>

    using namespace std;

class program
{
public:
    void display[obj, display]
};