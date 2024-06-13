#include <iostream>
#include <conio.h>

using namespace std;

class Program
{
public:
    void sum(int n1, int n2) // Formal Parameters
    {
        cout << "Sum of Two Numbers:" << n1 + n2;
    }
};
int main()
{
    int m1, m2;
    Program obj;
    cout << "Enter Two Numbers:";
    cin >> m1 >> m2;
    obj.sum(m1, m2); // Actual Parameters
    return 0;
}
