// write a program for average of heights of students using friend function

#include <iostream>
using namespace std;

class height2;
class height1
{
    int f;

public:
    void input(int i)
    {
        cout << "enter feet of " << i + 1 << "stedent: \n";
        cin >> f;
    }
    friend void growth(height1 x[], height2 y[], int n);
};
class height2
{
    int I;

public:
    void input(int i)
    {
        cout << "enter inches of " << i + 1 << " student: \n";
        cin >> I;
    }
    friend void growth(height1 x[], height2 y[], int n);
};
void growth(height1 x[], height2 y[], int n)
{
    int m, p, sum = 0, a, b;
    float avg;
    for (p = 0; p < n; p++)
    {
        sum = sum + x[p].f * 12 + y[p].I;
    }
    avg = sum / n;
    a = avg / 12;
    b = (sum / n) % 12;
    cout << "average height: " << a << " feet " << b << " inches ";
}
int main()
{
    int n, i;
    cout << "enter no. of students: \n";
    cin >> n;
    height1 x[n];
    height2 y[n];
    for (i = 0; i < n; i++)
    {
        x[i].input(i);
        y[i].input(i);
    }
    growth(x, y, n);
    return 0;
}