
#include <iostream>

using namespace std;

class Arrays
{
public:
    int size, arr[100], i = 0, sum = 0;
    void input()
    {
        cout << "Enter The Size of Array: ";
        cin >> size;
        cout << "Enter The Elements: " << endl;
        for (i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    /*void display()
    {
        cout << "The Elements are: ";
        for (i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }*/

    void addition()
    {
        for (i = 0; i < size; i++)
            if (arr[i] % 2 == 0)
            {
                sum = sum + arr[i];
            }
        cout << sum;
    }
};

int main()
{
    Arrays obj;
    obj.input();
    // obj.display();
    cout << "The Sum of Elements of Array: ";
    obj.addition();
    return 0;
}