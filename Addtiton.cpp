/*
#include<iostream>
#include<conio.h>

using namespace std;

class addition{
    public:
        void disp()
        {
            int n1,n2;
            cout<<"Enter The N1:";
            cin>>n1;

            cout<<"Enter The N2:";
            cin>>n2;
        }

        void out()
        {
            int n1,n2,result;
            result=n1+n2;
            cout<<"Sum is: "<<result;
        }
};

int main ()
{
    addition add;
    add.disp();
    add.out();
    return 0;
}
*/

/*
#include <iostream>
#include <string>

using namespace std;

class Str
{
public:
    string str;

    int len()
    {
        cout << "Enter the String: ";
        getline(cin, str);

        int length = 0;
        for (char c : str)
        {
            if (c != ' ')
            {
                length++;
            }
        }
        return length;
    }
};

int main()
{
    Str obj;
    int numCharacters = obj.len();
    cout << "The No. of Characters in String is: " << numCharacters << endl;
    return 0;
}
*/
/*
#include <iostream>

using namespace std;

class Area
{
public:
    float rad, pi = 3.14, area;

    void crl(float r)
    {
        rad = r;
        cout << "Enter The Radius: ";
        cin >> rad;
    }

    void calculateArea()
    {
        area = pi * rad * rad;
        cout << "Area of Circle is: " << area;
    }
};

int main()
{
    float radius;
    Area obj;
    obj.crl(radius);
    obj.calculateArea();
    return 0;
}


#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class StringReverser
{
private:
    string str;

public:
    void setString(string s)
    {
        str = s;
    }
    string reverseWords()
    {
        stringstream ss(str);
        string word;
        string reversedString;
        while (ss >> word)
        {
            reversedString = word + " " + reversedString;
        }
        return reversedString;
    }
};

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    StringReverser reverser;
    reverser.setString(input);

    string reversed = reverser.reverseWords();
    cout << "Reversed string: " << reversed << endl;

    return 0;
}*/

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
