#include <iostream>
using namespace std;

class bank
{
    float bal;

public:
    bank()
    {
        bal = 5000;
    }
    void show()
    {
        cout << "\n balance= " << bal
             << "\n";
    }
    bank(float b)
    {
        bal = b;
    }
    bank(bank &obj)
    {
        bal = obj.bal;
        obj.bal = 0;
    }
    ~bank()
    {
        cout << "alvida \n";
    }
};
int main()
{
    bank amn;
    amn.show();
    bank rmn(71000.71);
    rmn.show();
    bank chmn(rmn);
    chmn.show();
    rmn.show();
    return 0;
}