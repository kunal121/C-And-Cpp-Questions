#include<iostream>
using namespace std;
class test
{
    int *arr;
    int i;
    int large;
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
    void la()
    {
         large=arr[0];
        for(int j=1;j<i;j++)
        {
            if(large<arr[j])
            {
                large=arr[j];
            }
        }
    }
    void show()
    {
        cout<<"the largest of array is "<<large;
    }
};
int main()
{
    int i;
    cout<<"Enter the number of elements";
    cin>>i;
    test obj1(i);
    obj1.la();
    obj1.show();
    return 0;
}

