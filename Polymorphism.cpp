// Write A Program that accepts account number from user

#include <iostream>
using namespace std;

class Bank
{
private:
    int accountNumber;

public:
    void setAccountNumber(int n)
    {
        accountNumber = n;
    }
};

int main()
{
    int accountNum, amount;
    Bank obj;

    cout << "Enter Account Number: ";
    cin >> accountNum;
    obj.setAccountNumber(accountNum);

    if (obj.setAccountNumber(accountNum) == 12345)
    {
        cout << "Enter the Amount: ";
        cin >> amount;
        cout << "Amount Successfully Added: " << amount << endl;
    }
    return 0;
}
