#include<iostream>
using namespace std;
class test
{
    int *arr;
    int i,even=0,odd=0;
public:
    test(int a)
    {
        cout<<"Dynamic\n";
        i=a;
        arr=new int(i);
        cout<<"Enter "<<i<<" Elements\n";
        for(int j=0;j<i;j++)
        {
            cin>>arr[j];
        }
    }
    void count()
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }
    void show()
    {
        cout<<"Even elements are "<<even<<" Odd elements are "<<odd;
    }
};
int main()
{
    int i;
    cout<<"Enter the number of elements";
    cin>>i;
    test obj1(i);
    obj1.count();
    obj1.show();
    return 0;
}
