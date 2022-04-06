// write a program for ATM machine

#include <iostream>
using namespace std;

class ATM
{
    int p, a, bal = 18000, code, prince;

public:
    void insert()
    {
        cout << "insert ATM card: \n";
        code = 123;
        if (code != 123)
            cout << "sorry wrong card";
        else
            prince = 1;
    }
    void pin()
    {
        if (prince != 1)
            cout << "complete previous task";
        else if (prince == 1)
        {
            cout << "enter 4-digit pin: "
                 << "\n";
            cin >> p;
            if (p == 5678)
                prince = 2;
            else
                cout << "wrong pin";
        }
    }
    void amount()
    {
        if (prince != 2)
            cout << "check your pin";
        else if (prince == 2)
        {
            cout << "enter amount to be withdraw";
            cin >> a;
            if (a > 18000)
                cout << "Insufficient balance";
            else
                cout << "collect your cash and receipt";
        }
    }
};
int main()
{
    ATM x;
    x.insert();
    x.pin();
    x.amount();
    return 0;
}