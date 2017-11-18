#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector <int> myInt;
    cout<<myInt.size()<<endl;
    myInt.push_back(20);
    myInt.push_back(10);
    for(int i=0;i<5;i++)
    {
        myInt.push_back(i);
    }
    int s=myInt.size();
    for(int i=0;i<s;i++)
    {
        cout<<myInt.back()<<"  ";
        myInt.pop_back();
    }
}
