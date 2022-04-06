// write a program for net salary using friend function

#include <iostream>
using namespace std;
class TAX; // forward decleration
class SALARY
{
    float salary;

public:
    void input()
    {
        cout << "enter salary: \n";
        cin >> salary;
    }
    friend void netsalary(SALARY x, TAX y);
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
    friend void netsalary(SALARY x, TAX y);
};

void netsalary(SALARY x, TAX y)
{
    float nt = x.salary - ((y.tax / 100) * x.salary);
    cout << "net salary = " << nt;
}
int main()
{
    SALARY x;
    TAX y;
    x.input();
    y.input();
    netsalary(x, y);
    return 0;
}