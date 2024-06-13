/*In C++ a static function has several different meanings depending on the context in which it's used.
1) Static Member Function:
In the context of a class , a static member function is a funcion that belongs to the class itself rather than tp instances of the class. It can be called without creating an instance of the class. These Functions can only access static members of the class.
eg:-*/
/*
#include <iostream>

using namespace std;

class MyClass
{
public:
    static void staticFunction()
    {
        cout << "This is a Static Member Function." << std::endl;
    }
};

int main()
{
    // Static Members Functions Called Without An Instace of The CLass
    MyClass::staticFunction();
    return 0;
}*/

/* Write A Program to create a static variable (Counter initilized with zero) and static function(increment counter with 1 when it is called) create three instances at the class and track the number of instances created for this class*/

#include <iostream>

using namespace std;

class Program
{
public:
    // satic member
    static int counter;
    // constructor called
    program() { counter += 1; }
    static void displa()
    {
        cout << "\nDisplay is a static functiom\n";
    }
};

/*This initiilized the static variable counter outside the class. It sets the initial value of number is a.This line is outside of any function and ensures that the total is initilized before any program object is created*/

int Program::counter = 0;

int main()
{
    Program::display();
    Program obj1;
    cout << "Numer of counts" << obj1.counter << endl;
    Program obj2;
    cout << "Numer of counts" << obj2.counter << endl;
    Program obj3;
    cout << "Numer of counts" << obj3.counter << endl;
    return 0;
}
