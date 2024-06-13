#include <iostream>
using namespace std;

class Acct
{
public:
    double balance;

    // Default constructor
    Acct()
    {
        balance = 0;
        cout << "Your Account Balance is Zero" << endl;
    }

    // Parameterized constructor
    Acct(double n1)
    {
        balance = n1;
        cout << "Your Account Balance is: " << balance << endl;
    }
};

int main()
{
    double b;
    cout << "Enter balance: ";
    cin >> b;
    Acct obj1(b);
    return 0;
}
