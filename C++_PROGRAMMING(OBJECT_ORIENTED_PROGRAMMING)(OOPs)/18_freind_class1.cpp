// write a program for net salary using freind class

#include <iostream>
using namespace std;

class SALARY
{
    float salary;

public:
    void input()
    {
        cout << "enter salary: \n";
        cin >> salary;
    }
    friend class netsalary;
};
class TAX
{
    float tax;

public:
    void input()
    {
        cout << "enter tax: \n";
        cin >> tax;
    }
    friend class netsalary;
};
class netsalary
{
    float nt;

public:
    void net(SALARY x, TAX y)
    {
        nt = x.salary - ((y.tax / 100) * x.salary);
        cout << "net salary = " << nt;
    }
};
int main()
{
    SALARY x;
    TAX y;
    netsalary nt;
    x.input();
    y.input();
    nt.net(x, y);
    return 0;
}