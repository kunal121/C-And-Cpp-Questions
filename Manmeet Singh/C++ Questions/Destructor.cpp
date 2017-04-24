#include<iostream>
using namespace std;

class abc
{
    static int count;
    public:
        abc()
        {
            cout<<"constructor";
            count++;
        }
        ~abc()
        {
            cout<<"Destructor";
        }
};
int abc::count;
int main()
{
    cout<<"Inside main"<<"\n";
    cout<<"Create first obj"<<"\n";
    abc o;
    {
        cout<<"Inside block 1"<<"\n";
        cout<<"create=obj"<<"\n";
        abc o1,o2;
        cout<<"leaving block"<<"\n";
    }
    cout<<"Back inside main";
}
