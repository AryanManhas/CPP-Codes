#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string myString = "Hello";
    for (char c : myString) {
        std::cout << c << std::endl;
    }
    return 0;
}
