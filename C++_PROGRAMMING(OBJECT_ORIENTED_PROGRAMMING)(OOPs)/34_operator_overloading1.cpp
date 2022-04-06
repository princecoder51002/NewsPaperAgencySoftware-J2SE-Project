#include <iostream>
using namespace std;

class bank
{
    int sb, cb;

public:
    void setbal(int s, int c)
    {
        sb = s;
        cb = c;
    }
    void show()
    {
        cout << sb << " " << cb << "\n";
    }
    void operator++(int)
    {
        sb++;
        cb++;
    }
    void operator--()
    {
        sb--;
        cb--;
    }
    void operator+=(bank robj)
    {
        sb = sb + robj.sb;
        cb = cb + robj.cb;
    }
    bank operator+(bank aobj)
    {
        bank bhai;
        bhai.sb = sb + aobj.sb;
        bhai.cb = cb + aobj.cb;
        return bhai;
    }
};
int main()
{
    bank amnobj, rmnobj;
    amnobj.setbal(1, 2);
    amnobj++;
    amnobj.show();
    --amnobj;
    amnobj.show();
    rmnobj.setbal(2, 3);
    amnobj += rmnobj;
    amnobj.show();
    bank chmnobj = rmnobj + amnobj;
    chmnobj.show();
    return 0;
}