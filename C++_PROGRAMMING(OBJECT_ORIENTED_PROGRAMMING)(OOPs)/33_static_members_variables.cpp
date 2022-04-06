#include <iostream>
using namespace std;

class students
{
    int roll;
    static int count;
    public:
    students(int rol)
    {
        roll=rol;
        count++;
    }
    void show()
    {
        cout<<roll<<" count= "<<count<<"\n";
    }
    static void showcount()
    {
        cout<<"\n total students= "<<count;
    }
};
int students::count=0;
int main(){
   students amn(101);
   amn.show();
   students rmn(102);
   rmn.show();
   students::showcount();
return 0;
}

