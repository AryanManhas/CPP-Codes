// Program To Build A Simple Calculator In CPP Language//

#include<iostream>
#include<conio.h>

using namespace std;

class Calc{
    public:
    void inputs()
    {
        float a,b;
        cout<<"Enter The Operand 1:";
        cin>>a;
        cout<<"Enter The Operand 2:";
        cin>>b;
    }

    void choices()
    {
        int op;
        cout<<"Which Opertaion Do You Want To Perform?"<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"Enter Your Choice:";
        cin>>op;
        cout<<"Processing......"<<endl;
    }
    void process()
    {
        float a,b,sum,diff,mul,div;
        int op;
        //Addition//
        if (op==1)
        {
            sum=a+b;
            cout<<"Sum is:"<<sum;
        }

        //Subtraction//
        else if (op==2)
        {
            diff=a-b;
            cout<<"Difference is:"<<diff;
        }
        
        //Multiplication//
        else if (op==3)
        {
            mul=a*b;
            cout<<"Product is:"<<mul;
        }
        
        //Division//
        else if (op==4)
        {
            div=a/b;
            cout<<"Division is:"<<div;
        }

        else
        {
            cout<<"Reenter The Operands...."<<endl;
        }
           
    }
};
 int main()
 {
 Calc ab;
 ab.inputs();
 ab.choices();
 ab.process();
 return 0;
 }

