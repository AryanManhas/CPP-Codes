/*WAP to create a bse class with function accept_data() which accepts Students Name Percentage, return percentage when we call this function, create derived class1 with function science_stream() which accepts percentage from base class and shows eligibity for the stream if percentage is greated than 70.
create derived class2 with function humanity_stream() which accepts percentage from base class and shows eligibilty for the stream if percentage is between 50 to 70*/

#include <iostream>

using namespace std;

class base(){
    accept_data(){
        public :
            string name;
float per;
cout << "Enter The Name:";
cin >> name;
cout << "Enter The Percentage:";
cin >> per;
}
}
;

class derived1 : public base
{
public:
    void science_stream(float percentage)
    {
        if (per > 75)
        {
            cout << Slightly Eligible;
        }

        else if (per > 80)
        {
            cout << "Eligible;
        }
        else 
        {
            cout<<"Not Eligible";
        }
    }
};