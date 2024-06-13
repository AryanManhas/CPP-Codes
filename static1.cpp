/*Write a program , create static variable(counter intitilize with zero) and static
function (increment counter with 1 when its is called) ,
create three instances of the class and track the number of instances created
 for this class ?
 */
#include <iostream>
using namespace std;
class Program
{
public:
    // static member
    static int counter;
    // Constructor called
    Program() { counter += 1; }
    static void display()
    {
        cout << "\n Display is a static function \n";
    }
};
/*This initializes the static variable counter outside the class. It sets the initial
 value of counter to 0. This line is outside of
any function and ensures that total is initialized before any Program object is created.*/
int Program::counter = 0;
int main()
{
    Program::display();
    Program obj1;
    cout << "Number of counts:" << obj1.counter << endl;
    Program obj2;
    cout << "Number of counts:" << obj2.counter << endl;
    Program obj3;
    cout << "Number of counts:" << obj3.counter << endl;
    return 0;
}
