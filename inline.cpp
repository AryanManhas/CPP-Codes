/*Inline Function :-
Normal Function Calls: When you call a function in C++, the program jumps to the function's code, executes it, and then returns to where it was called from. This process includes pushing arguments onto the stack, setting up a stack frame, and jumping to the function's code.

Inline Functions: An inline function is a special type of function where the compiler, instead of generating a function call, copies the entire body of the function wherever it's called.
Essentially, it replaces the function call with the actual code of the function.
For example, if you have an inline function called add() that adds two numbers, when you call add(5, 10) in your code, the compiler would replace that call with 5 + 10, instead of creating a separate function call.
e.g*/
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

    std::cout << "The sum of " << x << " and " << y << " is: " << result << std::endl;

    return 0;
}

/*When the inline function is called whole code of the inline function gets inserted or substituted at the point of the inline function call. This substitution is performed by the C++ compiler at compile time. An inline function may increase efficiency if it is small.

Remember, inlining is only a request to the compiler, not a command. The compiler can ignore the request for inlining.

The compiler may not perform inlining in such circumstances as:

If a function contains a loop. (for, while and do-while)
If a function contains static variables.
If a function is recursive.
If a function return type is other than void, and the return statement doesn’t exist in a function body.
If a function contains a switch or goto statement.

no error is thrown

Static
Loop
if funcion retruns any value
if recursive*/
