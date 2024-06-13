// Program to Create A Menu//

#include<iostream>


using namespace std;

class menu{
    public:

        void display()
        {
            int choice;
            // Taking Input//
            cout<<"Enter Your Choice:";
            cin>>choice;
        }

        void getse()
        {
            int choice;
            if (choice==1)
            {
                cout<<"Hello"<<endl;
            }

            else if (choice==2)
            {
                cout<<"Welcome"<<endl;
            }

            else if (choice==3)
            {
                cout<<"Bye"<<endl;
            }

            else
            {
                cout<<"Wrong Option";
            }
        }
        };

    int  main (){

    menu obj;
    obj.display();
    obj.getse();
    return 0;
}
