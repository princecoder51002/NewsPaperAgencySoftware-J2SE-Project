// write a program for n students using array of objects, also find maximum percentage and minimum total marks

#include <iostream>
using namespace std;

class students
{
    float m, p, c, total, per;

public:
    void input(int i)
    {
        cout << "enter marks in maths , physics and chemistry of " << i + 1 << "student: \n";
        cin >> m >> p >> c;
    }
    void process1()
    {
        total = m + p + c;
    }
    void process2()
    {
        per = (m + p + c) / 300 * 100;
    }
    float gettotal()
    {
        return total;
    }
    float getpercentage()
    {
        return per;
    }
};
int main()
{
    int n, i;
    cout << "enter no. of students: \n";
    cin >> n;
    students s[n];
    for (i = 0; i < n; i++)
    {
        s[i].input(i);
        s[i].process1();
        s[i].process2();
    }
    float max = s[0].getpercentage();
    float min = s[0].gettotal();
    for (i = 0; i < n; i++)
    {
        if (max < s[i].getpercentage())
            max = s[i].getpercentage();
        if (min > s[i].gettotal())
            min = s[i].gettotal();
    }
    cout << "maximum percentage: " << max << "\n";
    cout << "minimum total: " << min;
    return 0;
}