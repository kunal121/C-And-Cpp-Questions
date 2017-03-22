#include<iostream>
using namespace std;
class Array
{
public:
    int *a;
    int size_array;
    void input()
    {
        try
        {
            cin >> size_array;
            a = new int[size_array];
            int i;
            for(i=0;i<size_array;i++)
            {
                //if(i > size_array)
                  //  throw 0;
                cin >> a[i];
            }

        }
        catch(...)
        {
            cout << "Array out of bound";
        }
    }

};
int main()
{
    Array obj;
    obj.input();
    cout << obj.a[-5];
}
