#include <iostream>
using namespace std;

class b
{
public:
    b()
    {
        cout << "b default\n";
    }
    b(int i)
    {
        cout << "I= " << i << "\n";
    }
};
class d : public b
{
public:
    d()
    {
        cout << "d constructor\n";
    }
    d(float y, int s) : b(s)
    {
        cout << "\n y= " << y;
    }
};
int main()
{
    d obj;
    d obj2(2.8, 6);
    return 0;
}