#include<iostream>
#include<fstream>
using namespace std;
class abc{

public:
    int a,b;
    void input()
    {
        cin>>a>>b;
    }
    void display()

    {
        cout<<a<<b;
    }
};
int main()
{
    abc X[5];
    int i;
    ofstream out("kunal1");
    for(i=0;i<3;i++)
    {
    //Nout.write((char*)&X[i],sizeof(X[i]));
    X[i].input();
    out<<X[i].a<<X[i].b;
    }


}
