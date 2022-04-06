// write a program for volume of cylinder and cone

#include <iostream>
using namespace std;

class volume
{
    float r, h, v1, v2;

public:
    void radius()
    {
        cout << "enter radius: \n";
        cin >> r;
    }
    void height()
    {
        cout << "enter height: \n";
        cin >> h;
    }
    void vco()
    {
        v1 = 3.14 * r * r * h / 3;
        cout << "volume of cone: " << v1 << "\n";
    }
    void vcl()
    {
        v2 = 3.14 * r * r * h;
        cout << "volume of cylinder: " << v2;
    }
};
int main()
{
    volume cone, cylinder;
    cone.radius();
    cone.height();
    cylinder.radius();
    cylinder.height();
    cone.vco();
    cylinder.vcl();
    return 0;
}