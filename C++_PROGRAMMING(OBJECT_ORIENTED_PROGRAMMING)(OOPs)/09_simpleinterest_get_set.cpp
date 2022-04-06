// write a program for greatest of 3 no.s using get and set

#include <iostream>
using namespace std;

class greatest
{
    int p, q, r;

public:
    void setnum(int a, int b, int c)
    {
        p = a;
        q = b;
        r = c;
    }
    int process()
    {
        if (p > q && p > r)
            return p;
        else if (q > p && q > r)
            return q;
        else
            return r;
    }
};
int main()
{
    greatest x;
    int a, b, c;
    cout << "enter value of a, b, c: \n";
    cin >> a >> b >> c;
    x.setnum(a, b, c);
    int r = x.process();
    cout << r << " is greatest";
    return 0;
}