// write a program for reverse of a number using get and set

#include <iostream>
using namespace std;

class reverse
{
    int a, rev = 0;

public:
    void setvalue(int p)
    {
        a = p;
    }
    void process()
    {
        int r;
        while (a != 0)
        {
            r = a % 10;
            rev = rev * 10 + r;
            a = a / 10;
        }
    }
    int getnum()
    {
        return rev;
    }
};
int main()
{
    reverse x;
    int p;
    cout << "enter value of p: \n";
    cin >> p;
    x.setvalue(p);
    x.process();
    int m = x.getnum();
    cout << "reversed number: " << m;
    return 0;
}