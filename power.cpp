/*Write a program to create a class with name demo with private member variable a(numer) and b(power), create a default constructor of class and calculate power of a and b with parameter 5 and 3.
create a constructor with parameter and calculate power of a as b by accepting the value ad arguments to parameter constrcutor.
create a function display with accepts instances of class of class as parameter and return object after extraction,
with the help of display function w will display the result of above calculations of default constrcutor and parametertrized constrcutor*/

#include <iostream>
#include <math.h>

using namespace std;

class demo
{
public:
    int result;
    void pwr(int x = 5, int y = 3)
    {
        result = pow(x, y);
        cout << "Result: " << result;
    }
};

int main()
{
    demo obj;
    obj.pwr();
    return 0;
}

/*#include <iostream>
#include <cmath> // for pow function

class Demo {
private:
    int a;
    int b;

public:
    // Default constructor
    Demo() : a(5), b(3) {}

    // Parameterized constructor
    Demo(int aVal, int bVal) : a(aVal), b(bVal) {}

    // Function to calculate power of a and b
    void calculatePower() {
        int resultA = pow(a, b);
        int resultB = pow(b, a);
        std::cout << "Power of a^b: " << resultA << std::endl;
        std::cout << "Power of b^a: " << resultB << std::endl;
    }
};

// Function to display and return an object
Demo display(Demo obj) {
    obj.calculatePower();
    return obj;
}

int main() {
    // Using default constructor
    std::cout << "Using Default Constructor:" << std::endl;
    Demo obj1;
    display(obj1);

    std::cout << std::endl;

    // Using parameterized constructor
    std::cout << "Using Parameterized Constructor:" << std::endl;
    Demo obj2(2, 4); // Example values
    display(obj2);

    return 0;
}
*/