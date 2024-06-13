
#include <iostream>
using namespace std;
int main()
{
    string str;

    cout << "Enter String:";
    getline(cin, str);

    cout << "Your string is:" << str;

    str = string(str.rbegin(), str.rend());

    cout << "Your reverse string is:" << str;

    return 0;
}
