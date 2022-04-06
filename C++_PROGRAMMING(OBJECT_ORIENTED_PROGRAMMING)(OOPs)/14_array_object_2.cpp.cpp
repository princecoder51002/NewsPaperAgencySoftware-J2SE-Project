// write a program for array of objects(as my choice)

#include <iostream>
using namespace std;

class shop
{
    float price, gst, amount;

public:
    void input(int i)
    {
        cout << "enter price of " << i + 1 << " item: \n";
        cin >> price;
    }
    void process()
    {
        gst = price * 18 / 100;
    }
    void total()
    {
        amount = price + gst;
    }
    float gettotal()
    {
        return amount;
    }
};
int main()
{
    int n, i, p;
    cout << "enter no. of items: \n";
    cin >> n;
    shop s[n];
    for (i = 0; i < n; i++)
    {
        s[i].input(i);
        s[i].process();
        s[i].total();
    }
    float max = s[0].gettotal();
    for (i = 0; i < n; i++)
    {
        if (max < s[i].gettotal())
        {
            max = s[i].gettotal();
            p = i + 1;
        }
    }
    cout << "most expensive thing of the store have price: " << max << "\n";
    cout << "item no. : " << p;
    return 0;
}