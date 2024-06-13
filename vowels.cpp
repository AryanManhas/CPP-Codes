/*#include <iostream>
#include <cctype> // for tolower function
using namespace std;

class StringAnalyzer
{
private:
    string str;
    int vowelCount;
    int consonantCount;

    bool isVowel(char c)
    {
        c = tolower(c); // Convert character to lowercase for simplicity
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

public:
    StringAnalyzer(string s) : str(s), vowelCount(0), consonantCount(0) {}

    void analyze()
    {
        for (char c : str)
        {
            if (isalpha(c))
            { // Check if the character is an alphabet
                if (isVowel(c))
                {
                    vowelCount++;
                }
                else
                {
                    consonantCount++;
                }
            }
        }
    }

    void displayCounts()
    {
        cout << "Number of vowels: " << vowelCount << endl;
        cout << "Number of consonants: " << consonantCount << endl;
    }
};

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    StringAnalyzer analyzer(input);
    analyzer.analyze();
    analyzer.displayCounts();

    return 0;
}*/

#include <iostream>

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
