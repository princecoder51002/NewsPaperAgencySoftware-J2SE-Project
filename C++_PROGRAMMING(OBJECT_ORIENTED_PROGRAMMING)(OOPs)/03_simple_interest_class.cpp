// write a program for simple interest using class

#include <iostream>
using namespace std;

class simpleinterest
{
    float p, r, t, s;

public:
    void principalvalue()
    {
        cout << "enter principal value: \n";
        cin >> p;
    }
    void rateofinterest()
    {
        cout << "enter rate of interest: \n";
        cin >> r;
    }
    void time()
    {
        cout << "enter time: \n";
        cin >> t;
    }
    void si()
    {
        s = p * r * t/100;
        cout << "simple interest =" << s << "\n";
    }
};
int main()
{
    simpleinterest x;
    x.principalvalue();
    x.rateofinterest();
    x.time();
    x.si();
    return 0;
}