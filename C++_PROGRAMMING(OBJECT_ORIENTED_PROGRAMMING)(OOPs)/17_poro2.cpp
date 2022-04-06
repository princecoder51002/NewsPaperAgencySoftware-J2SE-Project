// write a program for difference between time of two clocks

#include <iostream>
using namespace std;

class clock
{
    int h, m, s, u;

public:
    void settime(int p, int q, int r)
    {
        h = p;
        m = q;
        s = r;
    }
    void process()
    {
        u = h * 60 * 60 + m * 60 + s;
    }
    clock difference(clock y)
    {
        clock z;
        z.u = u - y.u;
        return z;
    }
    void show()
    {
        h = u / (60 * 60);
        m = (u % (60 * 60) / 60);
        s = (u % (60 * 60)) % 60;
        cout << "difference is: " << h << " hours " << m << " minutes " << s << " seconds";
    }
};
int main()
{
    clock x, y;
    int h1, m1, s1, h2, m2, s2;
    cout << "enter time of clock x: \n";
    cin >> h1 >> m1 >> s1;
    cout << "enter time of clock y: \n";
    cin >> h2 >> m2 >> s2;
    x.settime(h1, m1, s1);
    y.settime(h2, m2, s2);
    x.process();
    y.process();
    clock z;
    z = x.difference(y);
    z.show();
    return 0;
}