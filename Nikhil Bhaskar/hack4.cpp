#include<iostream>
using namespace std;
class b;
class a
{
//int num1;
public:
    int num1;
    void set1()
    {
       cin>>num1;
    }
};
class b
{
int num2,i;
public:
    void set2()
    {
       cin>>num2;
    }
    int diff(a obj1)
    {

     i=obj1.num1-num2;
     return i;
    }
     int add(a obj1)
    {

    num2=obj1.num1+num2;
     return num2;
    }

};






int main()
{
    a obj1;
    b obj2;
    obj1.set1();
    obj2.set2();
    cout<<obj2.diff(obj1)<<endl;
    cout<<obj2.add(obj1);
    return 0;

}
