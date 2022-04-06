// write a program for difference between heights two persons

#include <iostream>
using namespace std;

class height
{
    int f, i, h;

public:
    void setheight(int p, int q)
    {
        f = p;
        i = q;
    }
    void process()
    {
        h = f * 12 + i;
    }
    height difference(height prince)
    {
        height z;
        z.h = h - prince.h;
        return z;
    }
    void show()
    {
        f = h / 12;
        i = h % 12;
        cout << "difference is: " << f << "feet " << i << "inch";
    }
};
int main()
{
    height prince, hardik;
    int p1, q1, p2, q2;
    cout << "enter height of prince: \n";
    cin >> p1 >> q1;
    cout << "enter height of hardik: \n";
    cin >> p2 >> q2;
    prince.setheight(p1, q1);
    hardik.setheight(p2, q2);
    prince.process();
    hardik.process();
    height p;
    p = hardik.difference(prince);
    p.show();
    return 0;
}