/*
#include<iostream>
#include<conio.h>

using namespace std;

class program{
    public:
        void msg()
        {
            cout<<"Hello"<<endl;
        }
};

int main ()
{
    program obj;
    obj.msg();
    return 0;
}


#include <iostream>

using namespace std;

class Div
{
public:
    int x, y;

    void chkdiv()
    {
        cin >> x;

        cin >> y;

        if (y == 0)
        {
            cout << "Not DivisIble by Zero" << endl;
        }

        if (x % y == 0)
        {
            cout << "Divisible" << endl;
        }
    }
};

int main()
{
    Div obj;

    obj.chkdiv();

    return 0;
}


#include <iostream>

using namespace std;

class Week
{
public:
    int x;

    void weeks()
    {
        cout << "Enter The Week Number(1-7): ";
        cin >> x;
        switch (x)
        {
        case 1:
            cout << "Sunday";
            break;
        case 2:
            cout << "Monday";
            break;
        case 3:
            cout << "Tueday";
            break;
        case 4:
            cout << "Wednesday";
            break;
        case 5:
            cout << "Thusday";
            break;
        case 6:
            cout << "Friday";
            break;
        case 7:
            cout << "Saturday";
            break;
        }
    }
};

int main()
{
    Week obj;
    obj.weeks();
    return 0;
}

*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int length = 0;
    for (char c : str)
    {
        length++;
    }

    cout << "Total number of characters in the string: " << length << endl;

    return 0;
}

/*
#include <iostream>
#include <string>

std::string reverse_string(std::string str)
{
    int length = str.length();
    for (int i = 0; i < length / 2; ++i)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    return str;
}

int main()
{
    std::string input_string;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input_string);

    std::cout << "Reversed string: " << reverse_string(input_string) << std::endl;

    return 0;
}
*/