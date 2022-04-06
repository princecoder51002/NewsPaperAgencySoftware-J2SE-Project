// write a program for gross salary of employes using class

#include <iostream>
using namespace std;

class salary
{
    float da, hra, basesalary = 10000, gross;

public:
    void dear()
    {
        cout << "enter dear allowance: \n";
        cin >> da;
    }
    void rent()
    {
        cout << "enter house rent: \n";
        cin >> hra;
    }
    void total()
    {
        gross = basesalary + hra + da;
        cout << "gross salary: " << gross;
    }
};
int main()
{
    salary prince, hardik;
    prince.dear();
    prince.rent();
    hardik.dear();
    hardik.rent();
    prince.total();
    printf("\n");
    hardik.total();
    return 0;
}