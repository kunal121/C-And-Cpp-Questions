#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char str[50];
    int count1=0;
    ifstream in("ms");
    //ifstream in1("ms2");
    /*while(in)
    {
        in.getline(str,3);
        cout<<str<<endl;
cout<<in.tellg()<<endl;
        count1++;
    }*/
    while(in)
    {
        in.getline(str,'\n');
        cout<<str;
        count1++;

    }
    cout<<endl<<count1;
    /*while(in1)
    {
        in1.getline(str,30);
        cout<<str;
    }*/
    in.close();
    //in1.close();
}
