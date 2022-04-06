// this is a program for class accesing private members of other class but it give wrong output but dont give error

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
    float p;

public:
    SALARY x;
    TAX y;

    void income()
    {
        x.input();
        y.input();
        p = x.salary + ((y.tax / 100) * x.salary);
    }
    void show()
    {
        cout << "net salary: \n"
             << p;
    }
    // friend int main();
};
int main()
{
    netsalary nt;
    nt.income();
    nt.show();
    return 0;
}