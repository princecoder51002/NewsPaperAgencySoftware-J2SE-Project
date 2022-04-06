#include <iostream>
using namespace std;

class college
{
    float cfee;

public:
    float input(float x)
    {
        cfee = x;
        return cfee;
    }
};
class training : public college
{
    float tfee, x;

public:
    float input2()
    {
        cout << "enter training fee: \n";
        cin >> tfee;
        cout << "enter college fee: \n";
        cin >> x;

        float m = tfee + input(x);
        return m;
    }
};
class pocketmoney
{
    float pm;

public:
    float input3(float y)
    {
        pm = y;
        return pm;
    }
};
class parents : public training, public pocketmoney
{
    float s, y;

public:
    void tf()
    {
        float p = input2();
        cout << "enter pocket money: \n";
        cin >> y;
        float q = input3(y);
        float r = p + q;

        cout << "sum of total feeses: " << r;
    }
};
int main()
{
    parents x;
    x.tf();
    return 0;
}