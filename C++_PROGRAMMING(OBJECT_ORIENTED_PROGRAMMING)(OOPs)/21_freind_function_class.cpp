// write a program having friend function and friend class as well

#include <iostream>
using namespace std;

class mathematics
{
    int m;

public:
    void input()
    {
        cout << "enter marks in mathematics: \n";
        cin >> m;
    }
    friend class Total;
};
class science

{
    int s;

public:
    void input()
    {
        cout << "enter marks in science: \n";
        cin >> s;
    }
    friend class Total;
};
class Total
{
    int total;

public:
    void tot(mathematics ma, science sa)
    {
        total = ma.m + sa.s;
    }
    friend void percentage(Total ta);
};
void percentage(Total ta)
{
    float p = (ta.total / 2);
    cout << "percentage is: " << p;
}
int main()
{
    mathematics ma;
    science sa;
    ma.input();
    sa.input();
    Total ta;
    ta.tot(ma, sa);
    percentage(ta);
    return 0;
}