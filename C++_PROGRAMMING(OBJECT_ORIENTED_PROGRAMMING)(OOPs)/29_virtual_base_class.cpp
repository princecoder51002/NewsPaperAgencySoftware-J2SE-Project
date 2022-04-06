#include <iostream>
using namespace std;

class rect
{
public:
    void rarea()
    {
        cout << "area of rectangle\n";
    }
};
class square : public virtual rect
{ // if we dont use virtual then it will leads to ambiguity
};
class circle : virtual public rect
{
};
class shapes : public square, public circle
{
};
int main()
{
    shapes obj;
    obj.rarea();
    return 0;
}