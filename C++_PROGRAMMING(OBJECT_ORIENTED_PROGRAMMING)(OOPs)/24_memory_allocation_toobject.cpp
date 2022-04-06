#include <iostream>
using namespace std;

class product
{
    int price, qty, bill;

public:
    void billing()
    {
        cout << "enter price and quantity: \n";
        cin >> price >> qty;
        bill = price * qty;
    }
    void show();
};
void product ::show()
{
    cout << "bill= " << bill;
}
int main()
{
    product *ptr;
    ptr = new product();
    ptr->billing();
    ptr->show();
    delete ptr;
    return 0;
}