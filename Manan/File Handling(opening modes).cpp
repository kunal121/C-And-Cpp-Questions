#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream in("file.txt",ios::trunc);
    if(in.is_open())
    {
        cout<<"File Successfully opened"<<endl;
    }
    else
    {
        cout<<"Not Opened"<<endl;
    }
    in.close();


    ifstream in1("file.txt",ios::app);
    if(in1.is_open())
    {
        cout<<"File Successfully opened"<<endl<<in1.tellg()<<endl;
    }
    else
    {
        cout<<"Not Created"<<endl;
    }
    in1.close();

    ifstream in2("file.txt",ios::ate);
    if(in2.is_open())
    {
        cout<<"File Successfully opened"<<endl<<in2.tellg();
    }
    else
    {
        cout<<"Not Created"<<endl;
    }
    in2.close();
}
