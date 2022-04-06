#include <iostream>
using namespace std;

class rect
{
public:
    void area()
    {
        cout << "area of rectangle\n";
    }
};
class circle : public rect
{
public:
    void area()
    {
        cout << "area of circle\n";
    }
};
int main()
{
    circle cobj;
    cobj.area();

    cobj.rect::area();
    return 0;
}