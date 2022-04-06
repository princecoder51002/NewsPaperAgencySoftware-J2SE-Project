#include <iostream>
#include <fstream>
using namespace std;
class filecopy
{
    ifstream fin;
    ofstream fout;
    char src[20], des[20], ch;
    public:
    void docopy()
    {
       cout<<"enter file name to read: \n";
       cin>>src;
       fin.open(src,ios::in);
       if(fin.fail())
       {
           cout<<"file not found";
           return;
       }
      cout<<"enter file name to write: \n";
      cin>>des;
      fout.open(des,ios::out);
      while(!fin.eof())
      {
          ch=fin.get();
          fout<<ch;
          cout<<ch;
      }
    }
    ~filecopy()
    {
        fin.close();
        fout.close();
    }
};

int main(){
  filecopy  obj;
  obj.docopy();
return 0;
}