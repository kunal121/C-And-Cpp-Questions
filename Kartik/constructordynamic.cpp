#include<iostream>
using namespace std;
class test
{
    int *arr;
    int i;
public:
    test(int a)
    {
        cout<<"Dynamic\n";
        i=a;
        arr=new int(i);
        cout<<"Enter "<<i<<" Elements";
        for(int j=0;j<i;j++)
        {
            cin>>arr[j];
        }
    }
    void show()
    {
        for(int j=0;j<i;j++)
        {
            cout<<arr[j]<<"\n";
        }
    }
};
int main()
{
    test obj1(2),obj2(3);
    obj1.show();
    obj2.show();
    return 0;
}
