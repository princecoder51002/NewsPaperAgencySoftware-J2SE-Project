// basic program for class

#include <iostream>
using namespace std;
class bank
{
    float bal;

public:
    void openaccount()
    {
        cout << "enter opening balance: \n";
        cin >> bal;
    }
    void show()
    {
        cout << "\nbalance = " << bal << "\n";
    }
};
int main()
{
    bank amn;
    // amn.bal = 500; // not accessible
    // cout<<amn.bal<<bal<<"\n"; // not accessible
    amn.openaccount();
    amn.show();
    return 0;
}