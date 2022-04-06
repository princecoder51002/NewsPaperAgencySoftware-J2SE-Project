// write a program for volume of cylinder and cone using get and set

#include <iostream>
using namespace std;

class volume
{
    float r, h, vco, vcl;

public:
    void setdimensions(float a, float b)
    {
        r = a;
        h = b;
    }
    void process()
    {
        vco = 3.14 * r * r * h / 3;
        vcl = 3.14 * r * r * h;
    }
    float cone()
    {
        return vco;
    }
    float cylinder()
    {
        return vcl;
    }
};
int main()
{
    volume co, cy;
    float a, b;
    cout << "enter radius and height: \n";
    cin >> a >> b;
    co.setdimensions(a, b);
    cy.setdimensions(a, b);
    co.process();
    cy.process();
    float p = co.cone();
    float r = cy.cylinder();
    cout << "volume of cyliner= " << r << "\n";
    cout << "volume of cone= " << p;
    return 0;
}