#include <iostream>
using namespace std;

class arrays
{
    int *a, n, i;

public:
    void inputarray(int n1)
    {
        n = n1;
        a = new int[n];
        for (i = 0; i < n; i++)
        {
            cout << "enter value: \n";
            cin >> a[i];
        }
    }
    void show()
    {
        for (i = 0; i < n; i++)
        {
            cout << a[i] << "\n";
        }
    }
    arrays operator+(arrays obj2)
    {
        arrays bhaiobj;
        bhaiobj.a = new int[n];
        bhaiobj.n = n;
        for (i = 0; i < n; i++)
        {
            bhaiobj.a[i] = a[i] + obj2.a[i];
        }
        return bhaiobj;
    }
};
int main()
{
    arrays obj1, obj2, sumobj;
    obj1.inputarray(3);
    obj2.inputarray(3);
    sumobj = obj1 + obj2;
    sumobj.show();
    return 0;
}