/* syntax

friend retruntype functionname()

eg:-

class A
{
    private:
    e=10;
    friend void display(A);
};

void display(A obj)
{
    cout<<obj x:}
    int main(){
        A obj1;
        display(obj1);
        return 0;}
    }
}
}

Q Write a program to create Account class , declare amount and rate of interest as private number of the class Account , create friend functon for class Account , Access the amount and calculate
*/
/*
#include <iostream>

class Account {
private:
    double amount;
    double rate_of_interest;

};
*/

/* freind class

eg 
class A{
    private int a=19;
    friend class B;
    };
    class B
    {public:
    void display(A obj)}
    {
        cout<<obj a;
        }};
        int main(){
            A obj1;
            B obj2;
            obj2.display(obj1);
            return 0;
        }
    }
}

Abstract Class
class with no instance:
must have atleast 1 pure virtual function.

eg

class A
virtual void sum()=0;
virtual void sum();

}

class B : public A

{
    void sum()
    {

    }
}

*/

// Q: Write a program to create a abstract class with a pure virtual function area(), create three classes Triangle , Rectangle , Square , all three classes extends the abstract class and override area() with its own values values and implementations ?//

#include <iostream>

// Abstract class Shape
class Shape {
public:
    // Pure virtual function area
    virtual float area() const = 0;
};

// Triangle class, derived from Shape
class Triangle : public Shape {
private:
    float base, height;
public:
    // Constructor
    Triangle(float b, float h) : base(b), height(h) {}

    // Override area function
    float area() const override {
        return 0.5 * base * height;
    }
};

// Rectangle class, derived from Shape
class Rectangle : public Shape {
private:
    float length, width;
public:
    // Constructor
    Rectangle(float l, float w) : length(l), width(w) {}

    // Override area function
    float area() const override {
        return length * width;
    }
};

// Square class, derived from Shape
class Square : public Shape {
private:
    float side;
public:
    // Constructor
    Square(float s) : side(s) {}

    // Override area function
    float area() const override {
        return side * side;
    }
};

int main() {
    // Creating objects of different shapes
    Triangle triangle(4, 6);
    Rectangle rectangle(5, 8);
    Square square(4);

    // Calculating and printing areas
    std::cout << "Area of Triangle: " << triangle.area() << std::endl;
    std::cout << "Area of Rectangle: " << rectangle.area() << std::endl;
    std::cout << "Area of Square: " << square.area() << std::endl;

    return 0;
}
