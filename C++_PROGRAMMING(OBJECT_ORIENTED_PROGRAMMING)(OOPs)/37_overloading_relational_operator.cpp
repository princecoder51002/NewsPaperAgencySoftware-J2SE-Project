#include <iostream>
using namespace std;

class height
{
    int f, i;

public:
    void input()
    {
        cout << "enter feet and inch: \n";
        cin >> f >> i;
    }
    int operator==(height aobj)
    {
        if (f * 12 + i == aobj.f * 12 + i)
            return (1);
        else
            return (0);
    }
    int operator<(height aobj)
    {
        if (f * 12 + i < aobj.f * 12 + aobj.i)
            return (1);
        else
            return (0);
    }
};
int main()
{
    height amnobj, rmnobj;
    amnobj.input();
    rmnobj.input();
    if (amnobj == rmnobj)
        cout << "same height\n";
    else
        cout << "height is not same\n";
    return 0;
}