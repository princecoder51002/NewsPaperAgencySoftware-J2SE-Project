// write a program for adding 2 numbers using referencing

#include <iostream>
using namespace std;

class number
{
    int a;

public:
    void add(int &x, int &y)
    {
        x = 8;
        y = 10;
    }
};
int main()
{
    number x;
    int p, q, m;
    cout << "enter value of p and q: \n";
    cin >> p >> q;
    x.add(p, q);
    m = p + q;
    cout << "sum of p and q: " << m;
    return 0;
}