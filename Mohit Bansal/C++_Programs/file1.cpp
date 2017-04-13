#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    ofstream out("ms");
    cout<<"enter name"<<endl;
    char name[30];
    cin.getline(name,30);
    cout<<"enter roll"<<endl;
    int roll;
    cin>>roll;
    out<<name<<endl;
    out<<roll;
    out.close();

    ifstream in("ms");
    in.getline(name,30);
    cout<<name<<endl;
    in>>roll;
    cout<<roll<<endl;
    in.close();

}
