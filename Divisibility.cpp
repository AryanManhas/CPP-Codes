#include <iostream>

using namespace std;

class Divisibility
{
public:
    int x, y;

    void checkDivisibility()
    {
        cin >> x;
        cin >> y;
        if (y == 0)
        {
            cout << "Error: Division by zero" << endl;
            return;
        }
        if (x % y == 0)
        {
            cout << "Number is Divisible" << endl;
        }
        else
        {
            cout << "Number is not Divisible" << endl;
        }
    }
};

int main()
{
    Divisibility obj;
    obj.checkDivisibility();
    return 0;
}
