#include<iostream>
#include<fstream>
using namespace std;
class abc
{
    int a,b;
public:
    void input()
    {
        cin>>a>>b;
    }
    void display()
    {
        cout<<"Output is : ";
        cout<<a<<endl<<b;
    }
};
int main()
{
    abc a,b;
    a.input();
    ofstream in("myFile.txt");
    in.write((char*)&a,sizeof(a));
    in.close();
    ifstream in1("myFile.txt");
    in1.read((char*)&b,sizeof(b));
    in1.close();
    b.display();
}
