#include <iostream>
using namespace std;

class a
{
public:
    a()
    {
        cout << "\n default constructor of base";
    }
    ~a()
    {
        cout << "\n destructor of base";
    }
};
class d : public a
{
public:
    d()
    {
        cout << "\n constructor of d";
    }
    ~d()
    {
        cout << "\n destructor of d";
    }
};
int main()
{
    d obj;
    return 0;
}