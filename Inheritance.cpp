/*
Inheritance: using exisiting class features in new class
RUle: New Class to implement inheritance must have atleast 1 new feature
Type of Inheritance
1. Single Level Inheritance.
2. Multi Level Inheritane.
3. Multiple Inheritance.
4. Hybrid Inheritance.

Syntax:
class childclass name: access speifier parent class name
{
    child class implementation
}
*/

/*#include <iostream>
using namespace std;

class Parent
{
private:
    int n1, n2;

public:
    void sum()
    {
        cout << "Enter Two Numbers:";
        cin >> n1 >> n2;
        cout << "\n Sum=" << n1 + n2 << endl;
    }
};

class Parent2 : public Parent
{
private:
    int m1, m2;

public:
    void sub()
    {
        cout << "Enter Two Numbers:";
        cin >> m1 >> m2;
        cout << "\n Difference=" << m1 - m2 << endl;
    }
};

class Child : public Parent2
{
private:
    int m1, m2;

public:
    void mult()
    {
        cout << "Enter Two Numbers:";
        cin >> m1 >> m2;
        cout << "\n Product=" << m1 * m2 << endl;
    }
};

int main()
{
    Child obj;
    obj.sum();
    obj.sub();
    obj.mult();
    return 0;
}
*/
/*
Scope Resolution Operator
When Required:-
* Incase Case of hybrid inheritance
* When we want to access the global variable inside class or function
* To Define Function Outside Class
* To Declare the member function outside class defination
* To Declare the inline function
* To use static member
*/

#include <iostream>

using namespace std;

class Base(){
    public :
        display(){
            cout << "Welcome User";
}
}
;

class derived1 : public Base
{
public:
    int display2()
    {
        string name;
        int regno
        {
            cout << "Enter your name and registration number:";
        }

        cin >> name >> regno;
        cout << "Welcome " << name << "\t " << egno;
        return regno;
    }
};
class Derived2 : public Base
{
public:
    void display2(int regno)
    {
        string name;
        cout << "Enter your Name:";
        cin >> name;
        cout << "Welcome" << name << "\t " << regno;

        if ((regno) = 1 && regno <= 50)
            cout << "Your Lab Group is A";

        else if ((regno) = 50 && regno <= 100)
            cout << "Your Lab Group is B";

        else if ((regno) = 100 && regno <= 150)
            cout << "Your Lab Group is C";

        else if ((regno) = 150 && regno <= 200)
            cout << "Your Lab Group is D";

        else
        {
            cout << "Invalid Registration Number Entered";
        }
    }
    class Derived3 : public Derived1, public Derived2
    {
    public:
        display4()
        {
            cout << "\n Bye";
        }
    };
};
int main()
{
    int reg;
    Derived2 obj;
    obj.Derived1::display2();
    obj.display3(reg);
    obj.display();
    return 0;
}
