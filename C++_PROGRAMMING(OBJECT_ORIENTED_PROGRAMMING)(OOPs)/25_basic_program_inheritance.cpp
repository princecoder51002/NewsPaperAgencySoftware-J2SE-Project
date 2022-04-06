#include <iostream>
using namespace std;

class rect
{
public:
    void rarea()
    {
        cout << "area of rectangle: \n";
    }
};
class square : public rect
{
public:
    void sarea()
    {
        cout << "area of square\n";
    }
};
class circle
{
public:
    void carea()
    {
        cout << "area of circle\n";
    }
};
class shapes : public square, public circle
{
public:
    void callall()
    {
        rarea();
        sarea();
        carea();
    }
};
int main()
{
    shapes obj;
    obj.callall();
    return 0;
}