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
class circle
{
public:
    void area()
    {
        cout << "area of circle\n";
    }
};
class shapes : public rect, public circle
{
};
int main()
{
    shapes obj;
    // obj.area(); this will lead to ambiguity error
    // To solve this problem we use (::)  scope resolution operator
    obj.rect::area();
    obj.circle::area();
    return 0;
}