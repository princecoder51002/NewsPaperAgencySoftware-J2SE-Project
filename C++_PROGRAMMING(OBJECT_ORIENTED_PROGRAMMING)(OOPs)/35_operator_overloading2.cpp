#include <iostream>
using namespace std;

class heights
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
    heights operator-(heights a)
    {
        heights z;
        z.h = abs(h - a.h);
        return z;
    }
    void show()
    {
        f = h / 12;
        i = h % 12;
        cout << "difference is: " << f << "feet" << i << "inch";
    }
};
int main()
{
    heights hardik, prince;
    prince.setheight(5, 4);
    hardik.setheight(4, 1);
    prince.process();
    hardik.process();
    heights saksham = hardik - prince;
    saksham.show();
    return 0;
}