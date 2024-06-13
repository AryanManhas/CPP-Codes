#include <iostream>
using namespace std;
// Declaration of an inline function
inline int add(int a, int b)
{
    return a + b;
}
int main()
{
    int x = 5, y = 10;

    // Calling the inline function

    int result = add(x, y);

    std::cout << "The Sum of" << x << "and" << y << "is" << result << std::endl;

    return 0;
}
