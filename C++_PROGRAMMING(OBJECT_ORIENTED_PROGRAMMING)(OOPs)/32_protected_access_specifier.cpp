#include <iostream>
using namespace std;

class college
{
protected:
    float cfee;

public:
    void input1()
    {
        cout << "enter college fees: \n";
        cin >> cfee;
    }
};
class training : public college
{
protected:
    float tfee, total;

public:
    void input2()
    {
        input1();
        cout << "enter training fees: \n";
        cin >> tfee;
    }

    float process()
    {
        total = tfee + cfee;
        return total;
    }
};
class pocketmoney
{
protected:
    float pm;

public:
    void input3()
    {
        cout << "enter pocket money: \n";
        cin >> pm;
    }
};
class parents : public training, public pocketmoney
{
protected:
    float u;

public:
    void dototal()
    {
        input2();
        input3();
        u = cfee + tfee + pm;
        cout << "sum of total fees: \n"
             << u;
    }
};

int main()
{
    parents x;
    x.dototal();
    return 0;
}