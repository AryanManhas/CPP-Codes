// Write a Program to Crete Two Functions Accept and Calculator Accept Will Get the value and pass the value to calculator and calculator will calculate the square of the value//
#include <iostream>
#include <conio.h>

using namespace std;

class Calculator
{
    int x;

public:
    void bbc(int n1)
    {

        x = n1;
    }

    void sqr()
    {
        cout << "Square of The Value is:" << x * x;
    }
};

int main()
{
    Calculator Sqt;
    int b;
    cin >> b;
    cout << "Enter The Value:";
    Sqt.bbc(b);
    Sqt.sqr();
    return 0;
}