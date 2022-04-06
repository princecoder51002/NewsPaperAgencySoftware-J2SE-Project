// write a program for greatest of three numbers using class

#include <iostream>
using namespace std;
class greatest
{
    int a, b, c;

public:
    void num1()
    {
        cout << "enter value of a: \n";
        cin >> a;
    }
    void num2()
    {
        cout << "enter value of b:\n";
        cin >> b;
    }
    void num3()
    {
        cout << "enter value of c: \n";
        cin >> c;
    }
    void answer()
    {
        if (a > b && a > c)
            cout << "a is greatest\n";
        else if (b > a && b > c)
            cout << "b is greatest";
        else
            cout << "c is greatest";
    }
};
int main()
{
    greatest x;
    x.num1();
    x.num2();
    x.num3();
    x.answer();
    return 0;
}