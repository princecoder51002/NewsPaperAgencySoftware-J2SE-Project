// write a program for gross using get and set

#include <iostream>
using namespace std;

class salary
{
    float da, hra, basesalary = 10000, gross;

public:
    void dearallowance(float a)
    {
        da = a;
    }
    void houserent(float b)
    {
        hra = b;
    }
    void process()
    {
        gross = basesalary + da + hra;
    }
    float getsalary()
    {
        return gross;
    }
};
int main()
{
    float a, b, a1, b1;
    salary hardik, prince;
    cout << "enter dear allowance and house rent of hardik: \n";
    cin >> a >> b;
    hardik.dearallowance(a);
    hardik.houserent(b);
    hardik.process();
    float m = hardik.getsalary();
    cout << "enter dear allowance and house rent of prince: \n";
    cin >> a1 >> b1;
    prince.dearallowance(a1);
    prince.houserent(b1);
    prince.process();
    float n = prince.getsalary();

    cout << "gross salary of prince: " << n << "\n";
    cout << "gross salary of hardik: " << m;

    return 0;
}