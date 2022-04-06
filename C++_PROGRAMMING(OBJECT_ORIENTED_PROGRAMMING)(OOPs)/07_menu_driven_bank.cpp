// write a menu driven program for bank machine

#include <iostream>
using namespace std;

class bank
{
    float bal = 5000, amount, total, cb;
    int ch;

public:
    void deposit()
    {
        cout << "enter amount to be deposited: \n";
        cin >> amount;
        total = amount + bal;
        cout << "total balance: " << total << "\n\n\n\n";
    }
    void withdraw()
    {
        cout << "enter amount to be withdrawn: \n";
        cin >> amount;
        cb = bal - amount;
        cout << "current balance: " << cb << "\n\n\n\n\n";
    }
    void enquiry()
    {
        cout << "balance= " << bal << "\n\n\n\n";
    }
    void cases()
    {
        do
        {
            cout << "*****************MENU DRIVEN PROGRAM***********\n";
            cout << "press 1 for deposit\n";
            cout << "press 2 for withdraw\n";
            cout << "press 3 for balance enquiry\n";
            cout << "enter your choice: \n";
            cin >> ch;
            switch (ch)
            {
            case 1:
                deposit();
                break;
            case 2:
                withdraw();
                break;
            case 3:
                enquiry();
                break;
            default:
                cout << "invalid choice\n";
            }
        } while (ch = !0);
    }
};
int main()
{
    bank x;
    x.cases();
    return 0;
}